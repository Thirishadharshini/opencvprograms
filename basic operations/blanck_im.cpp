#include"basics operations.h"

void basic_operations:: blank_img()
{
	Mat image = imread("./images/shapes.jpg");
	int type = image.type();
	cout << "type of the image" << type;
	Mat img = Mat(500, 500, CV_8UC3, Scalar(255,200 ,0));
	Mat img1 = Mat(500, 500, CV_8UC1, Scalar(0,200,0));
	Mat img12 = Mat(500, 500, CV_8UC4, Scalar(255, 200,0,255));
	imshow("alpha image", img12);
	imshow("gray scale", img1);
	imshow("Blanck image", img);
	waitKey(0);

}