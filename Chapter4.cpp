#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;

////////// Draw Shapes and Text //////////

int main() {
    // ...
    Mat img(512, 512, CV_8UC3, Scalar(255, 0, 0));

    imshow("Image", img);
    waitKey(0); // количество милисекунд

    return 0;
}
