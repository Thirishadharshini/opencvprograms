#include <opencv2/opencv.hpp>
#include <iostream>
#include"mouse.h"
using namespace std;
using namespace cv;
void image_pro::contours_fn() {
    
    Mat image = imread("./images/flower 2024-09-24.jpg");
    
    Mat img;
    resize(image, img, Size(500, 600));
    imshow("Original Image", img);
    cout << " size of the imge" << img.cols << "x" << img.rows<<endl;

    Mat hsv;
    cvtColor(img, hsv, COLOR_BGR2HSV);

    Mat blue;
    inRange(hsv, Scalar(60,35,140), Scalar(180,255,255), blue);
    imshow("Extracted image", blue);
    //imshow("HSV image",hsv);

    Mat result;
    bitwise_and(img, img, result, blue);
    imshow("bitwise image", result);

    vector<vector<Point>> contours;
    vector<Vec4i> hierarchy;
    findContours(blue, contours, hierarchy, RETR_TREE, CHAIN_APPROX_NONE);
    
    Mat image_copy = result.clone();
    drawContours(image_copy, contours, -1, Scalar(220,0, 0), 2);
    imshow("contours image", image_copy);
    imwrite("./images/shapes2.jpg",image_copy);
    Mat Blank_image= Mat(500,600, CV_8UC3, Scalar(255, 255, 255));
    drawContours(Blank_image, contours, -1, Scalar(220, 0, 0), 2);
    imshow("contours image", Blank_image);
    imwrite("./images/shapesshapes1.jpg", Blank_image);
    waitKey(0);
    
}

