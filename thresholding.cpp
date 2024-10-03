//#include<iostream>
//#include<opencv2/opencv.hpp>
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat img1 = imread("C:/Users/User/Downloads/gerbera-1684436_640.jpg");
//	Mat img = imread("C:/Users/User/Downloads/gerbera-1684436_640.jpg", IMREAD_GRAYSCALE);
//	Mat dst,dst1,dst2,dst3,dst4;
//	double thresh = 200;
//	double max_value = 255;
//	threshold(img1, dst, thresh, max_value, THRESH_BINARY);
//	threshold(img1, dst2, thresh, max_value, THRESH_TRUNC);
//	threshold(img1, dst1, thresh, max_value, THRESH_BINARY_INV);
//	threshold(img1, dst3, thresh, max_value, THRESH_TOZERO);
//	threshold(img1, dst4, thresh, max_value, THRESH_TOZERO_INV);
//	imshow(" original image", img);
//	imshow(" original image 1", img1);
//	imshow(" after thresholding", dst);
//	imshow(" after inverse thresholding", dst1);
//	imshow(" after to trunc thresholding", dst2);
//	imshow(" after to zerothresholding", dst3);
//	imshow(" after inverse to zerothresholding", dst4);
//	waitKey(0);
//	return 0;
//}