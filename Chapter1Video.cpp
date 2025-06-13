// Часть 1
// Чтение видео
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;

/////////////////  Video  //////////////////////

int main() {

	std::string path = "Resources/test_video.mp4";
    VideoCapture cap(path);
	Mat img;

    while (true) {
        cap.read(img);
        imshow("Video", img);
        waitKey(20);
    }
    return 0;
}
