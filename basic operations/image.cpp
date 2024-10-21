#include <opencv2/opencv.hpp> 
#include <iostream> 
#include"basics operations.h"
//#define PREM -1
using namespace cv;
using namespace std;

void basic_operations::image()
{
	// Read the image file 
	Mat image_c = imread("./images/Screenshot 2023-11-18 200056.png", cv::IMREAD_COLOR);
	//Mat image_g = imread("./images/Screenshot 2023-11-18 200056.png",0);
	//Mat image_u= imread("./images/Screenshot 2023-11-18 200056.png",-1);
	// Check for failure 
	
	// Show our image inside a window. 
	imshow("HTML image colored", image_c);
	/*imshow("HTML image grayscale", image_g);
	imshow("HTML image unchanged", image_u);*/

	// Wait for any keystroke in the window 
	waitKey(0);
	destroyAllWindows();
	std::cout << "Size:" << image_c.size() << std::endl;
	imwrite("./images/opencvimage.jpg", image_c);
	imwrite("./images/opencvimage1.jpeg", image_c);
	imwrite("./images/opencvimage2.png", image_c);
	imwrite("./images/opencvimage3.bmp", image_c);
	
}
