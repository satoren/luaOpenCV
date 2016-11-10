#include <opencv2/opencv.hpp>

#include <kaguya/kaguya.hpp>

#include <gtest/gtest.h>

#include "luaopencvtest.hpp"

TEST_F(LuaOpenCVTest, line_draw) {
  cv::Mat expected = cv::Mat::zeros(500, 500, CV_8UC3);

  cv::line(expected, cv::Point(100, 100), cv::Point(400, 105),
           cv::Scalar(0, 0, 200), 3, cv::LINE_4);
  cv::line(expected, cv::Point(100, 200), cv::Point(400, 205),
           cv::Scalar(0, 200, 0), 5, cv::LINE_8);
  cv::line(expected, cv::Point(100, 300), cv::Point(400, 305),
           cv::Scalar(200, 0, 0), 10, cv::LINE_AA);

  bool ret = lua_(
      "img = cv.Mat.zeros(500, 500, cv.CV_8UC3) "
      "cv.line(img, {100, 100}, {400, 105}, cv.Scalar(0, 0, 200), 3, "
      "cv.LINE_4) "
      "cv.line(img, {100, 200}, {400, 205}, cv.Scalar(0, 200, 0), 5, "
      "cv.LINE_8) "
      "cv.line(img, {100, 300}, {400, 305}, cv.Scalar(200, 0, 0), 10, "
      "cv.LINE_AA) ");
  ASSERT_TRUE(ret);
  cv::Mat img = lua_["img"];

  // cv::imshow("test", img);
  // cv::waitKey(0);

  bool eq = std::equal(expected.begin<uchar>(), expected.end<uchar>(),
                       img.begin<uchar>());
  ASSERT_TRUE(eq);
}
TEST_F(LuaOpenCVTest, circle_draw) {
  cv::Mat expected = cv::Mat::zeros(500, 500, CV_8UC3);

  cv::circle(expected, cv::Point(300, 100), 100, cv::Scalar(0, 0, 200), 3,
             cv::LINE_4);
  cv::circle(expected, cv::Point(200, 250), 120, cv::Scalar(0, 200, 0), 8,
             cv::LINE_8);
  cv::circle(expected, cv::Point(300, 400), 80, cv::Scalar(200, 0, 0), -1,
             cv::LINE_AA);

  bool ret = lua_(
      "img = cv.Mat.zeros(500, 500, cv.CV_8UC3) "
      "cv.circle(img, {300, 100}, 100, cv.Scalar(0, 0, 200), 3, cv.LINE_4) "
      "cv.circle(img, {200, 250}, 120, cv.Scalar(0, 200, 0), 8, cv.LINE_8) "
      "cv.circle(img, {300, 400}, 80, cv.Scalar(200, 0, 0), -1, "
      "cv.LINE_AA) ");
  ASSERT_TRUE(ret);
  cv::Mat img = lua_["img"];

  // cv::imshow("test", img);
  // cv::waitKey(0);

  bool eq = std::equal(expected.begin<uchar>(), expected.end<uchar>(),
                       img.begin<uchar>());
  ASSERT_TRUE(eq);
}

TEST_F(LuaOpenCVTest, ellipse_draw) {
  cv::Mat expected = cv::Mat::zeros(500, 500, CV_8UC3);

  cv::circle(expected, cv::Point(300, 100), 100, cv::Scalar(0, 0, 200), 3,
             cv::LINE_4);
  cv::circle(expected, cv::Point(200, 250), 120, cv::Scalar(0, 200, 0), 8,
             cv::LINE_8);
  cv::circle(expected, cv::Point(300, 400), 80, cv::Scalar(200, 0, 0), -1,
             cv::LINE_AA);

  bool ret = lua_(
      "img = cv.Mat.zeros(500, 500, cv.CV_8UC3) "
      "cv.circle(img, {300, 100}, 100, cv.Scalar(0, 0, 200), 3, cv.LINE_4) "
      "cv.circle(img, {200, 250}, 120, cv.Scalar(0, 200, 0), 8, cv.LINE_8) "
      "cv.circle(img, {300, 400}, 80, cv.Scalar(200, 0, 0), -1, "
      "cv.LINE_AA) ");
  ASSERT_TRUE(ret);
  cv::Mat img = lua_["img"];

  // cv::imshow("test", img);
  // cv::waitKey(0);

  bool eq = std::equal(expected.begin<uchar>(), expected.end<uchar>(),
                       img.begin<uchar>());
  ASSERT_TRUE(eq);
}

TEST_F(LuaOpenCVTest, polylines_draw) {
  cv::Mat expected = cv::Mat::zeros(500, 500, CV_8UC3);

  std::vector<std::vector<cv::Point> > points = {
      {{200, 200}, {300, 400}, {200, 400}, {100, 400}, {200, 250}},
      {{10, 20}, {150, 100}, {150, 150}, {150, 50}, {10, 60}}};

  cv::polylines(expected, points, true, cv::Scalar(0, 0, 200), 3, cv::LINE_AA);

  bool ret = lua_(
      "img = cv.Mat.zeros(500, 500, cv.CV_8UC3) "
      "points = {	{ {200, 200}, { 300,400 }, { 200,400 }, { 100,400 }, { "
      "200,250 } },"
      "{ { 10,20 },{ 150,100 },{ 150,150 },{ 150,50 },{ 10,60 } }} "
      "cv.polylines(img, points, true, cv.Scalar(0, 0, 200), 3, cv.LINE_AA) ");
  ASSERT_TRUE(ret);
  cv::Mat img = lua_["img"];

  // cv::imshow("test", img);
  // cv::waitKey(0);

  bool eq = std::equal(expected.begin<uchar>(), expected.end<uchar>(),
                       img.begin<uchar>());
  ASSERT_TRUE(eq);
}

TEST_F(LuaOpenCVTest, fillPoly_draw) {
  cv::Mat expected = cv::Mat::zeros(500, 500, CV_8UC3);

  std::vector<std::vector<cv::Point> > points = {
      {{200, 200}, {300, 400}, {200, 400}, {100, 400}, {200, 250}},
      {{10, 20}, {150, 100}, {150, 150}, {150, 50}, {10, 60}}};

  cv::fillPoly(expected, points, cv::Scalar(0, 0, 200), cv::LINE_AA);

  bool ret = lua_(
      "img = cv.Mat.zeros(500, 500, cv.CV_8UC3) "
      "points = {	{ {200, 200}, { 300,400 }, { 200,400 }, { 100,400 }, { "
      "200,250 } },"
      "{ { 10,20 },{ 150,100 },{ 150,150 },{ 150,50 },{ 10,60 } }} "
      "cv.fillPoly(img, points, cv.Scalar(0, 0, 200), cv.LINE_AA) ");
  ASSERT_TRUE(ret);
  cv::Mat img = lua_["img"];

  // cv::imshow("test", img);
  // cv::waitKey(0);

  bool eq = std::equal(expected.begin<uchar>(), expected.end<uchar>(),
                       img.begin<uchar>());
  ASSERT_TRUE(eq);
}

TEST_F(LuaOpenCVTest, putText_draw) {
  cv::Mat expected = cv::Mat::zeros(500, 500, CV_8UC3);

  cv::putText(expected, "OpenCV Test", cv::Point(50, 50),
              cv::FONT_HERSHEY_SIMPLEX, 2, cv::Scalar(0, 0, 200), 2,
              cv::LINE_AA);

  bool ret = lua_(
      "img = cv.Mat.zeros(500, 500, cv.CV_8UC3) "
      "cv.putText(img, 'OpenCV Test', {50, 50}, cv.FONT_HERSHEY_SIMPLEX, 2, "
      "cv.Scalar(0, 0, 200), 2, cv.LINE_AA); ");
  ASSERT_TRUE(ret);
  cv::Mat img = lua_["img"];

  // cv::imshow("test", img);
  // cv::waitKey(0);

  bool eq = std::equal(expected.begin<uchar>(), expected.end<uchar>(),
                       img.begin<uchar>());
  ASSERT_TRUE(eq);
}