#include "obj_processing.h"
void image_pro::morpho_fn()
{
	cv::Mat image = cv::imread("./images/Image_20240928105123410.bmp");
	cv::Mat img;
	resize(image, img, cv::Size(500, 500));
	imshow("resized image", img);
	cv::Mat element = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(5, 5), cv::Point(-1, -1));
	cv::Mat element1 = cv::getStructuringElement(cv::MORPH_CROSS, cv::Size(5, 5), cv::Point(-1, -1));
	cv::Mat element2 = cv::getStructuringElement(cv::MORPH_ELLIPSE, cv::Size(5, 5), cv::Point(-1, -1));
	std::cout << element << std::endl;
	std::cout<<std::endl;
	//imshow("rect", element);
	std::cout << element1 << std::endl;
	std::cout<<std::endl;
	//imshow("cross", element1);
	std::cout << element2 << std::endl;
	//imshow("eclipse", element2);

	//erode
	cv::Mat erode;
	cv::erode(img, erode, element, cv::Point(-1, -1), 2);
	//std::cout << erode << std::endl;
	imshow("erode img", erode);

	cv::Mat dilate;
	cv::dilate(erode, dilate, element, cv::Point(-1, -1), 2);
	imshow("dilate img", dilate);

	cv::Mat dilate1;
	cv::dilate(img, dilate1, element, cv::Point(-1, -1), 2);
	imshow("dilate1 img", dilate1);
	cv::waitKey(0);
	
}