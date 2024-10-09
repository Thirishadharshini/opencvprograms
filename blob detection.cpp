//#include<iostream>
//#include<opencv2/opencv.hpp>
//
//using namespace std;
//using namespace cv;
//int main()
//{
//	Mat img = imread("C:/Users/User/Downloads/bubbles-1853237_640.jpg", IMREAD_GRAYSCALE);
//
//	SimpleBlobDetector::Params params;
//
//	params.minThreshold = 10;
//	params.maxThreshold = 200;
//
//	params.filterByArea = true;
//	params.minArea = 1500;
//
//	//params.filterByCircularity = true;
//	//params.minCircularity = 0.1;
//
//	//params.filterByConvexity = true;
//	//params.minConvexity = 0.87;
//
//	//// Filter by Inertia
//	//params.filterByInertia = true;
//	//params.minInertiaRatio = 0.01;
//
//    // Set up detector with params
//	Ptr<SimpleBlobDetector> detector = SimpleBlobDetector::create(params);
//
//	// SimpleBlobDetector::create creates a smart pointer. 
//	// So you need to use arrow ( ->) instead of dot ( . )
//	// detector->detect( im, keypoints);
//	std::vector<KeyPoint> keypoints;
//	detector->detect(img, keypoints);
//
//	Mat im_with_keypoints;
//	drawKeypoints(img, keypoints, im_with_keypoints, Scalar(0, 255, 0), DrawMatchesFlags::DRAW_RICH_KEYPOINTS);
//
//	// Show blobs
//	imshow("Keypoints", im_with_keypoints);
//	imshow(" original image", img);
//	waitKey(0);
//	return 0;
//}