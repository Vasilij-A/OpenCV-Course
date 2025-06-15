// Детектор Кенни один из самых популрных для определения краев.
// Перед применением детектора обычно используют Гауссово размытие, 
// чтобы немного размыть изображение для удаления шума. 

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;

////////// Basic Functions //////////

int main() {
    std::string path = "Resources/test.png";

	Mat img = imread(path, IMREAD_GRAYSCALE);
    Mat imgBlur, imgCanny, imgDil, imgErode;

    GaussianBlur(img, imgBlur, Size(3, 3), 3, 0);
    Canny(imgBlur, imgCanny, 25, 75);

    Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
    // нужно использовать только нечетные числа, напр: 3, 3; 5, 5; 7, 7...
    dilate(imgCanny, imgDil, kernel);

    // Затем можно использовать разсытие )
    // Используем то же ядро
    erode(imgDil, imgErode, kernel);

    imshow("Image", img);
    imshow("Image Canny", imgCanny);
    imshow("Image Dilation", imgDil);
    imshow("Image Erode", imgErode);

	waitKey(5000);	// Для постоянного показа - 0

    return 0;
}