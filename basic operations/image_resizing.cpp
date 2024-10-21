#include <iostream>
#include<opencv2/opencv.hpp>
#include"basics operations.h"
using namespace std;
using namespace cv;

void basic_operations::img_resize()
{
	Mat image = imread("./images/Screenshot 2023-11-18 200056.png");
	cout << "original size: " << image.rows << "x" << image.cols;

	//resize function
	Mat resize_d;
	resize(image, resize_d, Size(300, 200), INTER_LINEAR);
	Mat resize_u;
	resize(image, resize_u, Size(700, 800), INTER_LINEAR);

	imshow("original image", image);
	/*waitKey(0)*/;
	/*imshow("resized small image", resize_d);
	imshow("resized large image", resize_u);
	waitKey(0);*/

	//using scaling factor
	Mat scale_d, scale_u;
	resize(image, scale_d, Size(), 0.2, 0.2, INTER_LINEAR);
	resize(image, scale_u, Size(), 1.6, 1.6, INTER_LINEAR);

	/*imshow("scale down image", scale_d);
	imshow("scale up image", scale_u);
	waitKey(9000);*/

	//using different interpolation
	Mat Linear, Area, Nearest,Cubic;
	resize(image, Linear, Size(), 0.5, 0.5, INTER_LINEAR);
	resize(image, Area, Size(), 0.5, 0.5, INTER_AREA);
	resize(image,Nearest, Size(), 0.5, 0.5, INTER_NEAREST);
	resize(image, Cubic, Size(), 1.5, 1.5, INTER_CUBIC);

	// for showing three images use concatenation method
	Mat a, b, c;
	vconcat(Linear, Area, a);
	//vconcat(Nearest, Nearest, b);
	vconcat(a, Nearest, c);
	imshow("interpolation images", c);
	imshow("cubic image", Cubic);
	waitKey(9000);
	
	 
}