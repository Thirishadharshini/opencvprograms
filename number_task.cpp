//#include<iostream>
//#include<opencv2/opencv.hpp>
//using namespace std;
//using namespace cv;
//
//int main()
//	{
//		Mat image = imread("C:\\office works\\Files_RWF_White\\white_light\\bad\\02_58_21.jpg");
//		imshow("original image", image);
//
//		Mat contrast_increased = image * 1;
//		//imshow("contrast increased image", contrast_increased);
//		//imwrite("C:\\Files_RWF_White\\white_light\\contrast increased bad\\23_54_38_1.jpg", contrast_increased);
//
//		Mat contrast_decreased= image * 0.8;
//		//imshow("contrast decreased image", contrast_decreased);
//		//imwrite("C:\\Files_RWF_White\\white_light\\contrast decreased bad\\23_54_38_2.jpg", contrast_decreased);
//
//		// define kernel matrix for sharpening
//		Mat kernel = (Mat_<double>(3, 3) << 0, -1, 0,
//			                            	-1, 5, -1,
//				                            0, -1, 0);
//
//		Mat kernel1 = (Mat_<double>(3,3) << 0, -1, 0,
//			                              -1, 4.5, -1,
//		                                	0, -1, 0);
//	    //Sharpenning of original image
//		Mat sharpen_original, sharp;
//		filter2D(image, sharpen_original, -1, kernel);
//		filter2D(image, sharp, -1, kernel1);
//		imshow("Sharpenned kernel", sharp);
//
//		imshow("Sharpenned", sharpen_original);
//		//imwrite("C:\\Files_RWF_White\\white_light\\sharpenned bad\\23_54_38_5.jpg", sharpen_original);
//
//		//Sharpenning of contrast increased image
//		Mat sharpen_contast_increased;
//		filter2D(contrast_increased, sharpen_contast_increased, -1, kernel);
//        //imshow("Sharpenned contrast", sharpen_contast_increased);
//		//imwrite("C:\\Files_RWF_White\\white_light\\sharp_cont_incre_bad\\23_54_38_3.jpg", sharpen_contast_increased);
//
//		//Sharpenning of contrast decreased image
//		Mat  sharp_contrast_decreased;
//		filter2D(contrast_decreased, sharp_contrast_decreased, -1, kernel);
//		//imshow("Sharpenned contrast decreased", sharp_contrast_decreased);
//		//imwrite("C:\\Files_RWF_White\\white_light\\sharp_cont_decre_bad\\23_54_38_4.jpg", sharp_contrast_decreased);
//		waitKey(0);
//		return 0;
//	}
