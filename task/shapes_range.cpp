#include"task.h"

void task_function::shape()
{
	Mat image = imread("./images/colored_shapes.jpg");
		
		Mat img;
		resize(image, img, Size(500, 500), INTER_LINEAR);
		//imshow("original image", img);

		Mat hsv,rang;
		cvtColor(img, hsv, COLOR_BGR2HSV);
		imshow("hsv image", hsv);
		inRange(img, Scalar(199, 71, 40), Scalar(264, 80, 46),rang);
		imshow("extracted image", rang);
		waitKey(0);
		
}
