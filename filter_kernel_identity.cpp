//#include<iostream>
//#include<opencv2/opencv.hpp>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat img = imread("C:/Users/User/Downloads/flower-7696955_1280.jpg");
//	Mat identity_img;
//	Mat kernel = (Mat_<double>(3, 3) << 0, 0, 0, 0, 1, 0, 0, 0, 0);
//	filter2D(img, identity_img, -1,kernel);
//
//	imshow("original image", img);
//	imshow("identity image", identity_img);
//	waitKey(0);
//	return 0;
//}