//#include<iostream>
//#include<opencv2/opencv.hpp>
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat img = imread("C:\\Users\\User\\OneDrive\\Documents\\colored_shapes.jpg", 1);
//
//	Mat image;
//	resize(img, image, Size(500, 500), INTER_LINEAR);
//   // imshow("original image", image);
//	Mat Bands[3], merged;
//	split(image, Bands);
//	vector<Mat> channels = { Bands[0],Bands[1],Bands[2] };
//	merge(channels, merged);
//	//imshow("red", Bands[2]);
//	//imshow("blue", Bands[0]);
//	//imshow("green", Bands[1]);
//	//imshow("merged", merged);
//
//	Mat thresh_r;
//	threshold(Bands[2], thresh_r, 150, 255, THRESH_BINARY_INV);
//	imshow("Binary image of red", thresh_r);
//
//	/*Mat thresh_b;
//	threshold(Bands[0], thresh_b, 130, 255, THRESH_BINARY_INV);
//	imshow("Binary image of blue", thresh_b);*/
//
//	Mat thresh_g;
//	threshold(Bands[1], thresh_g, 120, 255, THRESH_BINARY_INV);
//	imshow("Binary image of green", thresh_g);
//
//	Mat bitwise;
//	bitwise_and(thresh_r,thresh_g,bitwise);
//	imshow("Rectangle and trapezoid image", bitwise);
//
//	Mat thresh_hex;
//	threshold(Bands[2], thresh_hex, 25, 255, THRESH_BINARY_INV);
//	imshow("hexagon", thresh_hex);
//
//	Mat thresh_rect, thresh_rect1;
//	threshold(Bands[1], thresh_rect, 50, 255, THRESH_BINARY);
//	threshold(Bands[1], thresh_rect1, 50, 255, THRESH_BINARY_INV);
//	imshow(" rectangle", thresh_rect1);
//	
//	Mat bitwise_trap;
//	bitwise_and(bitwise, thresh_rect1, bitwise_trap);
//	imshow("trapezoid", bitwise_trap);
//	Mat bitwise_final;
//	bitwise_or(bitwise, thresh_hex, bitwise_final);
//	imshow("final image", bitwise_final);
//
//	Mat three_ch_img;
//	cvtColor(bitwise_final, three_ch_img, COLOR_GRAY2BGR);
//	imshow("three channel img", three_ch_img);
//	cout << three_ch_img;
//	Mat and_;
//	bitwise_and(three_ch_img, image, and_);
//	imshow("colored hexagon", and_);
//	
//
//
//	
//	waitKey(0);
//	return 0;
//}