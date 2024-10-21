#include"basics operations.h"

void basic_operations::img_patch()
{
    Mat img1 = imread("./images/flower 2024-09-24.jpg");
    Mat img;
    resize(img1, img, Size(521, 686), INTER_AREA);
    Mat image_copy = img.clone();
    int imgheight = img.rows;
    int imgwidth = img.cols;
    cout << imgheight << " " << imgwidth << endl;
    int M = 76;
    int N = 104;

    int x1 = 0;
    int y1 = 0;
    for (int y = 0; y < imgheight; y = y + M)
    {
        for (int x = 0; x < imgwidth; x = x + N)
        {
            if ((imgheight - y) < M || (imgwidth - x) < N)
            {
                break;
            }
            y1 = y + M;
            x1 = x + N;
            string a = to_string(x);
            string b = to_string(y);

            if (x1 >= imgwidth && y1 >= imgheight)
            {
                x = imgwidth - 1;
                y = imgheight - 1;
                x1 = imgwidth - 1;
                y1 = imgheight - 1;

                // crop the patches of size MxN
                Mat tiles = image_copy(Range(y, imgheight), Range(x, imgwidth));
                //save each patches into file directory
                imwrite("C:/Users/User/Downloads/flower-" + a + '_' + b + ".jpg", tiles);
                rectangle(img, Point(x, y), Point(x1, y1), Scalar(255, 255, 255), 5);
            }
            else if (y1 >= imgheight)
            {
                y = imgheight - 1;
                y1 = imgheight - 1;

                // crop the patches of size MxN
                Mat tiles = image_copy(Range(y, imgheight), Range(x, x + N));
                //save each patches into file directory
                imwrite("C:/Users/User/Downloads/flower-" + a + '_' + b + ".jpg", tiles);
                rectangle(img, Point(x, y), Point(x1, y1), Scalar(255, 255, 255), 5);
            }
            else if (x1 >= imgwidth)
            {
                x = imgwidth - 1;
                x1 = imgwidth - 1;

                // crop the patches of size MxN
                Mat tiles = image_copy(Range(y, y + M), Range(x, imgwidth));
                //save each patches into file directory
                imwrite("C:/Users/User/Downloads/flower-" + a + '_' + b + ".jpg", tiles);
                rectangle(img, Point(x, y), Point(x1, y1), Scalar(255, 255, 255), 5);
            }
            else
            {
                // crop the patches of size MxN
                Mat tiles = image_copy(Range(y, y + M), Range(x, x + N));
                //save each patches into file directory
                imwrite("C:/Users/User/Downloads/flower-" + a + '_' + b + ".jpg", tiles);
                rectangle(img, Point(x, y), Point(x1, y1), Scalar(255, 255, 255), 5);
            }
        }
    }
    imshow("Patched Image", img);
    imwrite("patched.jpg", img);
    waitKey();
    destroyAllWindows();
}