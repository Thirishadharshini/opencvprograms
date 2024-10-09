//#include<iostream>
//#include<opencv2/opencv.hpp>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat rimg = imread("./images/flower 2024-09-24.jpg");
//	Mat img;
//	resize(rimg, img, Size(400, 600), INTER_AREA);
//	Point2d center((img.cols - 1) / 2.0, (img.rows) - 1 / 2.0);
//	cout << center << endl;
//
//	Mat rot_matrix = getRotationMatrix2D(center, 270, 0.5);
//	Mat rot_img;
//	warpAffine(img, rot_img, rot_matrix, Size(600, 700), 0, 1,0);
//	imshow("rotated images", rot_img);
//	waitKey(0);
//	return 0;
//}