#pragma once
#ifndef IMAGE_PROCESSING
#define IMAGE_PROCESSING
class image_pro {
public:
   // void blob_detection();
    void contours_fn();
    void edge_detect();
    void morpho_contours();
    void morpho_fn();
    void threshold_fn();
    void mouse_call();
    void track_bar();
    void translation();
    void rotating_fn();
};
#endif