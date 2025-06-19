#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;

////////// Resize and Crop //////////

int main() {
    // ...
    std::string path = "Resources/test.png";
    Mat img = imread(path);
    Mat imgResize, imgCrop;

    std::cout << img.size() << std::endl;
    // resize(img, imgResize, Size(640, 480));
    // Можно не отображать изображение в точных пикселях
    // а масштабировать его
    resize(img, imgResize, Size(), 0.5, 0.5);

    // Обрезка изображения
    // Rect создает прямоугольник. Указываем ширину и высоту
    Rect roi(200, 50, 300, 350); // Roi - region on interest
    imgCrop = img(roi);
    imshow("Image", img);
    imshow("Image Resize", imgResize);
    imshow("Image Crop", imgCrop);

    waitKey(10000);
    return 0;
}
