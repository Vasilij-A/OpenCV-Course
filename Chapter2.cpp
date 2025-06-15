#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;

////////// Basic Functions //////////

int main() {
    std::string path = "Resources/test.png";

	Mat img = imread(path);
    Mat imgGray, imgBlur;

    cvtColor(img, imgGray, COLOR_BGR2GRAY);
    GaussianBlur(img, imgBlur, Size(7, 7), 5, 0);

    imshow("Image", img);
	imshow("Image Gray", imgGray);
    imshow("Image Blur", imgBlur);

	waitKey(5000);	// Для постоянного показа - 0

    return 0;
}