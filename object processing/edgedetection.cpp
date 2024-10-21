#include <opencv2/opencv.hpp>
#include <iostream>
#include"mouse.h"
using namespace std;
using namespace cv;

void image_pro::edge_detect()
{
    
    Mat image = imread("./images/Image_20240928105123410.bmp");
    Mat img;
    resize(image, img, Size(500, 500),INTER_AREA);
    imshow("original Image", img);
    Mat img_gray;
    cvtColor(img, img_gray, COLOR_BGR2GRAY);
   
    Mat img_blur;
    //GaussianBlur(img_gray, img_blur, Size(3, 3), 0);
    GaussianBlur(img_gray, img_blur, Size(5,5), 0);
   
    Mat sobelx, sobely, sobelxy;
    Sobel(img_blur, sobelx, CV_64F, 1, 0, 5);
    Sobel(img_blur, sobely, CV_64F, 0, 1, 5);
    Sobel(img_blur, sobelxy, CV_64F, 1, 1, 5);
    imshow("Sobel X", sobelx);
    imshow("Sobel Y", sobely);
    imshow("Sobel XY using Sobel() function", sobelxy);
   
    Mat edges ,e1;
    Canny(img_blur, edges, 50, 150,3,false);
    Canny(img_blur, e1, 100,200,3,false);
    imshow("Canny edge detection", edges);
    imshow("Canny edge 1 detection", e1);


    Mat edge_img;
    Mat kernel = (Mat_<double>(3, 3) << -1, -1, -1,
        -1, 8, -1,
        -1, -1, -1);
    filter2D(img, edge_img, -1, kernel);
    imshow("edge detected image", edge_img);
    waitKey(0);

    destroyAllWindows();
 
}