//#include<iostream>
//#include<opencv2/opencv.hpp>
//using namespace std; using namespace cv;
//
//int main()
//{
//
//	Mat image = imread("C:/Users/User/Downloads/flower-7696955_1280.jpg");
//	/*Mat image;
//	resize(simg, image, Size(500, 500),INTER_AREA);*/
//	Mat kernel2 = Mat::ones(5, 5, CV_64F);
//
//	// Normalize the elements
//	kernel2 = kernel2 / 25;
//	Mat img;
//	filter2D(image, img, -1, kernel2, Point(-1, -1), 0, 4);
//	imshow("Original", image);
//	imshow("Kernel blur", img);
//	
//	Mat img_blur;
//	blur(image, img_blur, Size(5, 5));
//	
//	imshow("Blurred", img_blur);
//		
//	Mat gaussian_blur;
//	GaussianBlur(image, gaussian_blur, Size(5, 5),  0,  0);
//	imshow("Gaussian Blurred", gaussian_blur);
//
//	Mat median_blurred;
//	medianBlur(image, median_blurred, (5, 5));
//	imshow("Median Blurred", median_blurred);
//
//	waitKey();
//	destroyAllWindows();
//}