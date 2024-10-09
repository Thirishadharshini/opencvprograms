//#include <opencv2/opencv.hpp>
//#include <iostream>
//#include <string>
//
//int maxScaleUp = 1000;
//int scaleFactor = 1;
//std::string windowName = "Resize Image";
//std::string trackbarValue = "Scale";
//
//void scaleImage(int, void*)
//{
//    
//    cv::Mat image = cv::imread("C:/Users/User/Downloads/flower-7696955_1280.jpg");
//    double scaleFactorDouble = 1 + scaleFactor / 100.0;
//    if (scaleFactorDouble == 0)
//    {
//        scaleFactorDouble = 1;
//    }
//
//    cv::Mat scaledImage;
//    resize(image, scaledImage, cv::Size(), scaleFactorDouble, scaleFactorDouble, cv::INTER_LINEAR);
//    imshow(windowName, scaledImage);
//}
//
//int main()
//{
// 
//    cv::Mat image = cv::imread("C:/Users/User/Downloads/flower-7696955_1280.jpg");
//    cv::namedWindow(windowName, cv::WINDOW_AUTOSIZE);
//    cv::createTrackbar(trackbarValue, windowName, &scaleFactor, maxScaleUp, scaleImage);
//    scaleImage(50, 0);
//    imshow(windowName, image);
//    cv::waitKey(0);
//    cv::destroyAllWindows();
//    return 0;
//}