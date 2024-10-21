#include"obj_processing.h"
int maxScaleUp = 1000;
int scaleFactor = 1;
std::string windowName = "Resize Image";
std::string trackbarValue = "Scale";

void scaleImage(int, void*)
{
    
    cv::Mat image = cv::imread("./images/flower 2024-09-24.jpg");
    double scaleFactorDouble = 1 + scaleFactor / 100.0;
    if (scaleFactorDouble == 0)
    {
        scaleFactorDouble = 1;
    }

    cv::Mat scaledImage;
    resize(image, scaledImage, cv::Size(), scaleFactorDouble, scaleFactorDouble, cv::INTER_LINEAR);
    imshow(windowName, scaledImage);
}

void image_pro::track_bar()

{
 
    cv::Mat image = cv::imread("./images/flower 2024-09-24.jpg");
    cv::namedWindow(windowName, cv::WINDOW_AUTOSIZE);
    cv::createTrackbar(trackbarValue, windowName, &scaleFactor, maxScaleUp, scaleImage);
    scaleImage(50, 0);
    imshow(windowName, image);
    cv::waitKey(0);
    cv::destroyAllWindows();
   
}