#include <opencv2/opencv.hpp>

#include <kaguya/kaguya.hpp>

#include <gtest/gtest.h>

#include "luaopencvtest.hpp"

TEST_F(LuaOpenCVTest, image_read) {
  cv::Mat expected = cv::imread("img/lena_std.png");

  bool ret = lua_("img = cv.imread('img/lena_std.png') ");
  ASSERT_TRUE(ret);
  cv::Mat img = lua_["img"];

  bool eq = std::equal(expected.begin<uchar>(), expected.end<uchar>(),
                       img.begin<uchar>());
  ASSERT_TRUE(eq);
}

TEST_F(LuaOpenCVTest, changing_contrast_and_brightness_of_an_image) {
  using namespace cv;

  const double alpha = 2;
  const int beta = -1;

  Mat image = imread("img/lena_std.png");
  Mat expected = Mat::zeros(image.size(), image.type());
  for (int y = 0; y < image.rows; y++) {
    for (int x = 0; x < image.cols; x++) {
      for (int c = 0; c < 3; c++) {
        expected.at<Vec3b>(y, x)[c] =
            saturate_cast<uchar>(alpha * (image.at<Vec3b>(y, x)[c]) + beta);
      }
    }
  }
  lua_["alpha"] = alpha;
  lua_["beta"] = beta;
  bool ret = lua_(
      "image = cv.imread('img/lena_std.png') "
      "img = cv.Mat.zeros(image.size, image:type())  "
      "for y=0,image.rows-1 do "
      "  for x=0,image.cols-1 do "
      "    p = image[{x,y}] "
      "    for c=1,3 do "
      "      p[c]=  math.min(255,math.max(0,alpha * p[c] + beta)) "
      "    end "
      "    img[{x,y}] = p "
      "  end "
      "end ");

  ASSERT_TRUE(ret);
  cv::Mat img = lua_["img"];

  // cv::imshow("test", img);
  // cv::waitKey(0);

  bool eq = std::equal(expected.begin<uchar>(), expected.end<uchar>(),
                       img.begin<uchar>());
  ASSERT_TRUE(eq);
}


TEST_F(LuaOpenCVTest, changing_contrast_and_brightness_of_an_image_with_convertTo) {
	using namespace cv;

	const double alpha = 1.5;
	const int beta = 4;

	Mat image = imread("img/lena_std.png");
	Mat expected;
	image.convertTo(expected, -1, alpha, beta);

	lua_["alpha"] = alpha;
	lua_["beta"] = beta;
	bool ret = lua_(
		"original = cv.imread('img/lena_std.png') "
		"img = cv.Mat() "
		"original:convertTo(img,-1,alpha,beta) "
	);

	ASSERT_TRUE(ret);
	cv::Mat img = lua_["img"];

//	 cv::imshow("test", img);
//	 cv::waitKey(0);

	bool eq = std::equal(expected.begin<uchar>(), expected.end<uchar>(),
		img.begin<uchar>());
	ASSERT_TRUE(eq);
}