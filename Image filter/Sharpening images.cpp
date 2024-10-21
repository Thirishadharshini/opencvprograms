#include"image filter.h"

void img_filter::sharpen()
{

	Mat image = imread("./images/gerbera-1684436_640.jpg");


	Mat sharp_img;
	Mat kernel3 = (Mat_<double>(3, 3) << 0, -1, 0,
		-1, 5, -1,
		0, -1, 0);
	filter2D(image, sharp_img, -1, kernel3);
	imshow("Original", image);
	imshow("Sharpenned", sharp_img);

	Mat edge_img;
	Mat kernel = (Mat_<double>(3, 3) << -1, -1, -1,
		-1, 8, -1,
		-1, -1, -1);
	filter2D(image, edge_img, -1, kernel);
	imshow("edge detected image", edge_img);

	Mat bilateral_filter;
	bilateralFilter(image, bilateral_filter, 200, 75, 75);
	imshow("Bilateral filtering", bilateral_filter);
	waitKey(0);
	
}