//#include<opencv2/opencv.hpp>
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
////int largestContour(vector<vector<Point>> contours)
////{
////	int index=0;
////		double max_area=contourArea(contours[0]);
////		for (unsigned int j = 1; j < contours.size(); j++)
////		{
////			if (max_area < contourArea(contours[j]))
////			{
////				max_area = contourArea(contours[j]);
////				index = j;
////			}
////		}
////		return index;
////}
//
//int main() {
//	
//	//Mat img = imread("C:/Users/User/MVS/Data/Image_20240928105035759.bmp");
//	//Mat img = imread("C:/Users/User/MVS/Data/Image_20240928105055674.bmp");
//	//Mat img = imread("C:/Users/User/MVS/Data/Image_20240928105113924.bmp");
//	Mat img = imread("C:/Users/User/MVS/Data/Image_20240928105123410.bmp");
//	//Mat img = imread("C:/Users/User/MVS/Data/Image_20240928105004226.bmp");
//	//Mat img = imread("C:/Users/User/MVS/Data/Image_20240928104919496.bmp");
//
//	Mat image;
//	resize(img, image, Size(500, 500),INTER_AREA);
//    imshow("original Image", image);
//
//	Mat img_gray;
//	cvtColor(image, img_gray, COLOR_BGR2GRAY);
//
//	Mat thresh;
//	threshold(img_gray, thresh, 110, 255, THRESH_BINARY);
//	imshow("Binary image", thresh);
//	//waitKey(0);
//	
//	vector<vector<Point>> contours;
//	vector<Vec4i> hierarchy;
//	findContours(thresh, contours, hierarchy, RETR_TREE, CHAIN_APPROX_NONE);
//
//	for (vector<vector<Point> >::iterator it = contours.begin(); it != contours.end(); )
//	{
//		cout << "length of contour " << it->size() << endl;
//		if (it->size() < 200)
//			it = contours.erase(it);
//		else
//			++it;
//	}
//	
//	Mat image_copy = image.clone();
//	drawContours(image_copy, contours, -1, Scalar(255, 220, 0), 2);
//	imshow("contour image", image_copy);
//	waitKey(0);
//
//	cout<<" no of contours " << contours.size()<<endl;
//	
//	/*int largest=largestContour(contours);
//	cout << "Index of largest contour " << largest << endl;
//	cout << " Area of the cashew: " << contourArea(contours[largest]) << endl;*/
//	cout << " Area of the cashew: " << contourArea(contours[0]) <<"px" << endl;
//
//	destroyAllWindows();
//	return 0;
//}