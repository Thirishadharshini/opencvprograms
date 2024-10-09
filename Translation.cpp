//#include<iostream>
//#include<opencv2/opencv.hpp>
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat rimg = imread("./images/flower 2024-09-24.jpg");
//	int width = rimg.cols;//832
//	int height = rimg.rows;//1280
//	Mat img;
//	resize(rimg, img, Size(400, 600), INTER_AREA);
//	cout << "width:" << width << endl;
//	cout << "height:" << height << endl;
//
//		// get tx and ty values for translation
//	float tx = float(width) / 12;
//	float ty = float(height) / 15;
//	// create the translation matrix using tx and ty
//	float warp_values[] = {1.0, 0.0, tx, 0.0, 1.0, ty };
//	Mat translation_matrix = Mat(2, 3, CV_32F, warp_values);
//
//	// save the resulting image in translated_image matrix
//	Mat translated_image;
//	// apply affine transformation to the original image using the translation matrix
//	warpAffine(img, translated_image, translation_matrix, Size(800,1000));
//
//	imshow("Translated image", translated_image);
//	imshow("Original image", img);
//	waitKey(0);
//
//}