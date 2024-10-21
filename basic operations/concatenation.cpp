#include<iostream>
#include<opencv2/opencv.hpp>
#include"basics operations.h"
using namespace std;
using namespace cv;
void basic_operations::concatenation()
{
	
	Mat img = imread("./images/Screenshot 2023-11-18 200056.png");
	//Mat img1 = imread("./images/Screenshot 2023-11-18 200056.png");
	//Mat img2 = imread("./images/Screenshot 2023-11-18 200056.png");
	Mat rimg;
		resize(img,rimg,Size(200,200 ),INTER_AREA);
	/*Mat a, b;
	hconcat(rimg,rimg, a);
	vconcat(a, rimg, b);
	imshow("Concatenation of images", b);
	waitKey(0);
	return 0;*/


		int canva_height = rimg.rows+rimg.rows+40;
		int canva_width = (rimg.cols * 2)+40;
		cout << canva_height << "x" << canva_width;

		Mat canvas(canva_height, canva_width, rimg.type(), Scalar(255,255,255));

		rimg.copyTo(canvas(Rect(20, 20, rimg.cols,rimg.rows)));            // Top left
		rimg.copyTo(canvas(Rect(rimg.cols, 20, rimg.cols, rimg.rows)));    // Top right

		// Center the third image below them
		int x = (canva_width-20 - rimg.cols) / 2;
		rimg.copyTo(canvas(Rect(x, rimg.rows, rimg.cols, rimg.rows)));

		imshow("t shape image", canvas);
		waitKey(0);
		

}