#include<iostream>
#include<opencv2/opencv.hpp>
#include"image filter.h"
using namespace std;
using namespace cv;

void  img_filter::identity()
{
	Mat img = imread("./images/flower 2024-09-24.jpg");
	Mat identity_img;
	Mat kernel = (Mat_<double>(3, 3) << 0, 0, 0, 0, 1, 0, 0, 0, 0);
	filter2D(img, identity_img, -1,kernel);

	imshow("original image", img);
	imshow("identity image", identity_img);
	waitKey(0);
	
}