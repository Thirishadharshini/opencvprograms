//#include<iostream>
//#include<opencv2/opencv.hpp>
//
//int main()
//{
//	cv::Mat image = cv::imread("C:/Users/User/MVS/Data/Image_20240928105123410.bmp");
//	cv::Mat img;
//	resize(image, img, cv::Size(500, 500));
//	imshow("resized image", img);
//	cv::Mat element = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(5, 5), cv::Point(-1, -1));
//	//cv::Mat element1 = cv::getStructuringElement(cv::MORPH_CROSS, cv::Size(5, 5), cv::Point(-1, -1));
//	//cv::Mat element2 = cv::getStructuringElement(cv::MORPH_ELLIPSE, cv::Size(5, 5), cv::Point(-1, -1));
//   //erode
//	cv::Mat erode;
//	cv::erode(img, erode, element, cv::Point(-1, -1), 2);
//	imshow("erode img", erode);
//    //dilate of eroded img
//	cv::Mat dilate;
//	cv::dilate(erode, dilate, element, cv::Point(-1, -1), 2);
//	imshow("dilate img", dilate);
//	//dilate of og img
//	cv::Mat dilate1;
//	cv::dilate(img, dilate1, element, cv::Point(-1, -1), 2);
//	imshow("dilate1 img", dilate1);
//
////contours for og img
//	cv::Mat img_gray;
//    cvtColor(img, img_gray, cv::COLOR_BGR2GRAY);
//	cv::Mat thresh;
//	threshold(img_gray, thresh, 110, 255,cv:: THRESH_BINARY);
//	imshow("Binary image", thresh);
//	//waitKey(0);
//		
//	std::vector<std::vector<cv::Point>> contours;
//	std::vector<cv::Vec4i> hierarchy;
//	findContours(thresh, contours, hierarchy, cv::RETR_TREE, cv::CHAIN_APPROX_NONE);
//
//	for (std::vector<std::vector<cv::Point> >::iterator it = contours.begin(); it != contours.end(); )
//        {
//		 //std::cout << "length of contour " << it->size() << std::endl;
//		 if (it->size() < 200)
//		  it = contours.erase(it);
//		 else
//		  ++it;
//		}
//	//draw contours
//	cv::Mat image_copy = img.clone();
//	drawContours(image_copy, contours, -1, cv::Scalar(255, 220, 0), 2);
//	imshow("contour image", image_copy);
//	std::cout << " Area of the cashew: " << contourArea(contours[0]) << "px" <<std:: endl;
//
//	//contours for  eroded dilate img
//	cv::Mat img_gray1;
//	cvtColor(dilate, img_gray1, cv::COLOR_BGR2GRAY);
//	cv::Mat thresh1;
//	threshold(img_gray1, thresh1, 110, 255, cv::THRESH_BINARY);
//	imshow("Binary image1", thresh1);
//	//waitKey(0);
//
//	std::vector<std::vector<cv::Point>> contours1;
//	std::vector<cv::Vec4i> hierarchy1;
//	findContours(thresh1, contours1, hierarchy1, cv::RETR_TREE, cv::CHAIN_APPROX_NONE);
//
//	//draw contours
//	cv::Mat image_copy1 = dilate.clone();
//	drawContours(image_copy1, contours1, -1, cv::Scalar(255, 220, 0), 2);
//	imshow("contour image1", image_copy1);
//	std::cout << " Area of the cashew: " << contourArea(contours1[0]) << "px" << std::endl;
//
//	cv::waitKey(0);
//	return 0;
//}