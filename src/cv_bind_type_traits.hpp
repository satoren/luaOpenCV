#include <opencv2/opencv.hpp>
#include <kaguya/kaguya.hpp>
#include "bind_helper.hpp"

namespace kaguya {
using namespace cv;
// ==============================================
// Basic structures
// ==============================================
template <>
struct lua_type_traits<cv::_InputArray>
    : util::ConvertibleRegisterHelper<
          cv::_InputArray, Mat, MatExpr, std::vector<Mat>, std::vector<std::vector<cv::Point> >, std::vector<bool>,
          std::vector<int>, std::vector<double>, double, cv::Scalar> {

	static get_type get(lua_State *l, int index) {
		return util::ConvertibleRegisterHelper<
			cv::_InputArray, Mat, MatExpr, std::vector<Mat>, std::vector<std::vector<cv::Point> >, std::vector<bool>,
			std::vector<int>, std::vector<double>, double, cv::Scalar>::get(l,index);
	}

};

template <>
struct lua_type_traits<cv::_InputOutputArray>
    : util::ConvertibleRegisterHelper<cv::_InputOutputArray, Mat &, MatExpr &,
                                      std::vector<Mat> > {
  typedef const _InputOutputArray &push_type;
  static int push(lua_State *l, push_type v) {
    return util::one_push(l, kaguya::NilValue());
  }
};

template <>
struct lua_type_traits<cv::MatExpr> {
  typedef void Registerable;
  typedef cv::Mat push_type;
  typedef cv::MatExpr get_type;
  typedef cv::MatExpr type;

  static bool strictCheckType(lua_State *l, int index) {
    return object_wrapper<type>(l, index, false) != 0;
  }
  static bool checkType(lua_State *l, int index) {
    return object_wrapper<type>(l, index) != 0 || lua_isnil(l, index);
  }
  static get_type get(lua_State *l, int index) {
    get_type *pointer = get_pointer(l, index, types::typetag<get_type>());
    if (!pointer) {
      throw LuaTypeMismatch();
    }
    return *pointer;
  }
  static int push(lua_State *l, push_type v) { return util::one_push(l, v); }
};
template <>
struct lua_type_traits<const cv::MatExpr &> : lua_type_traits<cv::MatExpr> {};

template <>
struct lua_type_traits<cv::_OutputArray>
    : util::ConvertibleRegisterHelper<cv::_OutputArray, Mat &, MatExpr &,
                                      std::vector<Mat> > {};

template <typename T,int S>
struct lua_type_traits<cv::Vec<T, S> >
{

	typedef cv::Vec<T, S> get_type;
	typedef const cv::Vec<T, S>& push_type;

	static bool checkType(lua_State* l, int index)
	{
		if (lua_type(l, index) != LUA_TTABLE) { return false; }

		LuaStackRef table(l, index);
		if (table.size() != S) { return false; }
		bool valid = true;
		table.foreach_table_breakable<LuaStackRef, LuaStackRef>(
			[&](const LuaStackRef& k, const LuaStackRef& v) {valid = valid && k.typeTest<size_t>() && v.typeTest<T>(); return valid; });
		return valid;
	}
	static bool strictCheckType(lua_State* l, int index)
	{
		if (lua_type(l, index) != LUA_TTABLE) { return false; }

		LuaStackRef table(l, index);
		if (table.size() != S) { return false; }
		bool valid = true;
		table.foreach_table_breakable<LuaStackRef, LuaStackRef>(
			[&](const LuaStackRef& k, const LuaStackRef& v) {valid = valid && k.typeTest<size_t>() && v.typeTest<T>(); return valid; });
		return valid;
	}
	static get_type get(lua_State* l, int index)
	{
		if (lua_type(l, index) != LUA_TTABLE)
		{
			except::typeMismatchError(l, std::string("type mismatch"));
			return get_type();
		}
		LuaStackRef t(l, index);
		if (t.size() != S)
		{
			except::typeMismatchError(l, std::string("type mismatch"));
		}
		get_type res;
		t.foreach_table<size_t, const T&>([&](size_t k, const T& v) { if (k > 0 && k <= S) { res[k - 1] = v; } });
		return res;
	}
	static int push(lua_State* l, push_type v)
	{
		lua_createtable(l, int(S), 0);
		for (size_t i = 0; i<S; ++i)
		{
			util::one_push(l, v[i]);
			lua_rawseti(l, -2, i + 1);
		}
		return 1;
	}
};


template <>
struct lua_type_traits<cv::String>
    : util::ConvertibleRegisterHelper<cv::String, const char *> {
  typedef const cv::String &push_type;
  static int push(lua_State *l, push_type str) {
    lua_pushlstring(l, str.c_str(), str.length());
    return 1;
  }
};

KAGUYA_TABLE_MAPPING_TYPE2(cv::Size, int, width, height)
KAGUYA_TABLE_MAPPING_TYPE2(cv::Point, int, x, y)
KAGUYA_TABLE_MAPPING_TYPE2(cv::Range, int, start, end)
KAGUYA_TABLE_MAPPING_TYPE4(cv::Rect, int, x, y, height, width)

template <typename T>
struct lua_type_traits<cv::Ptr<T> > {
  typedef const cv::Ptr<T> &push_type;
  typedef cv::Ptr<T> get_type;
  typedef cv::Ptr<T> type;

  static bool strictCheckType(lua_State *l, int index) {
    return object_wrapper<type>(l, index, false) != 0;
  }
  static bool checkType(lua_State *l, int index) {
    return object_wrapper<type>(l, index) != 0 || lua_isnil(l, index);
  }
  static get_type get(lua_State *l, int index) {
    type *pointer = get_pointer(l, index, types::typetag<type>());
    if (!pointer) {
      throw LuaTypeMismatch();
    }
    return *pointer;
  }

  static int push(lua_State *l, push_type v) {
    if (v) {
      typedef ObjectSmartPointerWrapper<type> wrapper_type;
      void *storage = lua_newuserdata(l, sizeof(wrapper_type));
      new (storage) wrapper_type(std::forward<push_type>(v));
      class_userdata::setmetatable<T>(l);
    } else {
      lua_pushnil(l);
    }
    return 1;
  }
};
}