#include<opencv2/opencv.hpp>
#include "basic operations/basics operations.h"
#include"object processing/obj_processing.h"
#include"task/task.h"
#include"video/video.h"
#include"Image filter/image filter.h"
//#include"blue_images.cpp"

using namespace std;
using namespace cv;

int main()
{
	
	basic_operations b;
    // to create a blank image
	//b.blank_img();
    
    //function for creating annotations 
    //b.annotating_img();
    
    //function for bitwise and operation by creating images
    //b.bitwise_and_op();
    
    //function for creating  blank image 
    //b.blank_img();
    
    // function for diaplay the color spaces of a image
    //b.colour_spaces();
    
    // function for concatenate images('T' shape)
    //b.concatenation();
    
    // function for croping a particular part in a image
    //b.cropping_img();
    
    // function for read,display and write image
    //b.image();
    
    // function for making a image into patches
    //b.img_patch();
    
    // function for resizing image
    //b.img_resize();
    
    // Hello world 
    //b.opencv();
    
    // creating object for class img_filter 
    img_filter i;

    // for creating a identity image
    //i.identity();
    
    // for creating a blurred image
    //i.blurr();
    
    // for creating a sharpened image
    //i.sharpen();

    image_pro p;

    //to find and draw contours
    //b.contours_fn();

    //for detecting edge of a object in a image
   // p.edge_detect();

    //to find difference btw area of obj in org image and (eroded & dilated) image
    //p.morpho_contours();

    //function for erosion and dilation of a image
   // p.morpho_fn();
    
   // annotating images using mouse(GUI interface)
   // p.mouse_call();
   
   // function for rotating images
   // p.rotating_fn();
   
   // creating a trackbar for zoom in and zoom out 
    //p.track_bar();
   
   // for types of thresholding methods
    p.threshold_fn();

    //
    video_fn v;
    //reading and displaying video
    //v.video();

    task_function t;
    t.cashew();
    //t.number();
    //t.remove_txt();
    //t.shape();
    //t.shape_split();


}