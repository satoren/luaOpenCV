import sys
import re
import json
import clang.cindex
from clang.cindex import Index
from clang.cindex import Config
from clang.cindex import TranslationUnit
from clang.cindex import CursorKind

import os.path

def namespace_name(cursor):
    namespaces = []
    parent_cursor = cursor.lexical_parent
    while parent_cursor:
        if parent_cursor.kind == CursorKind.NAMESPACE or  \
        parent_cursor.kind == CursorKind.STRUCT_DECL or  \
        parent_cursor.kind == CursorKind.CLASS_DECL or  \
        parent_cursor.kind == CursorKind.CLASS_TEMPLATE  or  \
        parent_cursor.kind == CursorKind.CLASS_TEMPLATE_PARTIAL_SPECIALIZATION:
            namespaces.insert(0, parent_cursor.displayname)
        parent_cursor = parent_cursor.lexical_parent
    return '::'.join(namespaces)


def insert_prefix_to_namespace(namespace,prefix):
    names = []
    for name in namespace.split("::"):
        names.append(prefix + name)
    return "::".join(names);


class ArgInfo(object):
  __default_parameter = None
  __cursor = None
  def __init__(self, parm_cursor):
    assert (parm_cursor.kind == CursorKind.PARM_DECL)
    self.__cursor = parm_cursor
    
    detect_default_param = False
    default_param_token = []
    for token in parm_cursor.get_tokens():
        if detect_default_param:
            default_param_token.append(token.spelling)
        if token.kind == clang.cindex.TokenKind.PUNCTUATION and token.spelling == "=":
            detect_default_param = True
    if len(default_param_token) >0 :
        default_param_token.pop()
        self.__default_parameter = ' '.join(default_param_token)

  @property
  def name(self):
    return self.__cursor.spelling
  @property
  def type_name(self):
    return self.__cursor.type.spelling
  @property
  def default_parameter(self):
    return self.__default_parameter

class FunctionInfo(object):
    __cursor = None
    __namespace = ""
    __parameters = None
    __pointer_type_name = None
    def __init__(self, fn_cursor):
        assert (fn_cursor.kind == CursorKind.FUNCTION_DECL or \
        fn_cursor.kind == CursorKind.CXX_METHOD or\
        fn_cursor.kind == CursorKind.CONSTRUCTOR or\
        fn_cursor.kind == CursorKind.FUNCTION_TEMPLATE)
        self.__parameters = []
        self.__cursor = fn_cursor
            
        for arg in fn_cursor.get_arguments():
            arg_info = ArgInfo(arg)
            self.__parameters.append(arg_info)

        self.__namespace = namespace_name(fn_cursor)
        if fn_cursor.type.kind == clang.cindex.TypeKind.UNEXPOSED :
            return
        arg_types = []
        for argtype in fn_cursor.type.argument_types():
            arg_types.append(argtype.spelling)
        if fn_cursor.kind == CursorKind.CXX_METHOD and fn_cursor.is_static_method() == False:
            class_cursor = fn_cursor.lexical_parent
            classname = namespace_name(class_cursor) + "::" + class_cursor.spelling;
            self.__pointer_type_name = "%s (%s::*)(%s)" % (self.result_type_name,classname,','.join(arg_types))
            if fn_cursor.is_const_method():
                self.__pointer_type_name = self.__pointer_type_name + " const"
        else:
            self.__pointer_type_name = "%s (*)(%s)" % (self.result_type_name,','.join(arg_types))

    @property
    def name(self):
        return self.__namespace +"::" + self.__cursor.spelling
    @property
    def displayname(self):
        return self.__namespace +"::" + self.__cursor.displayname
    @property
    def type_name(self):
        return self.__cursor.type.spelling

    @property
    def pointer_type_name(self):
        return self.__pointer_type_name

    @property
    def function_name(self):
        return self.__cursor.spelling 
    @property
    def result_type_name(self):
        return self.__cursor.result_type.spelling
        
    def parameters(self):
        return self.__parameters
    @property
    def namespace(self):
        return self.__namespace
        
    def is_public_member(self):
        return self.__cursor.access_specifier != clang.cindex.AccessSpecifier.PROTECTED and self.__cursor.access_specifier != clang.cindex.AccessSpecifier.PRIVATE
    def is_static_method(self):
        if self.__cursor.kind == CursorKind.CXX_METHOD:
            return self.__cursor.is_static_method()
        return True
    def is_pure_virtual_method(self):
        if self.__cursor.kind == CursorKind.CXX_METHOD:
            return self.__cursor.is_pure_virtual_method()
        return False
    def is_virtual_method(self):
        if self.__cursor.kind == CursorKind.CXX_METHOD:
            return self.__cursor.is_virtual_method()
        return False

    @property
    def parameter_count(self):
        return len(self.parameters())

    @property
    def default_parameter_count(self):
        num = 0
        for param in self.parameters():
            if param.default_parameter:
                num = num + 1
        return num
    def is_template_specialized(self):
        if clang.cindex.conf.lib.clang_getSpecializedCursorTemplate(self.__cursor):
            return True

class PropertyInfo(object):
  __cursor = None
  __namespace = ""
  def __init__(self, cursor):
    assert (cursor.kind == CursorKind.FIELD_DECL)
    self.__cursor = cursor
    self.__namespace = namespace_name(cursor)
  @property
  def name(self):
    return self.__namespace +"::" + self.__cursor.spelling
  @property
  def property_name(self):
    return self.__cursor.spelling
  @property
  def displayname(self):
    return self.__namespace +"::" + self.__cursor.displayname

  def is_public_member(self):
    return self.__cursor.access_specifier != clang.cindex.AccessSpecifier.PROTECTED and self.__cursor.access_specifier != clang.cindex.AccessSpecifier.PRIVATE
  def is_array(self):
    return self.__cursor.type.get_array_size() != -1

class ClassInfo(object):
    __cursor = None
    __base_class = None
    __namespace = ""
    __methods = None
    __operators = None
    __properties = None
    __constructors = None
    def __init__(self, cursor):
        assert (cursor.kind == CursorKind.STRUCT_DECL or cursor.kind == CursorKind.CLASS_DECL or CursorKind.CLASS_TEMPLATE)
    
        self.__cursor = cursor
        self.__namespace = namespace_name(cursor)
        methods = []
        for child in cursor.get_children():
            if child.kind == CursorKind.CXX_METHOD:
                fnc = FunctionInfo(child)                
                methods.append(fnc)

            if child.kind == CursorKind.CXX_BASE_SPECIFIER:
                if self.__base_class == None:
                    self.__base_class = []
                if child.referenced.kind != CursorKind.NO_DECL_FOUND and child.referenced.kind != CursorKind.TYPEDEF_DECL:
                    self.__base_class.append(ClassInfo(child.referenced))

            if child.kind == CursorKind.CONSTRUCTOR:
                constructor = FunctionInfo(child)
                if self.__constructors == None:
                    self.__constructors = []
                self.__constructors.append(constructor)
                
        methods_map = {}
        operators_map = {}
        for f in methods:
            if "operator" in f.function_name:
                addto = operators_map
            else:
                addto = methods_map
            if addto.has_key(f.name):
                addto[f.name].append(f)
            else:
                addto[f.name] = [f]
        self.__methods = methods_map.values()
        self.__operators = operators_map.values()
        
        self.__properties = []
        for child in cursor.get_children():
            if child.kind == CursorKind.FIELD_DECL:
                prop = PropertyInfo(child)
                if not prop.is_array():
                    self.__properties.append(prop)
        
    @property
    def name(self):
        return self.__namespace +"::" + self.__cursor.displayname
    @property
    def displayname(self):
        return self.__namespace +"::" + self.__cursor.displayname
    @property
    def class_name(self):
        return self.__cursor.displayname

    def medhods(self):
        return self.__methods

    def operators(self):
        return self.__operators

    def properties(self):
        return self.__properties

    def constructors(self):
        return self.__constructors

    @property
    def has_base_class(self):
        return self.__base_class != None

    @property
    def base_class_count(self):
        if self.__base_class == None:
            return 0
        return len(self.__base_class)
        
    def base_class_names(self):
        for base in self.__base_class:
            yield base.name

    def is_template_specialized(self):
        if clang.cindex.conf.lib.clang_getSpecializedCursorTemplate(self.__cursor):
            return True

    def get_pure_virtual_functions(self):
        fncs = []
        if self.__base_class != None:
            for base in self.__base_class:
                fncs = fncs + base.get_pure_virtual_functions()
        for omfn in self.medhods() + self.operators():
            for mfn in omfn:
                if mfn.is_pure_virtual_method():
                    fncs.append(mfn)
                else:
                    for fn in fncs:
                        if fn.type_name == mfn.type_name:
                            fncs.remove(fn)
                            break
        return fncs

    def has_pure_virtual(self):
        return len(self.get_pure_virtual_functions()) > 0

    def is_public_member(self):
        return self.__cursor.access_specifier != clang.cindex.AccessSpecifier.PROTECTED and self.__cursor.access_specifier != clang.cindex.AccessSpecifier.PRIVATE

class ConstantField(object):
    __cursor = None
    __namespace = ""
    def __init__(self, cursor):
        self.__cursor = cursor
        self.__namespace = namespace_name(cursor)
    @property
    def name(self):
        return self.__namespace +"::" + self.__cursor.spelling
    @property
    def displayname(self):
        return self.__namespace +"::" + self.__cursor.displayname
    @property
    def field_name(self):
        return self.__cursor.spelling

    def is_public_member(self):
        return self.__cursor.access_specifier != clang.cindex.AccessSpecifier.PROTECTED and self.__cursor.access_specifier != clang.cindex.AccessSpecifier.PRIVATE



class BindingData(object):
    __function_list=None
    __class_list=None
    __constant_field_list=None
    def __init__(self, translation_unit):
        self.__function_list = self.export_function_map(translation_unit.cursor)
        self.__class_list = self.export_class_list(translation_unit.cursor)
        self.__constant_field_list = self.export_constant_field_list(translation_unit.cursor)

    def function_list(self):
        return self.__function_list
    def class_list(self):
        return self.__class_list
    def constant_field_list(self):
        return self.__constant_field_list

    @classmethod
    def export_function_map(cls,node):
        def ex_fn_list(node):
            fnlist =[]
            if node.kind == CursorKind.FUNCTION_DECL:
                fnc = FunctionInfo(node)
                if not fnc.is_template_specialized():
                    fnlist.append(fnc)
            for child in node.get_children():
                fnlist = fnlist + ex_fn_list(child)
            return fnlist

        fnlist = ex_fn_list(node)
        fnamemap = {}
        for f in fnlist:
            if fnamemap.has_key(f.name):
                fnamemap[f.name].append(f)
            else:
                fnamemap[f.name] = [f]
        return fnamemap.values()
    @classmethod
    def is_class_export(cls,class_cursor):
        return class_cursor.is_definition() and (class_cursor.kind == CursorKind.STRUCT_DECL or class_cursor.kind == CursorKind.CLASS_DECL)
        
    @classmethod
    def export_class_list(cls,node):
        stlist =[]
        if node.kind == CursorKind.CLASS_TEMPLATE  or  \
        node.kind == CursorKind.CLASS_TEMPLATE_PARTIAL_SPECIALIZATION:
            return stlist
        if cls.is_class_export(node):
            clss = ClassInfo(node)
            if not clss.is_template_specialized():
                stlist.append(clss)
        for child in node.get_children():
            stlist = stlist + cls.export_class_list(child)
        return stlist
        
    @classmethod
    def is_constant_field_export(cls,class_cursor):
        return class_cursor.is_definition() and (class_cursor.kind == CursorKind.ENUM_CONSTANT_DECL)
        

    @classmethod
    def export_constant_field_list(cls,node):
        stlist =[]
        if node.kind == CursorKind.CLASS_TEMPLATE  or  \
        node.kind == CursorKind.CLASS_TEMPLATE_PARTIAL_SPECIALIZATION:
            return stlist
        if cls.is_constant_field_export(node):
            data = ConstantField(node)
            stlist.append(data)
        for child in node.get_children():
            stlist = stlist + cls.export_constant_field_list(child)
        return stlist

class BindingWriter(object):
  __file = None
  __current_namespace = ""
  def __init__(self, outfile):
      self.__file = outfile

  def begin_namespace(self,namespace,prefix=""):
      if self.__current_namespace == namespace:
          return
      if self.__current_namespace != "":
          self.end_namespace()
      self.__current_namespace = namespace
      if namespace == "":
          return
      for name in namespace.split("::"):
          self.__file.write("namespace %s{\n" % (prefix + name))
  def end_namespace(self,prefix=""):
      if self.__current_namespace == "":
          return
      for name in reversed(self.__current_namespace.split("::")):
          self.__file.write("}// end of namespace %s\n" % (prefix + name))
      self.__current_namespace == ""
      
  @property
  def current_namespace(self):
      return self.__current_namespace
  @property
  def file(self):
      return self.__file
      

class ExportFilter:    
    def __init__(self,conf,base=None):
        self.__match_patterns = []
        self.__ignore_patterns = []
        if conf:
            if conf.get('match_patterns'):
                for regtext in conf.get('match_patterns'):
                    self.__match_patterns.append(re.compile(regtext))
            if conf.get('ignore_patterns'):
                for regtext in conf.get('ignore_patterns'):
                    self.__ignore_patterns.append(re.compile(regtext))
        if base and len(self.__match_patterns) == 0:
            self.__match_patterns = base.__match_patterns
        if base and len(self.__ignore_patterns) == 0:
            self.__ignore_patterns = base.__ignore_patterns

    def patterns_match(self,text,match_patterns):
        for p in match_patterns:
            if p.search(text):
                return True
        return False
    def filter_name(self,name):
        return self.patterns_match(name,self.__match_patterns) and not self.patterns_match(name,self.__ignore_patterns)

    def filter_function(self,data):
        return data.is_public_member() and self.patterns_match(data.displayname,self.__match_patterns) and not self.patterns_match(data.displayname,self.__ignore_patterns)

class ExportFilters:
  def __init__(self,conf):
    base_filter = ExportFilter(conf)
    self.function_filter = ExportFilter(conf.get('function'),base_filter).filter_function
    self.class_filter = ExportFilter(conf.get('class'),base_filter).filter_function
    self.class_member_filter = ExportFilter(conf.get('class_member'),base_filter).filter_function
    self.constant_filter = ExportFilter(conf.get('constant'),base_filter).filter_function
    self.stringify_class = ExportFilter(conf.get('stringify_class'),base_filter).filter_function
    self.base_filter = base_filter.filter_function

class BindingWrapperWriter(BindingWriter):
    __operator_bind_map={"operator+":"__add", "operator-":"__sub", \
     "operator*":"__mul", "operator/":"__div", "operator%":"__mod",  \
     "operator^":"__pow", "operator==":"__eq", "operator<":"__lt", "operator<=":"__le"}
    def __init__(self, outfile):
        BindingWriter.__init__(self,outfile)
    
    def __export_defarg_function(self,fnc,name,minarg,maxarg):
        if fnc.is_static_method():
            self.file.write("KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( %s, %s,  %d, %d, %s);\n" % (name ,fnc.name, minarg,maxarg,fnc.pointer_type_name))
        else:
            self.file.write("KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( %s , %s , %s,  %d, %d, %s);\n" % (name ,fnc.namespace,fnc.function_name, minarg,maxarg,fnc.pointer_type_name))

    def __write_wrapper_function(self,fnc):
        if fnc.default_parameter_count > 0:
            maxparam_count = fnc.parameter_count
            minparam_count = fnc.parameter_count - fnc.default_parameter_count
            self.__export_defarg_function(fnc,fnc.function_name + "_wrap_obj",minparam_count,maxparam_count)

            self.file.write("auto %s = %s();\n" % (fnc.function_name,fnc.function_name + "_wrap_obj"))
        else:
            self.file.write("identity<%s>::type %s = &%s;\n" % (fnc.pointer_type_name,fnc.function_name,fnc.name))
    def __write_wrapper_overloads_fnction(self,fncs):
        fname = fncs[0].function_name
        overloaded_functions = []
        for index,fnc in enumerate(fncs):
            overloaded_fn_name = fname + str(index)
            overloaded_functions.append(overloaded_fn_name)
            if fnc.default_parameter_count > 0:
                maxparam_count = fnc.parameter_count
                minparam_count = fnc.parameter_count - fnc.default_parameter_count
                self.__export_defarg_function(fnc,fnc.function_name + "_wrap_obj"+ str(index),minparam_count,maxparam_count)
                self.file.write("auto %s = %s();\n" % (overloaded_fn_name,fname + "_wrap_obj" + str(index)))
            else:
                self.file.write("identity<%s>::type %s = &%s;\n" % (fnc.pointer_type_name,overloaded_fn_name,fnc.name))
        fns = ",".join(overloaded_functions)
        self.file.write("auto %s = kaguya::overload(%s);\n" % (fname,fns))

    def write_wrapper(self,binding_data,wrapper_namespace_prefix,filters):
        for fncs in binding_data.function_list():
            fncs = filter(filters.function_filter,fncs)
            if len(fncs) == 0:
                continue
            self.begin_namespace(fncs[0].namespace,wrapper_namespace_prefix)
            if len(fncs) == 1:
                self.__write_wrapper_function(fncs[0])
            else:
                self. __write_wrapper_overloads_fnction(fncs)
                
        for clss in filter(filters.class_filter,binding_data.class_list()):
            for method in clss.medhods():
                method = filter(filters.class_member_filter,method)
                if len(method) == 0:
                    continue
                self.begin_namespace(method[0].namespace,wrapper_namespace_prefix)
                if len(method) == 1:
                    self.__write_wrapper_function(method[0])
                else:
                    self. __write_wrapper_overloads_fnction(method)

        self.end_namespace(wrapper_namespace_prefix)
    def __out_class_constructor(self,clss,filterf):
        if clss.has_pure_virtual():
            return
        if clss.constructors():
            constructors = []
            for constructor in filter(filterf,clss.constructors()):
                constructors.append(constructor.type_name)
            self.file.write('    .constructors<%s>()\n' % (",".join(constructors)))
        else:
            self.file.write('    .constructor<>()\n')
            
    def __out_class_methods(self,clss,filterf):
        for method in clss.medhods():
            method = filter(filterf,method)
            if len(method) == 0:
                continue
            if method[0].is_static_method():
                self.file.write('    .class_function("%s", %s)\n' % (method[0].function_name,insert_prefix_to_namespace(clss.name,wrapper_namespace_prefix)  + "::" + method[0].function_name))
            else:
                self.file.write('    .function("%s", %s)\n' % (method[0].function_name,insert_prefix_to_namespace(clss.name,wrapper_namespace_prefix)  + "::" + method[0].function_name))
        


    def __out_class_operators(self,clss,filterf):
        for opera in clss.operators():
            opera = filter(filterf,opera)
            if len(opera) == 0:
                continue
            metamethodname = self.__operator_bind_map.get(opera[0].function_name)
            if metamethodname == None:
                continue
            if len(opera) == 1:
                self.file.write('    .class_function("%s", &%s)\n' % (metamethodname,opera[0].name))
            else:
                overloads =[]
                for op in opera:
                    overloads.append('(%s)&%s' % (op.pointer_type_name,op.name))
                self.file.write('    .class_function("%s", kaguya::overload(%s))\n' % (metamethodname,','.join(overloads)))

    def __out_class_property(self,clss,filterf):
        for prop in filter(filterf,clss.properties()):
            self.file.write('    .property("%s", &%s)\n' % (prop.property_name,prop.name))


    def __out_class_def(self,clss,filters):
            if clss.base_class_count == 1:
                self.file.write('  class_<%s,%s>("%s")\n' % (clss.name,','.join(clss.base_class_names()),clss.class_name))
            elif clss.base_class_count > 1:
                self.file.write('  class_<%s,kaguya::MultipleBase<%s> >("%s")\n' % (clss.name,','.join(clss.base_class_names()),clss.class_name))
            else:
                self.file.write('  class_<%s>("%s")\n' % (clss.name,clss.class_name))
            self.__out_class_constructor(clss,filters.class_member_filter)
            self.__out_class_methods(clss,filters.class_member_filter)
            self.__out_class_operators(clss,filters.class_member_filter)
            self.__out_class_property(clss,filters.class_member_filter)
            #stringify meta method
            if filters.stringify_class(clss):
                self.file.write('    .class_function("__tostring", &kaguya_stringifier<%s>)\n' % (clss.name))
            self.file.write('  ;\n')

    def write_binding(self,binding_data,wrapper_namespace_prefix,manual_binding_file_name,filters):
        self.file.write("KAGUYA_BINDINGS(%s) {\n"%(config['module_name']))
        self.file.write("using namespace kaguya;\n")

        for fncs in binding_data.function_list():
            fncs =  filter(filters.function_filter,fncs)
            if len(fncs) > 0:
                self.file.write('  function("%s", %s);\n' % (fncs[0].function_name, insert_prefix_to_namespace(fncs[0].namespace,wrapper_namespace_prefix) + "::" + fncs[0].function_name))
        for clss in filter(filters.class_filter,binding_data.class_list()):
            self.__out_class_def(clss,filters)

            
        for field in filter(filters.constant_filter,binding_data.constant_field_list()):
            self.file.write('  constant("%s", %s);\n' % (field.field_name,field.name))
        if manual_binding_file_name != "":
            self.file.write('#include "%s" \n' % (manual_binding_file_name))
        self.file.write('}//end of KAGUYA_BINDINGS(%s) \n' % (config['module_name']))
    
    def write(self,binding_data,wrapper_namespace_prefix,manual_binding_file_name,filters):
        self.file.write("// File generated automatically, do not modify \n")
        self.write_wrapper(binding_data,wrapper_namespace_prefix,filters)
        self.write_binding(binding_data,wrapper_namespace_prefix,manual_binding_file_name,filters)



if __name__ == '__main__':
    # set up parameters
    args = sys.argv
    souce_file = args[1]
    output = sys.stdout
    config_file_name = 'generate_param.json'
    config = json.load(open(config_file_name))
    clang_args = config['clang_args']
    wrapper_namespace_prefix = config['wrapper_namespace_prefix']
    clang_args = config['clang_args']
    manual_binding_file_name = config['manual_binding_file_name']

    #function,class,class_member,constant
    bfilter = ExportFilters(config)

    index = Index.create()
    
    # parse source(or ast) file
    __, souce_ext = os.path.splitext(souce_file)
    if souce_ext == '.ast':
        tu=index.read(souce_file)
    else:
        tu = index.parse(souce_file, clang_args, None, TranslationUnit.PARSE_SKIP_FUNCTION_BODIES  )
    
    # error check
    severity  = ['Ignored', 'Note', 'Warning', 'Error', 'Fatal']
    for diag in tu.diagnostics:
        #print('%s:%s' % (severity[diag.severity],diag.spelling))
        if diag.severity >= 4:
            raise Exception('%s:%s' % (severity[diag.severity],diag.spelling)) 

    # output
    bindinf_data = BindingData(tu)
    binding_writer = BindingWrapperWriter(output)
    binding_writer.write(bindinf_data,wrapper_namespace_prefix,manual_binding_file_name,bfilter)
    