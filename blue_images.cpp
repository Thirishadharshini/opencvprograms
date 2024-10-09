//#include<iostream>
//#include<opencv2/opencv.hpp>
//#include<vector>
//using namespace std;
//using namespace cv;
//int main()
//{
//	Mat image = imread("./images/colored_shapes.jpg");
//	
//	Mat img;
//	resize(image, img, Size(500, 500), INTER_LINEAR);
//	//imshow("original image", img);
//
//	Mat gray;
//	cvtColor(img, gray, COLOR_BGR2GRAY);
//	//imshow("gray image", gray);
//
//	// for extracting shapes upto hexagon
//	Mat thresh;
//	//int max_value = 144;
//	threshold(gray, thresh, 135,255, THRESH_BINARY_INV);
//	//imshow("Binary image", thresh);
//
//	// for extracting shapes before hexagon
//	Mat thresh1;
//	threshold(gray, thresh1, 128, 255, THRESH_BINARY);
//	//imshow("Binary image1", thresh1);
//
//	// combine both to get commom shape(hexagon)
//	Mat bitwise;
//	bitwise_and(thresh, thresh1, bitwise);
//	//imshow("bitwise image", bitwise);
//
//	//for extracting rectangle
//	Mat thresh2;
//	threshold(gray, thresh2, 60, 255, THRESH_BINARY_INV);
//	//imshow("Binary image2", thresh2);
//
//	// combine hexagon and rectangle
//	Mat bitwise1;
//	bitwise_xor(bitwise, thresh2, bitwise1);
//	imshow("bitwise image1", bitwise1);
//
//	// for extracting trapezoid
//	Mat thresh_trap;
//	threshold(gray, thresh_trap, 120, 255, THRESH_BINARY_INV);
//	imshow("Binary image trap", thresh_trap);
//
//	// for extracting shapes before trapezoid
//	Mat thresh1_trap;
//	threshold(gray, thresh1_trap, 109, 255, THRESH_BINARY);
//	imshow("Binary image1 trap", thresh1_trap);
//
//	// combine both to get commom shape(trapezoid)
//	Mat bitwise_trap;
//	bitwise_and(thresh_trap, thresh1_trap, bitwise_trap);
//	imshow("bitwise image trap", bitwise_trap);
//
//	// combine hexagon and rectangle and trapezoid
//	Mat bitwise1_trap;
//	bitwise_xor(bitwise1, bitwise_trap, bitwise1_trap);
//	imshow("bitwise image1 trap", bitwise1_trap);
//
//	/*vector<vector<Point>> contours;
//	vector<Vec4i> hierarchy;
//    findContours(thresh, contours, hierarchy, RETR_TREE, CHAIN_APPROX_SIMPLE);
//
//	Mat image_copy = img.clone();
//	drawContours(image_copy, contours, -1, Scalar(0,255, 0), 2);
//	imshow("contours image", image_copy);*/
//
// //ZDsg
//	/*Mat image_copy3 = img.clone();
//	for (int i = 0; i < contours.size(); i = i + 1) {
//		for (int j = 0; j < contours[i].size(); j = j + 1) {
//			circle(image_copy3, (contours[i][0], contours[i][1]),2, Scalar(0, 255, 0), 2);
//		}
//	}
//	imshow("CHAIN_APPROX_SIMPLE Point only", image_copy3);*/
//	/*for (vector<vector<Point> >::iterator it = contours.begin(); it != contours.end(); )
//			{
//				cout << "length of contour " << it->size() << endl;
//				if (it->size()!=6)
//					it = contours.erase(it);
//				else
//					++it;
//			}*/
//	
//	//Mat image_copy = img.clone();
// //   drawContours(image_copy, contours, -1, Scalar(0,255, 0), 2);
// //   imshow("contours image", image_copy);
//
//	waitKey(0);
//	return 0;
//}