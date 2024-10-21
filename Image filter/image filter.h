#pragma once
#ifndef imgfilter
#define imgfilter
#include<iostream>
#include<opencv2/opencv.hpp>
using namespace std; 
using namespace cv;

class img_filter {
public:
    void blurr();
    void identity();
    void sharpen();

};
#endif