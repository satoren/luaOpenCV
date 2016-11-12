import sys

import clang.cindex
from clang.cindex import Index
from clang.cindex import Config
from clang.cindex import TranslationUnit


def print_node_tree(node):    
    if node.kind == clang.cindex.CursorKind.FUNCTION_DECL:
        print "fnc : %s" % ( node.type.spelling)
        print "fnc : %s" % ( node.displayname)


    for child in node.get_children():
        print_node_tree(child)

clang_args = [
    "-I./build/opencv/include",
    "-Wall",
    "-std=c++11",
    ]

index = Index.create()
#tu = index.parse("test.cpp", clang_args, None, 0)
tu = index.read("test.ast")
print_node_tree(tu.cursor)
severity  = ['Ignored', 'Note', 'Warning', 'Error', 'Fatal']
for diag in tu.diagnostics:
    print('%s:%s' % (severity[diag.severity],diag.spelling))
    if diag.severity >= 4:
        raise Exception('%s:%s' % (severity[diag.severity],diag.spelling)) 