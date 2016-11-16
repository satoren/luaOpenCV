#include <opencv2/opencv.hpp>
#define KAGUYA_DYNAMIC_LIB
#include <kaguya/another_binding_api.hpp>

#include "bind_helper.hpp"

#include "cv_bind_type_traits.hpp"

namespace gen_wrap_cv {
using namespace cv;
template <typename T>
struct identity {
  typedef T type;
};
}

namespace {
namespace WrapCvType {
int WCV_16SC(int ch) { return CV_16SC(ch); }
int WCV_16UC(int ch) { return CV_16UC(ch); }
int WCV_32FC(int ch) { return CV_32FC(ch); }
int WCV_32SC(int ch) { return CV_32SC(ch); }
int WCV_64FC(int ch) { return CV_64FC(ch); }
int WCV_8SC(int ch) { return CV_8SC(ch); }
int WCV_8UC(int ch) { return CV_8UC(ch); }
int matDepth(int depth) { return CV_MAT_DEPTH(depth); }
int makeType(int depth, int channels) { return CV_MAKE_TYPE(depth, channels); }
}
}

namespace wrap {
namespace Mat {

template <typename T>
struct identity {
  typedef T type;
};

using namespace cv;
identity<bool (cv::Mat::*)() const>::type isSubmatrix = &cv::Mat::isSubmatrix;
identity<void (cv::Mat::*)(Size &, Point &) const>::type locateROI =
    &cv::Mat::locateROI;
identity<void (cv::Mat::*)(size_t)>::type resize0 = &cv::Mat::resize;
identity<void (cv::Mat::*)(size_t, const Scalar &)>::type resize1 =
    &cv::Mat::resize;
auto resize = kaguya::overload(resize0, resize1);
identity<cv::MatExpr (cv::Mat::*)() const>::type t = &cv::Mat::t;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE(ptr_wrap_obj0, cv::Mat, ptr, 0,
                                                1, uchar *(cv::Mat::*)(int));
auto ptr0 = ptr_wrap_obj0();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE(
    ptr_wrap_obj1, cv::Mat, ptr, 0, 1, const uchar *(cv::Mat::*)(int)const);
auto ptr1 = ptr_wrap_obj1();
identity<uchar *(cv::Mat::*)(int, int)>::type ptr2 = &cv::Mat::ptr;
identity<const uchar *(cv::Mat::*)(int, int)const>::type ptr3 = &cv::Mat::ptr;
identity<uchar *(cv::Mat::*)(int, int, int)>::type ptr4 = &cv::Mat::ptr;
identity<const uchar *(cv::Mat::*)(int, int, int)const>::type ptr5 =
    &cv::Mat::ptr;
identity<uchar *(cv::Mat::*)(const int *)>::type ptr6 = &cv::Mat::ptr;
identity<const uchar *(cv::Mat::*)(const int *)const>::type ptr7 =
    &cv::Mat::ptr;
auto ptr = kaguya::overload(ptr0, ptr1, ptr2, ptr3, ptr4, ptr5, ptr6, ptr7);
identity<void (cv::Mat::*)()>::type deallocate = &cv::Mat::deallocate;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE(
    setTo_wrap_obj, cv::Mat, setTo, 1, 2,
    cv::Mat &(cv::Mat::*)(InputArray, InputArray));
auto setTo = setTo_wrap_obj();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE(
    mul_wrap_obj, cv::Mat, mul, 1, 2,
    cv::MatExpr (cv::Mat::*)(InputArray, double) const);
auto mul = mul_wrap_obj();
identity<int (cv::Mat::*)() const>::type depth = &cv::Mat::depth;
identity<cv::MatAllocator *(*)()>::type getDefaultAllocator =
    &cv::Mat::getDefaultAllocator;
identity<void (cv::Mat::*)(const cv::Mat &)>::type copySize =
    &cv::Mat::copySize;
identity<size_t (cv::Mat::*)() const>::type elemSize1 = &cv::Mat::elemSize1;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE(diag_wrap_obj0, cv::Mat, diag,
                                                0, 1, cv::Mat (cv::Mat::*)(int)
                                                          const);
auto diag0 = diag_wrap_obj0();
identity<cv::Mat (*)(const cv::Mat &)>::type diag1 = &cv::Mat::diag;
auto diag = kaguya::overload(diag0, diag1);
identity<cv::Mat (cv::Mat::*)() const>::type clone = &cv::Mat::clone;
identity<void (cv::Mat::*)(size_t)>::type reserve = &cv::Mat::reserve;
identity<double (cv::Mat::*)(InputArray) const>::type dot = &cv::Mat::dot;
identity<int (cv::Mat::*)() const>::type type = &cv::Mat::type;
identity<cv::MatExpr (*)(int, int, int)>::type ones0 = &cv::Mat::ones;
identity<cv::MatExpr (*)(Size, int)>::type ones1 = &cv::Mat::ones;
cv::Mat ones2(std::vector<int> size, int type) {
  return cv::Mat::ones(size.size(), size.data(), type);
}
auto ones = kaguya::overload(ones0, ones1, ones2);
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE(
    getUMat_wrap_obj, cv::Mat, getUMat, 1, 2,
    cv::UMat (cv::Mat::*)(int, cv::UMatUsageFlags) const);
auto getUMat = getUMat_wrap_obj();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE(reshape_wrap_obj0, cv::Mat,
                                                reshape, 1, 2,
                                                cv::Mat (cv::Mat::*)(int, int)
                                                    const);
auto reshape0 = reshape_wrap_obj0();
identity<cv::Mat (cv::Mat::*)(int, int, const int *) const>::type reshape1 =
    &cv::Mat::reshape;
auto reshape = kaguya::overload(reshape0, reshape1);
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE(
    convertTo_wrap_obj, cv::Mat, convertTo, 2, 4,
    void (cv::Mat::*)(OutputArray, int, double, double) const);
auto convertTo = convertTo_wrap_obj();
identity<size_t (cv::Mat::*)() const>::type total = &cv::Mat::total;
identity<void (cv::Mat::*)(int, int, int)>::type create0 = &cv::Mat::create;
identity<void (cv::Mat::*)(Size, int)>::type create1 = &cv::Mat::create;
identity<void (cv::Mat::*)(int, const int *, int)>::type create2 =
    &cv::Mat::create;
auto create = kaguya::overload(create0, create1, create2);
identity<cv::Mat (cv::Mat::*)(int, int) const>::type colRange0 =
    &cv::Mat::colRange;
identity<cv::Mat (cv::Mat::*)(const cv::Range &) const>::type colRange1 =
    &cv::Mat::colRange;
auto colRange = kaguya::overload(colRange0, colRange1);
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE(assignTo_wrap_obj, cv::Mat,
                                                assignTo, 1, 2,
                                                void (cv::Mat::*)(cv::Mat &,
                                                                  int) const);
auto assignTo = assignTo_wrap_obj();
identity<cv::MatExpr (*)(int, int, int)>::type zeros0 = &cv::Mat::zeros;
identity<cv::MatExpr (*)(Size, int)>::type zeros1 = &cv::Mat::zeros;
cv::Mat zeros2(std::vector<int> size, int type) {
  return cv::Mat::zeros(size.size(), size.data(), type);
}

auto zeros = kaguya::overload(zeros0, zeros1, zeros2);
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE(pop_back_wrap_obj, cv::Mat,
                                                pop_back, 0, 1,
                                                void (cv::Mat::*)(size_t));
auto pop_back = pop_back_wrap_obj();
identity<size_t (cv::Mat::*)() const>::type elemSize = &cv::Mat::elemSize;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE(inv_wrap_obj, cv::Mat, inv, 0,
                                                1, cv::MatExpr (cv::Mat::*)(int)
                                                       const);
auto inv = inv_wrap_obj();
identity<cv::Mat (cv::Mat::*)(int) const>::type row = &cv::Mat::row;
identity<void (cv::Mat::*)(const void *)>::type push_back_ =
    &cv::Mat::push_back_;
identity<void (*)(cv::MatAllocator *)>::type setDefaultAllocator =
    &cv::Mat::setDefaultAllocator;
identity<cv::Mat &(cv::Mat::*)(int, int, int, int)>::type adjustROI =
    &cv::Mat::adjustROI;
identity<void (cv::Mat::*)(OutputArray) const>::type copyTo0 = &cv::Mat::copyTo;
identity<void (cv::Mat::*)(OutputArray, InputArray) const>::type copyTo1 =
    &cv::Mat::copyTo;
auto copyTo = kaguya::overload(copyTo0, copyTo1);
identity<bool (cv::Mat::*)() const>::type isContinuous = &cv::Mat::isContinuous;
identity<int (cv::Mat::*)() const>::type channels = &cv::Mat::channels;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE(checkVector_wrap_obj, cv::Mat,
                                                checkVector, 1, 3,
                                                int (cv::Mat::*)(int, int, bool)
                                                    const);
auto checkVector = checkVector_wrap_obj();
identity<cv::Mat (cv::Mat::*)(int) const>::type col = &cv::Mat::col;
identity<cv::Mat (cv::Mat::*)(int, int) const>::type rowRange0 =
    &cv::Mat::rowRange;
identity<cv::Mat (cv::Mat::*)(const cv::Range &) const>::type rowRange1 =
    &cv::Mat::rowRange;
auto rowRange = kaguya::overload(rowRange0, rowRange1);
identity<cv::MatExpr (*)(int, int, int)>::type eye0 = &cv::Mat::eye;
identity<cv::MatExpr (*)(Size, int)>::type eye1 = &cv::Mat::eye;
auto eye = kaguya::overload(eye0, eye1);
identity<cv::Mat (cv::Mat::*)(InputArray) const>::type cross = &cv::Mat::cross;
identity<bool (cv::Mat::*)() const>::type empty = &cv::Mat::empty;
identity<void (cv::Mat::*)()>::type release = &cv::Mat::release;
identity<cv::MatAllocator *(*)()>::type getStdAllocator =
    &cv::Mat::getStdAllocator;
identity<void (cv::Mat::*)()>::type addref = &cv::Mat::addref;
identity<void (cv::Mat::*)(const cv::Mat &)>::type push_back =
    &cv::Mat::push_back;

std::vector<int> size_getter(const cv::Mat *m) {
  return std::vector<int>(m->size.p, m->size.p + m->dims);
}

template <typename T, typename... index>
kaguya::AnyDataPusher at_depth_wrap(const cv::Mat &m, index... i) {
  switch (m.channels()) {
    case 1:
      return T(m.at<T>(i...));
#define CASE_CHANNEL(NUM) \
  case NUM:               \
    return cv::Vec<T, NUM>(m.at<cv::Vec<T, NUM> >(i...))
      CASE_CHANNEL(2);
      CASE_CHANNEL(3);
      CASE_CHANNEL(4);
      CASE_CHANNEL(5);
      CASE_CHANNEL(6);
      CASE_CHANNEL(7);
      CASE_CHANNEL(8);
      CASE_CHANNEL(9);
      CASE_CHANNEL(10);
#undef CASE_CHANNEL
  }
  throw kaguya::LuaTypeMismatch();
}

template <typename... index>
kaguya::AnyDataPusher at_wrap(const cv::Mat &m, index... i) {
  switch (m.depth()) {
    case CV_8U:
      return at_depth_wrap<uint8_t>(m, i...);
    case CV_8S:
      return at_depth_wrap<int8_t>(m, i...);
    case CV_16U:
      return at_depth_wrap<uint16_t>(m, i...);
    case CV_16S:
      return at_depth_wrap<int16_t>(m, i...);
    case CV_32S:
      return at_depth_wrap<int32_t>(m, i...);
    case CV_32F:
      return at_depth_wrap<float>(m, i...);
    case CV_64F:
      return at_depth_wrap<double>(m, i...);
  }
  throw kaguya::LuaTypeMismatch();
}

kaguya::AnyDataPusher at_1(const cv::Mat &m, int x) { return at_wrap(m, x); }
kaguya::AnyDataPusher at_2(const cv::Mat &m, int x, int y) {
  return at_wrap(m, x, y);
}
kaguya::AnyDataPusher at_point(const cv::Mat &m, cv::Point index) {
  return at_wrap(m, index);
}
kaguya::AnyDataPusher at_array(const cv::Mat &m, std::vector<int> index) {
  return at_wrap(m, index.data());
}

template <typename T, typename... index>
void set_depth_wrap(cv::Mat &m, const kaguya::LuaStackRef &v, index... i) {
  switch (m.channels()) {
#define CASE_CHANNEL(NUM)                                     \
  case NUM:                                                   \
    m.at<cv::Vec<T, NUM> >(i...) = v.get<cv::Vec<T, NUM> >(); \
    return
    CASE_CHANNEL(1);
    CASE_CHANNEL(2);
    CASE_CHANNEL(3);
    CASE_CHANNEL(4);
    CASE_CHANNEL(5);
    CASE_CHANNEL(6);
    CASE_CHANNEL(7);
    CASE_CHANNEL(8);
    CASE_CHANNEL(9);
    CASE_CHANNEL(10);
#undef CASE_CHANNEL
  }
  throw kaguya::LuaTypeMismatch();
}

template <typename... index>
void set_wrap(cv::Mat &m, const kaguya::LuaStackRef &v, index... i) {
  switch (m.depth()) {
    case CV_8U:
      return set_depth_wrap<uint8_t>(m, v, i...);
    case CV_8S:
      return set_depth_wrap<int8_t>(m, v, i...);
    case CV_16U:
      return set_depth_wrap<uint16_t>(m, v, i...);
    case CV_16S:
      return set_depth_wrap<int16_t>(m, v, i...);
    case CV_32S:
      return set_depth_wrap<int32_t>(m, v, i...);
    case CV_32F:
      return set_depth_wrap<float>(m, v, i...);
    case CV_64F:
      return set_depth_wrap<double>(m, v, i...);
  }
  throw kaguya::LuaTypeMismatch();
}
void set_1(cv::Mat &m, int x, kaguya::LuaStackRef v) { set_wrap(m, v, x); }
void set_2(cv::Mat &m, int x, int y, kaguya::LuaStackRef v) {
  set_wrap(m, v, x, y);
}
void set_point(cv::Mat &m, cv::Point index, kaguya::LuaStackRef v) {
  set_wrap(m, v, index);
}
void set_array(cv::Mat &m, std::vector<int> index, kaguya::LuaStackRef v) {
  set_wrap(m, v, index.data());
}

int Mat_index_function(lua_State *L) {
  static const int table = 1;
  static const int key = 2;
  lua_getmetatable(L, table);
  const int metatable = lua_gettop(L);

  if (lua_type(L, key) != LUA_TSTRING) {
    int type = kaguya::compat::lua_getfield_rtype(L, metatable, "at");
    if (type == LUA_TFUNCTION) {
      lua_pushvalue(L, table);
      lua_pushvalue(L, key);
      lua_call(L, 2, 1);
      return 1;
    }
  }
  const char *strkey = lua_tostring(L, key);

  if (lua_type(L, 1) == LUA_TUSERDATA &&
      kaguya::Metatable::is_property_key(strkey)) {
    int type = kaguya::compat::lua_getfield_rtype(
        L, metatable, (KAGUYA_PROPERTY_PREFIX + std::string(strkey)).c_str());
    if (type == LUA_TFUNCTION) {
      lua_pushvalue(L, table);
      lua_call(L, 1, 1);
      return 1;
    }
  }
  lua_pushvalue(L, key);
  lua_gettable(L, metatable);
  if (lua_type(L, -1) != LUA_TNIL) {
    return 1;
  }
  return 1;
}
int Mat_newindex_function(lua_State *L) {
  static const int table = 1;
  static const int key = 2;
  static const int value = 3;

  lua_getmetatable(L, table);
  const int metatable = lua_gettop(L);

  if (lua_type(L, key) != LUA_TSTRING) {
    int type = kaguya::compat::lua_getfield_rtype(L, metatable, "set");
    if (type == LUA_TFUNCTION) {
      lua_pushvalue(L, table);
      lua_pushvalue(L, key);
      lua_pushvalue(L, value);
      lua_call(L, 3, 1);
      return 1;
    }
  }

  const char *strkey = lua_tostring(L, 2);

  if (lua_type(L, 1) == LUA_TUSERDATA &&
      kaguya::Metatable::is_property_key(strkey)) {
    int type = kaguya::compat::lua_getfield_rtype(
        L, metatable, (KAGUYA_PROPERTY_PREFIX + std::string(strkey)).c_str());
    if (type == LUA_TFUNCTION) {
      lua_pushvalue(L, table);
      lua_pushvalue(L, value);
      lua_call(L, 2, 0);
      return 0;
    }
  }
  return 0;
}
}  // end of namespace Mat
}

KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE(scalar_factory, cv::Scalar, 0, 4,
                                         cv::Scalar(double, double, double,
                                                    double))

void kaguya_manual_bind() {
  using namespace kaguya;

  //! @name Comparison operation
  //! @sa cv::CmpTypes
  //! @{
  constant("CV_HAL_CMP_EQ", CV_HAL_CMP_EQ);
  constant("CV_HAL_CMP_GT", CV_HAL_CMP_GT);
  constant("CV_HAL_CMP_GE", CV_HAL_CMP_GE);
  constant("CV_HAL_CMP_LT", CV_HAL_CMP_LT);
  constant("CV_HAL_CMP_LE", CV_HAL_CMP_LE);
  //! @}

  //! @name Border processing modes
  //! @sa cv::BorderTypes
  //! @{
  constant("CV_HAL_BORDER_CONSTANT", CV_HAL_BORDER_CONSTANT);
  constant("CV_HAL_BORDER_REPLICATE", CV_HAL_BORDER_REPLICATE);
  constant("CV_HAL_BORDER_REFLECT", CV_HAL_BORDER_REFLECT);
  constant("CV_HAL_BORDER_WRAP", CV_HAL_BORDER_WRAP);
  constant("CV_HAL_BORDER_REFLECT_101", CV_HAL_BORDER_REFLECT_101);
  constant("CV_HAL_BORDER_TRANSPARENT", CV_HAL_BORDER_TRANSPARENT);
  constant("CV_HAL_BORDER_ISOLATED", CV_HAL_BORDER_ISOLATED);
  //! @}

  //! @name DFT flags
  //! @{
  constant("CV_HAL_DFT_INVERSE", CV_HAL_DFT_INVERSE);
  constant("CV_HAL_DFT_SCALE", CV_HAL_DFT_SCALE);
  constant("CV_HAL_DFT_ROWS", CV_HAL_DFT_ROWS);
  constant("CV_HAL_DFT_COMPLEX_OUTPUT", CV_HAL_DFT_COMPLEX_OUTPUT);
  constant("CV_HAL_DFT_REAL_OUTPUT", CV_HAL_DFT_REAL_OUTPUT);
  constant("CV_HAL_DFT_TWO_STAGE", CV_HAL_DFT_TWO_STAGE);
  constant("CV_HAL_DFT_STAGE_COLS", CV_HAL_DFT_STAGE_COLS);
  constant("CV_HAL_DFT_IS_CONTINUOUS", CV_HAL_DFT_IS_CONTINUOUS);
  constant("CV_HAL_DFT_IS_INPLACE", CV_HAL_DFT_IS_INPLACE);
  //! @}

  //! @name SVD flags
  //! @{
  constant("CV_HAL_SVD_NO_UV", CV_HAL_SVD_NO_UV);
  constant("CV_HAL_SVD_SHORT_UV", CV_HAL_SVD_SHORT_UV);
  constant("CV_HAL_SVD_MODIFY_A", CV_HAL_SVD_MODIFY_A);
  constant("CV_HAL_SVD_FULL_UV", CV_HAL_SVD_FULL_UV);
  //! @}

  //! @name Gemm flags
  //! @{
  constant("CV_HAL_GEMM_1_T", CV_HAL_GEMM_1_T);
  constant("CV_HAL_GEMM_2_T", CV_HAL_GEMM_2_T);
  constant("CV_HAL_GEMM_3_T", CV_HAL_GEMM_3_T);
  //! @}

  //! @name Data types
  //! primitive types
  //! - schar  - signed 1 byte integer
  //! - uchar  - unsigned 1 byte integer
  //! - short  - signed 2 byte integer
  //! - ushort - unsigned 2 byte integer
  //! - int    - signed 4 byte integer
  //! - uint   - unsigned 4 byte integer
  //! - int64  - signed 8 byte integer
  //! - uint64 - unsigned 8 byte integer
  //! @{

  constant("CV_8U", CV_8U);
  constant("CV_8S", CV_8S);
  constant("CV_16U", CV_16U);
  constant("CV_16S", CV_16S);
  constant("CV_32S", CV_32S);
  constant("CV_32F", CV_32F);
  constant("CV_64F", CV_64F);
  constant("CV_USRTYPE1", CV_USRTYPE1);

  function("CV_MAT_DEPTH", &WrapCvType::matDepth);
  function("CV_MAKE_TYPE", &WrapCvType::makeType);
  function("CV_MAKETYPE", &WrapCvType::makeType);

  constant("CV_8UC1", CV_8UC1);
  constant("CV_8UC2", CV_8UC2);
  constant("CV_8UC3", CV_8UC3);
  constant("CV_8UC4", CV_8UC4);
  function("CV_8UC", &WrapCvType::WCV_8UC);

  constant("CV_8SC1", CV_8SC1);
  constant("CV_8SC2", CV_8SC2);
  constant("CV_8SC3", CV_8SC3);
  constant("CV_8SC4", CV_8SC4);
  function("CV_8SC", &WrapCvType::WCV_8SC);

  constant("CV_16UC1", CV_16UC1);
  constant("CV_16UC2", CV_16UC2);
  constant("CV_16UC3", CV_16UC3);
  constant("CV_16UC4", CV_16UC4);
  function("CV_16UC", &WrapCvType::WCV_16UC);

  constant("CV_16SC1", CV_16SC1);
  constant("CV_16SC2", CV_16SC2);
  constant("CV_16SC3", CV_16SC3);
  constant("CV_16SC4", CV_16SC4);
  function("CV_16SC", &WrapCvType::WCV_16SC);

  constant("CV_32SC1", CV_32SC1);
  constant("CV_32SC2", CV_32SC2);
  constant("CV_32SC3", CV_32SC3);
  constant("CV_32SC4", CV_32SC4);
  function("CV_32SC", &WrapCvType::WCV_32SC);

  constant("CV_32FC1", CV_32FC1);
  constant("CV_32FC2", CV_32FC2);
  constant("CV_32FC3", CV_32FC3);
  constant("CV_32FC4", CV_32FC4);
  function("CV_32FC", &WrapCvType::WCV_32FC);

  constant("CV_64FC1", CV_64FC1);
  constant("CV_64FC2", CV_64FC2);
  constant("CV_64FC3", CV_64FC3);
  constant("CV_64FC4", CV_64FC4);
  function("CV_64FC", &WrapCvType::WCV_64FC);
  //! @}

  auto mat_constructor = overload(
      []() { return cv::Mat(); },
      [](int rows, int cols, int type) { return cv::Mat(rows, cols, type); },
      [](Size size, int type) { return cv::Mat(size, type); },
      [](int rows, int cols, int type, const Scalar &s) {
        return cv::Mat(rows, cols, type, s);
      },
      [](cv::Size size, int type, const Scalar &s) {
        return cv::Mat(size, type, s);
      },
      [](int ndims, const std::vector<int> &sizes, int type) {
        if (sizes.size() < size_t(ndims)) {
          throw LuaTypeMismatch("sizes  < ndims");
        }
        return cv::Mat(ndims, sizes.data(), type);
      },
      [](int ndims, const std::vector<int> &sizes, int type, const Scalar &s) {
        if (sizes.size() < size_t(ndims)) {
          throw LuaTypeMismatch("sizes  < ndims");
        }
        return cv::Mat(ndims, sizes.data(), type, s);
      },
      [](const cv::Mat &m) { return cv::Mat(m); },
      [](const cv::Mat &m, const Range &rowRange) {
        return cv::Mat(m, rowRange);
      },
      [](const cv::Mat &m, const Range &rowRange, const Range &colRange) {
        return cv::Mat(m, rowRange, colRange);
      },
      [](const cv::Mat &m, const Rect &roi) { return cv::Mat(m, roi); },
      [](const cv::Mat &m, const std::vector<Range> &ranges) {
        if (ranges.size() < size_t(m.dims)) {
          throw LuaTypeMismatch("sizes  < m.dims");
        }
        return cv::Mat(m, ranges.data());
      });

  class_<cv::Mat>("Mat")
      .class_function("new", mat_constructor)
      .function("isSubmatrix", wrap::Mat::isSubmatrix)
      .function("locateROI", wrap::Mat::locateROI)
      .function("resize", wrap::Mat::resize)
      .function("t", wrap::Mat::t)
      .function("ptr", wrap::Mat::ptr)
      .function("deallocate", wrap::Mat::deallocate)
      .function("setTo", wrap::Mat::setTo)
      .function("mul", wrap::Mat::mul)
      .function("depth", wrap::Mat::depth)
      .class_function("getDefaultAllocator", wrap::Mat::getDefaultAllocator)
      .function("copySize", wrap::Mat::copySize)
      .function("elemSize1", wrap::Mat::elemSize1)
      .function("diag", wrap::Mat::diag)
      .function("clone", wrap::Mat::clone)
      .function("reserve", wrap::Mat::reserve)
      .function("dot", wrap::Mat::dot)
      .function("type", wrap::Mat::type)
      .class_function("ones", wrap::Mat::ones)
      .function("getUMat", wrap::Mat::getUMat)
      .function("reshape", wrap::Mat::reshape)
      .function("convertTo", wrap::Mat::convertTo)
      .function("total", wrap::Mat::total)
      .function("create", wrap::Mat::create)
      .function("colRange", wrap::Mat::colRange)
      .function("assignTo", wrap::Mat::assignTo)
      .class_function("zeros", wrap::Mat::zeros)
      .function("pop_back", wrap::Mat::pop_back)
      .function("elemSize", wrap::Mat::elemSize)
      .function("inv", wrap::Mat::inv)
      .function("row", wrap::Mat::row)
      .function("push_back_", wrap::Mat::push_back_)
      .class_function("setDefaultAllocator", wrap::Mat::setDefaultAllocator)
      .function("adjustROI", wrap::Mat::adjustROI)
      .function("copyTo", wrap::Mat::copyTo)
      .function("isContinuous", wrap::Mat::isContinuous)
      .function("channels", wrap::Mat::channels)
      .function("checkVector", wrap::Mat::checkVector)
      .function("col", wrap::Mat::col)
      .function("rowRange", wrap::Mat::rowRange)
      .class_function("eye", wrap::Mat::eye)
      .function("cross", wrap::Mat::cross)
      .function("empty", wrap::Mat::empty)
      .function("release", wrap::Mat::release)
      .class_function("getStdAllocator", wrap::Mat::getStdAllocator)
      .function("addref", wrap::Mat::addref)
      .function("push_back", wrap::Mat::push_back)
      .class_function("at",
                      kaguya::overload(wrap::Mat::at_point, wrap::Mat::at_array,
                                       wrap::Mat::at_1, wrap::Mat::at_2))
      .class_function(
          "set", kaguya::overload(wrap::Mat::set_point, wrap::Mat::set_array,
                                  wrap::Mat::set_1, wrap::Mat::set_2))
      .property("flags", &cv::Mat::flags)
      .property("dims", &cv::Mat::dims)
      .property("rows", &cv::Mat::rows)
      .property("cols", &cv::Mat::cols)
      .property("size", &wrap::Mat::size_getter)
      .class_function("__tostring", &kaguya_stringifier<cv::Mat>)
      .add_static_property("__index",
                           luacfunction(wrap::Mat::Mat_index_function))
      .add_static_property("__newindex",
                           luacfunction(wrap::Mat::Mat_newindex_function))

      ;

  class_<cv::Scalar>("Scalar")
      .class_function("new", scalar_factory())
      .class_function("__tostring", &kaguya_stringifier<cv::Scalar>);

  function("Point", [](int x, int y) { return cv::Size(x, y); });
  function("Size",
           [](int width, int height) { return cv::Point(width, height); });
  function("Range", [](int start, int end) { return cv::Range(start, end); });
  function("Rect", [](int x, int y, int height, int width) {
    return cv::Rect(x, y, height, width);
  });
}

