#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;

////////// Draw Shapes and Text //////////

int main() {
    // ...
    Mat img(512, 512, CV_8UC3, Scalar(255, 255, 255));

    /* Для рисования круга передаем изображение, на котором будем рисовать, центр круга, размер, цвет. Далее можно (не обязательно) указать толщину линии. Чтобы заполнить изображение, вместо толщины пришем FILLED */
    circle(img, Point(256, 256), 155, Scalar(0, 69, 255), FILLED);
    /* Чтобы нарисовать прямоугольник, можно передать в качестве параметра Rect roi(...), или указать точки (верхнюю левую и правую нижнюю) */
    rectangle(img, Point(130, 226), Point(382, 286), Scalar(255, 255, 255), FILLED);
    // Рисуем линию
    line(img, Point(130, 296), Point(382, 296), Scalar(255, 255, 255), 2);
    /* Для текста определяем начальную точку, шрифт и масштаб, цвет и толщину */
    putText(img, "Vasilij is cool!", Point(137, 262), FONT_HERSHEY_DUPLEX, 1, Scalar(0, 69, 255), 2);

    imshow("Image", img);
    waitKey(3000); // количество милисекунд

    return 0;
}
