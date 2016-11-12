#pragma once
#define KAGUYA_TABLE_MAPPING_TEMPLATE_TYPE2(TEMPLATE, TYPE, PROPTYPE,        \
                                            PROP_NAME1, PROP_NAME2)          \
  \
template<TEMPLATE> struct lua_type_traits<TYPE> {                            \
    \
typedef TYPE get_type;                                                       \
    \
typedef TYPE push_type;                                                      \
    static bool strictCheckType(lua_State* l, int index) {                   \
      if (lua_type(l, index) != LUA_TTABLE) {                                \
        return false;                                                        \
      }                                                                      \
      LuaStackRef table(l, index);                                           \
      optional<PROPTYPE> v1 = table[#PROP_NAME1].get<optional<PROPTYPE> >(); \
      optional<PROPTYPE> v2 = table[#PROP_NAME2].get<optional<PROPTYPE> >(); \
      if ((!v1 || !v2) && table.size() == 2) {                               \
        v1 = table[1].get<optional<PROPTYPE> >();                            \
        v2 = table[2].get<optional<PROPTYPE> >();                            \
      }                                                                      \
      return (v1 && v2);                                                     \
    }                                                                        \
    static bool checkType(lua_State* l, int index) {                         \
      return strictCheckType(l, index);                                      \
    }                                                                        \
    static get_type get(lua_State* l, int index) {                           \
      if (lua_type(l, index) != LUA_TTABLE) {                                \
        throw kaguya::LuaTypeMismatch();                                     \
      }                                                                      \
      LuaStackRef table(l, index);                                           \
      optional<PROPTYPE> v1 = table[#PROP_NAME1].get<optional<PROPTYPE> >(); \
      optional<PROPTYPE> v2 = table[#PROP_NAME2].get<optional<PROPTYPE> >(); \
      if (!v1 || !v2) {                                                      \
        v1 = table[1].get<optional<PROPTYPE> >();                            \
        v2 = table[2].get<optional<PROPTYPE> >();                            \
      }                                                                      \
      if (v1 && v2) {                                                        \
        get_type ret = get_type();                                           \
        ret.PROP_NAME1 = *v1;                                                \
        ret.PROP_NAME2 = *v2;                                                \
        return ret;                                                          \
      }                                                                      \
      throw kaguya::LuaTypeMismatch();                                       \
    }                                                                        \
    static int push(lua_State* l, push_type s) {                             \
      lua_createtable(l, 0, int(2));                                         \
      util::one_push(l, #PROP_NAME1);                                        \
      util::one_push(l, s.PROP_NAME1);                                       \
      lua_rawset(l, -3);                                                     \
      util::one_push(l, #PROP_NAME2);                                        \
      util::one_push(l, s.PROP_NAME2);                                       \
      lua_rawset(l, -3);                                                     \
      return 1;                                                              \
    }                                                                        \
  \
};                                                                           \
  \
template<> struct lua_type_traits<const TYPE&> : lua_type_traits<TYPE> {};

#define KAGUYA_TABLE_MAPPING_TYPE2(TYPE, PROPTYPE, PROP_NAME1, PROP_NAME2) \
  KAGUYA_TABLE_MAPPING_TEMPLATE_TYPE2(, TYPE, PROPTYPE, PROP_NAME1, PROP_NAME2)

#define KAGUYA_TABLE_MAPPING_TEMPLATE_TYPE4(                                  \
    TEMPLATE, TYPE, PROPTYPE, PROP_NAME1, PROP_NAME2, PROP_NAME3, PROP_NAME4) \
  \
template<TEMPLATE> struct lua_type_traits<TYPE> {                             \
    \
typedef TYPE get_type;                                                        \
    \
typedef TYPE push_type;                                                       \
    static bool strictCheckType(lua_State* l, int index) {                    \
      if (lua_type(l, index) != LUA_TTABLE) {                                 \
        return false;                                                         \
      }                                                                       \
      LuaStackRef table(l, index);                                            \
      optional<PROPTYPE> v1 = table[#PROP_NAME1].get<optional<PROPTYPE> >();  \
      optional<PROPTYPE> v2 = table[#PROP_NAME2].get<optional<PROPTYPE> >();  \
      optional<PROPTYPE> v3 = table[#PROP_NAME3].get<optional<PROPTYPE> >();  \
      optional<PROPTYPE> v4 = table[#PROP_NAME4].get<optional<PROPTYPE> >();  \
      if ((!v1 || !v2 || !v3 || !v4) && table.size() == 4) {                  \
        v1 = table[1].get<optional<PROPTYPE> >();                             \
        v2 = table[2].get<optional<PROPTYPE> >();                             \
        v3 = table[3].get<optional<PROPTYPE> >();                             \
        v4 = table[4].get<optional<PROPTYPE> >();                             \
      }                                                                       \
      return (v1 && v2 && v3 && v4);                                          \
    }                                                                         \
    static bool checkType(lua_State* l, int index) {                          \
      return strictCheckType(l, index);                                       \
    }                                                                         \
    static get_type get(lua_State* l, int index) {                            \
      if (lua_type(l, index) != LUA_TTABLE) {                                 \
        throw kaguya::LuaTypeMismatch();                                      \
      }                                                                       \
      LuaStackRef table(l, index);                                            \
      optional<PROPTYPE> v1 = table[#PROP_NAME1].get<optional<PROPTYPE> >();  \
      optional<PROPTYPE> v2 = table[#PROP_NAME2].get<optional<PROPTYPE> >();  \
      optional<PROPTYPE> v3 = table[#PROP_NAME3].get<optional<PROPTYPE> >();  \
      optional<PROPTYPE> v4 = table[#PROP_NAME4].get<optional<PROPTYPE> >();  \
      if (!v1 || !v2) {                                                       \
        v1 = table[1].get<optional<PROPTYPE> >();                             \
        v2 = table[2].get<optional<PROPTYPE> >();                             \
        v3 = table[3].get<optional<PROPTYPE> >();                             \
        v4 = table[4].get<optional<PROPTYPE> >();                             \
      }                                                                       \
      if (v1 && v2 && v3 && v4) {                                             \
        get_type ret = get_type();                                            \
        ret.PROP_NAME1 = *v1;                                                 \
        ret.PROP_NAME2 = *v2;                                                 \
        ret.PROP_NAME3 = *v3;                                                 \
        ret.PROP_NAME4 = *v4;                                                 \
        return ret;                                                           \
      }                                                                       \
      throw kaguya::LuaTypeMismatch();                                        \
    }                                                                         \
    static int push(lua_State* l, push_type s) {                              \
      lua_createtable(l, 0, int(4));                                          \
      util::one_push(l, #PROP_NAME1);                                         \
      util::one_push(l, s.PROP_NAME1);                                        \
      lua_rawset(l, -3);                                                      \
      util::one_push(l, #PROP_NAME2);                                         \
      util::one_push(l, s.PROP_NAME2);                                        \
      lua_rawset(l, -3);                                                      \
      util::one_push(l, #PROP_NAME3);                                         \
      util::one_push(l, s.PROP_NAME3);                                        \
      lua_rawset(l, -3);                                                      \
      util::one_push(l, #PROP_NAME4);                                         \
      util::one_push(l, s.PROP_NAME4);                                        \
      lua_rawset(l, -3);                                                      \
      return 1;                                                               \
    }                                                                         \
  \
};                                                                            \
  \
template<> struct lua_type_traits<const TYPE&> : lua_type_traits<TYPE> {};
#define KAGUYA_TABLE_MAPPING_TYPE4(TYPE, PROPTYPE, PROP_NAME1, PROP_NAME2, \
                                   PROP_NAME3, PROP_NAME4)                 \
  KAGUYA_TABLE_MAPPING_TEMPLATE_TYPE4(, TYPE, PROPTYPE, PROP_NAME1,        \
                                      PROP_NAME2, PROP_NAME3, PROP_NAME4)

template <typename T>
std::string kaguya_stringifier(const T& v) {
  std::stringstream sstr;
  sstr << v;
  return sstr.str();
}