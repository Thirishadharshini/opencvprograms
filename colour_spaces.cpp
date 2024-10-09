//#include<iostream>
//#include<opencv2/opencv.hpp>
//
//using namespace std;
//using namespace cv;
//int main()
//{
//	Mat bright = imread("./images/rubik'scube_bright.jpg");
//	Mat dark = imread("./images/rubik'scube_dark.jpg");
//
//	Mat bright_lab, dark_lab;
//	cvtColor(bright, bright_lab,COLOR_BGR2Lab );
//	cvtColor(dark, dark_lab,COLOR_BGR2Lab);
//
//	imshow("bright lab image", bright_lab);
//	imshow("dark lab image", dark_lab);
//
//	Mat bright_hsv, dark_hsv;
//	cvtColor(bright, bright_hsv, COLOR_BGR2Lab);
//	cvtColor(dark, dark_hsv, COLOR_BGR2Lab);
//
//	imshow("bright hsv image", bright_hsv);
//	imshow("dark hsv image", dark_hsv);
//	waitKey(0);
//	return 0;
//
//}