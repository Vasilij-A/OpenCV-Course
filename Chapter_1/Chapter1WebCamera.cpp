// Часть 1
// Чтение видео
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;

/////////////////  Web Camera  //////////////////////

int main() {

	// Вместо пути к видео (набору картинок)
    // для рабты с камерой указываем её номер
    VideoCapture cap(2);
	Mat img;

    while (true) {
        cap.read(img);
        imshow("Camera", img);
        waitKey(1); // Чтобы не замедлять поток поставим 1
    }
    return 0;
}
