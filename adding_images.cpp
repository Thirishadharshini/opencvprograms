//#include<iostream>
//#include<opencv2/opencv.hpp>
//
//int main()
//{
//	cv::Mat img1 = cv::imread("$(SolutionDir)Downloads\Animi.jpeg");
//	cv::Mat img2 = cv::imread("$(SolutionDir)Downloads\animation.jpeg");
//	std::cout << img1.size()<<std::endl;
//	std::cout << img2.size()<<std::endl;
//	cv::Mat r_img1,r_img2;
//	resize(img2, r_img1, cv::Size(50,50));
//	resize(img1, r_img2, cv::Size(50,50));
//	imshow("image 1", r_img1);
//	imshow("image 2", r_img2);
//	cv::Mat added_img;
//	cv::addWeighted(r_img2, 0.5, r_img1, 0.5,0,added_img);
//	imshow("added image", added_img);
//	cv::waitKey(0);
//	return 0;
//
//}