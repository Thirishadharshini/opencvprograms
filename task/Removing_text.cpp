#include <opencv2/opencv.hpp>
#include <iostream>
#include"task.h"
void task_function::remove_txt() {
    // Load the image with text
    cv::Mat img = cv::imread("./images/shapes.jpg");

   
    // Convert to grayscale
    cv::Mat gray;
    cv::cvtColor(img, gray, cv::COLOR_BGR2GRAY);

    // Apply binary thresholding to create a mask
    cv::Mat mask;
    cv::threshold(gray, mask, 200, 255, cv::THRESH_BINARY_INV);

    // Dilate the mask to cover the text more broadly
    cv::Mat kernel = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(3, 3));
    cv::dilate(mask, mask, kernel);

    // Inpaint the image
    cv::Mat result;
    cv::inpaint(img, mask, result, 3, cv::INPAINT_NS);

    // Display the results
    cv::imshow("Original Image", img);
    cv::imshow("Mask", mask);
    cv::imshow("Inpainted Image", result);
    cv::waitKey(0);

    // Save the result if needed
    cv::imwrite("image_without_text.jpg", result);
}
