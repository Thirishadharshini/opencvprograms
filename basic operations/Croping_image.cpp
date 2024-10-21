#include"basics operations.h"

void basic_operations::cropping_img()
{
	Mat img = imread("./images/flower 2024-09-24.jpg");
	cout << "original image width:" <<img.size().width << endl;
	cout << "original image height:" << img.size().height << endl;
	cout << "channels" << img.channels() << endl;

	Mat crop = img(Range(600, 750), Range(450,600));

	imshow("original image", img);
	imshow("croppped image", crop);
	waitKey(20000);




}
 