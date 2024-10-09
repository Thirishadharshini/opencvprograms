//Mat image;
//resize(img, image, Size(500, 500), INTER_AREA);
//imshow("original Image", image);
//
///*Mat hsv;
//	cvtColor(image, hsv, COLOR_BGR2HSV);
//	imshow("hsv image", hsv);
//	waitKey(0);
//*/
//Mat blue;
//inRange(image, Scalar(33, 33, 97), Scalar(33, 33, 100), blue);
//imshow("Extracted image", blue);
////imshow("HSV image",hsv);
//
//Mat result;
//bitwise_and(img, img, result, blue);
//imshow("bitwise image", result);

iterating_directory
//#include <opencv2/opencv.hpp>
//
//#include <dirent.h>
//using namespace std;
//using namespace cv;
//int main() {
//	
//    DIR* dir = opendir("C:\\office works\\Files_RWF_White\\white_light\\bad\\");
//    struct dirent* ent;
//    while ((ent = readdir(dir)) != NULL) {
//        if (ent->d_type == DT_REG && strcmp(ent->d_name + strlen(ent->d_name) - 4, ".jpg") == 0) {
//            string filePath = string("C:\\office works\\Files_RWF_White\\white_light\\bad\\") + ent->d_name;
//            Mat image = cv::imread(filePath);
//            
//			//Mat image = imread("C:\\office works\\Files_RWF_White\\white_light\\bad\\02_58_21.jpg");
//			imshow("original image", image);
//
//			
//			Mat kernel = (Mat_<double>(3, 3) << 0, -1, 0,
//				-1, 5, -1,
//				0, -1, 0);
//
//			Mat kernel1 = (Mat_<double>(3, 3) << 0, -1, 0,
//				                               -1, 4.5, -1,
//				                                0, -1, 0);
//
//			//Sharpenning of original image
//			Mat sharpen_original, sharp;
//			filter2D(image, sharpen_original, -1, kernel);
//			imshow("Sharpenned", sharpen_original);
//
//			filter2D(image, sharp, -1, kernel1);
//			imshow("Sharpenned kernel", sharp);
//			//imwrite("C:\\office works\\Files_RWF_White\\white_light\\sharpened new kernel\\" +(ent->d_name+to_string(6)+".jpg"), sharp);
//
////			imwrite(string("C:/office works\Files_RWF_White\\white_light\\sharpened new kernel\\")+ent->d_name+"_6", sharp);
//
//			
//           
//            waitKey(0);
//        }
//    }
//    closedir(dir);
//    return 0;
//}
//
