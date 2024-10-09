//#include<iostream>
//#include<opencv2/opencv.hpp>
//
//using namespace std;
//using namespace cv;
//int main()
//{
//	Mat img = imread("C:/Users/User/Downloads/bubbles-1853237_640.jpg", IMREAD_GRAYSCALE);
//	SimpleBlobDetector::Params params;
//	params.minThreshold = 10;
//	params.maxThreshold = 200;
//
//	params.filterByArea = true;
//	params.minArea = 1500;
//
//	params.filterByCircularity = true;
//	params.minCircularity = 0.1;
//
//	params.filterByConvexity = true;
//	params.minConvexity = 0.87;
//
//	params.filterByInertia = true;
//	params.minInertiaRatio = 0.01;
//
//	Ptr<SimpleBlobDetector> detector = SimpleBlobDetector::create(params);
//
//	std::vector<KeyPoint> keypoints;
//	detector->detect(img, keypoints);
//
//	Mat im_with_keypoints;
//	drawKeypoints(img, keypoints, im_with_keypoints, Scalar(0, 255, 255), DrawMatchesFlags::DRAW_RICH_KEYPOINTS);
//	imshow("Keypoints", im_with_keypoints);
//	imshow(" original image", img);
//	waitKey(0);
//	return 0;
//}
