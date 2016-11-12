#include <opencv2/opencv.hpp>

#include <kaguya/kaguya.hpp>

#include <gtest/gtest.h>

#include "luaopencvtest.hpp"

TEST_F(LuaOpenCVTest, Mat_construct_from_cols_rows) {
  cv::Mat expected(3, 3, CV_64FC(10));
  lua_("m1 = cv.Mat(3,3,cv.CV_64FC(10))");
  cv::Mat m1 = lua_["m1"];

  ASSERT_EQ(expected.type(), m1.type());
  ASSERT_EQ(expected.cols, m1.cols);
  ASSERT_EQ(expected.rows, m1.rows);
  ASSERT_EQ(expected.dims, m1.dims);
  ASSERT_EQ(expected.depth(), m1.depth());
  ASSERT_EQ(expected.channels(), m1.channels());
  ASSERT_EQ(expected.size(), m1.size());
  ASSERT_EQ(3, m1.cols);
  ASSERT_EQ(3, m1.rows);
  ASSERT_EQ(2, m1.dims);
  ASSERT_EQ(6, m1.depth());
}
TEST_F(LuaOpenCVTest, Mat_construct_with_dims) {
  const int sizes[] = {2, 2, 3, 4};
  cv::Mat expected(sizeof(sizes) / sizeof(int), sizes, CV_64FC1);

  ASSERT_TRUE(lua_("m1 = cv.Mat(4,{ 2, 2, 3, 4 },cv.CV_64FC1)"));
  cv::Mat m1 = lua_["m1"];

  ASSERT_EQ(expected.type(), m1.type());
  ASSERT_EQ(expected.cols, m1.cols);
  ASSERT_EQ(expected.rows, m1.rows);
  ASSERT_EQ(expected.dims, m1.dims);
  ASSERT_EQ(expected.channels(), m1.channels());
  ASSERT_EQ(expected.depth(), m1.depth());
  ASSERT_EQ(expected.size(), m1.size());
  ASSERT_EQ(4, m1.dims);
  ASSERT_EQ(1, m1.channels());
  ASSERT_EQ(6, m1.depth());
}

TEST_F(LuaOpenCVTest, Mat_construct_with_eye) {
  cv::Mat expected = cv::Mat::eye(3, 3, CV_64F);
  ASSERT_TRUE(lua_("m1 = cv.Mat.eye(3,3,cv.CV_64F)"));
  cv::Mat m1 = lua_["m1"];
  ASSERT_EQ(expected.type(), m1.type());
  ASSERT_EQ(expected.cols, m1.cols);
  ASSERT_EQ(expected.rows, m1.rows);
  ASSERT_EQ(expected.dims, m1.dims);
  ASSERT_EQ(expected.channels(), m1.channels());
  ASSERT_EQ(expected.depth(), m1.depth());
  ASSERT_EQ(expected.size(), m1.size());
  ASSERT_EQ(to_string(expected), to_string(m1));

  ASSERT_EQ(expected.cols, lua_["m1"]["cols"]);
  ASSERT_EQ(expected.rows, lua_["m1"]["rows"]);
  ASSERT_EQ(expected.dims, lua_["m1"]["dims"]);
  for (int x = 0; x < expected.cols; x++) {
    for (int y = 0; y < expected.cols; y++) {
      ASSERT_EQ(lua_["m1"][cv::Point(x, y)], expected.at<double>(x, y));
    }
  }
}
TEST_F(LuaOpenCVTest, Mat_construct_with_zeros) {
  cv::Mat expected = cv::Mat::zeros(3, 3, CV_8UC3);
  ASSERT_TRUE(lua_("m1 = cv.Mat.zeros(3,3,cv.CV_8UC3)"));
  cv::Mat m1 = lua_["m1"];
  ASSERT_EQ(expected.type(), m1.type());
  ASSERT_EQ(expected.cols, m1.cols);
  ASSERT_EQ(expected.rows, m1.rows);
  ASSERT_EQ(expected.dims, m1.dims);
  ASSERT_EQ(expected.channels(), m1.channels());
  ASSERT_EQ(expected.depth(), m1.depth());
  ASSERT_EQ(expected.size(), m1.size());
  ASSERT_EQ(to_string(expected), to_string(m1));
  for (int x = 0; x < expected.cols; x++) {
    for (int y = 0; y < expected.cols; y++) {
      cv::Vec<uint8_t, 3> a = lua_["m1"][cv::Point(x, y)];
      cv::Vec<uint8_t, 3> e = expected.at<cv::Vec<uint8_t, 3> >(x, y);
      ASSERT_EQ(e, a);
    }
  }
}
TEST_F(LuaOpenCVTest, Mat_construct_with_ones) {
  cv::Mat expected = cv::Mat::ones(3, 3, CV_8UC3);
  ASSERT_TRUE(lua_("m1 = cv.Mat.ones(3,3,cv.CV_8UC3)"));
  cv::Mat m1 = lua_["m1"];
  ASSERT_EQ(expected.type(), m1.type());
  ASSERT_EQ(expected.cols, m1.cols);
  ASSERT_EQ(expected.rows, m1.rows);
  ASSERT_EQ(expected.dims, m1.dims);
  ASSERT_EQ(expected.channels(), m1.channels());
  ASSERT_EQ(expected.depth(), m1.depth());
  ASSERT_EQ(expected.size(), m1.size());
  ASSERT_EQ(to_string(expected), to_string(m1));
  ASSERT_EQ(3, m1.channels());
  for (int x = 0; x < expected.cols; x++) {
    for (int y = 0; y < expected.cols; y++) {
      cv::Vec<uint8_t, 3> a = lua_["m1"][cv::Point(x, y)];
      cv::Vec<uint8_t, 3> e = expected.at<cv::Vec<uint8_t, 3> >(x, y);
      ASSERT_EQ(e, a);
    }
  }
}

TEST_F(LuaOpenCVTest, Mat_initialize_with_ramdom) {
  cv::Mat nexpected = cv::Mat::eye(3, 3, CV_64F);

  cv::randu(nexpected, cv::Scalar(0), cv::Scalar(256));
  ASSERT_TRUE(lua_("m1 = cv.Mat.eye(3,3,cv.CV_64F)"));
  ASSERT_TRUE(lua_("cv.randu(m1,cv.Scalar(0),cv.Scalar(256))"));

  cv::Mat m1 = lua_["m1"];
  ASSERT_NE(to_string(nexpected), to_string(m1));
}

TEST_F(LuaOpenCVTest, Mat_to_string) {
  std::string expected = to_string(cv::Mat(3, 3, CV_64FC(10), cv::Scalar()));

  lua_("m1 = tostring(cv.Mat(3,3,cv.CV_64FC(10),cv.Scalar()))");
  std::string m1 = lua_["m1"];

  ASSERT_EQ(expected, m1);
}
