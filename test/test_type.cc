#include <opencv2/opencv.hpp>

#include <kaguya/kaguya.hpp>

#include <gtest/gtest.h>

#include "luaopencvtest.hpp"

TEST_F(LuaOpenCVTest, range_construct)
{
  cv::Range expected(3, 3);

  bool ret = lua_("actual = cv.Range(3,3) ");
  ASSERT_TRUE(ret);

  cv::Range actual = lua_["actual"];
  ASSERT_EQ(expected, actual);
}
TEST_F(LuaOpenCVTest, point_construct)
{
  cv::Point expected(3, 3);
  bool ret = lua_("actual = cv.Point(3,3) ");
  ASSERT_TRUE(ret);

  cv::Point actual = lua_["actual"];
  ASSERT_EQ(expected, actual);
}
TEST_F(LuaOpenCVTest, size_construct)
{
  cv::Size expected(3, 3);
  bool ret = lua_("actual = cv.Size(3,3) ");
  ASSERT_TRUE(ret);

  cv::Size actual = lua_["actual"];
  ASSERT_EQ(expected, actual);
}