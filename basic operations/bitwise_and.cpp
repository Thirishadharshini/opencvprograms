#include"basics operations.h"
void basic_operations::bitwise_and_op()
{
	//cv::Mat img = (cv::Mat_<double>(3, 3) << 200, 200, 200, 200, 200, 200, 200, 200, 200);
	cv::Mat img = cv::Mat(cv::Size(5,5), CV_8UC1, cv::Scalar(200));
	img.at<char>(0, 0) = 255;
	img.at<char>(2, 1) = 10;
	/*img.at<char>(2,7) = 5;
	img.at<char>(4, 14) = 30;
	img.at<char>(4, 13) = 30;
	img.at<char>(4, 12) = 30;*/
	cv::Mat color;
	cv::cvtColor(img, color, cv::COLOR_GRAY2BGR);
	imshow(" color image", color);


	std::cout << img.rows << "x" << img.cols << std::endl;
	std::cout << "original image width:" << img.size().width << std::endl;
	std::cout << "original image height:" << img.size().height <<std:: endl;
	/*img.at<char>(7, 13) = 20, 30, 10;
	img.at<char>(7, 14) = 20, 30, 10;
	img.at<char>(14, 14) = 20, 30, 10;*/
	cv::Mat resize_img;
	resize(img, resize_img, cv::Size(500, 500), cv::INTER_NEAREST);
	cv::Mat color_img;
	resize(color, color_img, cv::Size(500, 500), cv::INTER_NEAREST);
	std::cout << img;
	imshow("image", img);
	imshow(" resize image", resize_img);
	imshow(" resize color image", color_img);
	cv::Mat image= cv::Mat(cv::Size(500, 500), CV_8UC3, cv::Scalar(200,20,20));
	imshow("test image", image);
	cv::Mat bitwise_img;
    cv:: bitwise_and(image,color_img,bitwise_img);
    imshow("final image", bitwise_img);
	
    cv::waitKey(0);
	
}