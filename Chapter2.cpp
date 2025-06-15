#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;

int main() {
    std::string path = "Resources/test.png";

	Mat img = imread(path);
    Mat imgGray;

    cvtColor(img, imgGray, COLOR_BGR2GRAY);

    imshow("Image", img);
	imshow("Image Gray", imgGray);
	waitKey(3000);	// Для постоянного показа - 0

    return 0;
}