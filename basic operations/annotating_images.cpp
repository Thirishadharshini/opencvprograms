#include<iostream>
#include<opencv2/opencv.hpp>
#include"basics operations.h"
using namespace std;
using namespace cv;

void basic_operations::annotating_img()
{
	Mat img = imread("./images/flower 2024-09-24.jpg");

	Mat img_line = img.clone();
	Point pointA (600, 750);
	Point pointB (450, 600);

	////line
	//line(img_line, pointA, pointB, Scalar(255, 200, 0), 2);
	//imshow("lined img", img_line);

	//circle
	/*Mat img_cir = img.clone();
	Point center_cir(500, 700);
	circle(img_cir, center_cir, 100, Scalar(255, 200, 0),5);
	imshow("circled image", img_cir);*/

	//filled circle
	Mat Filled_circle_image = img.clone();
	Point circle_center(500, 700);
	int radius = 100;
	circle(Filled_circle_image, circle_center, radius, Scalar(255, 200, 0),-1);
	imshow("Circle on Image", Filled_circle_image);
	
	//rectangle
	Mat rect_image = img.clone();
	Point start_point(600, 750);
	Point end_point(450, 600);
	rectangle(rect_image, start_point, end_point, Scalar(255, 255, 0), -1);
	imshow("Rectangle on Image", rect_image);

	//eclipse
	Mat imageEllipse = img.clone();
	Point ellipse_center(500, 725);
	Point axis1(100,50);
	Point axis2(125, 50);
	ellipse(imageEllipse, ellipse_center, axis1, 0, 0, 360, Scalar(255, 0, 0), 3, 8, 0);
	ellipse(imageEllipse, ellipse_center, axis2, 90, 0, 360, Scalar(0, 0, 255), 3, 8, 0);
	imshow("Ellipses on Image", imageEllipse);


	//add text
	Mat imageText = img.clone();
	
	putText(imageText, "I am Happy!", Point(500, 700), FONT_HERSHEY_COMPLEX, 1.5, Scalar(250, 225, 100),2);
	imshow("Text on Image", imageText);
	
	waitKey(0);


}