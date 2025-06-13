// Часть 1
// Чтение изображения, видео и потока с камеры
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;

/////////////////  Images  //////////////////////

int main() {

	std::string path = "Resources/test.png";
	Mat img = imread(path);
	imshow("Image", img);
	waitKey(3000);	// Для постоянного показа - 0

    return 0;
}
