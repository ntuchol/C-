#include <windows.h> 

    HDC hdc = GetDC(hwnd);
    RECT rect = {10, 10, 100, 50}; 
    HBRUSH hBrush = CreateSolidBrush(RGB(255, 0, 0)); 

    FillRect(hdc, &rect, hBrush); 

    DeleteObject(hBrush); 
    ReleaseDC(hwnd, hdc); 

    #include <opencv2/imgproc.hpp>
    #include <opencv2/highgui/highgui.hpp>

    cv::Mat image(200, 300, CV_8UC3, cv::Scalar(255, 255, 255)); 
    cv::Point p1(50, 50);
    cv::Point p2(150, 100);
    cv::Scalar color(0, 0, 255); 
    int thickness = -1; 

    cv::rectangle(image, p1, p2, color, thickness);
    cv::imshow("Filled Rectangle", image);
    cv::waitKey(0);
    
    #include <iostream>

void drawFilledRectangle(int width, int height, char symbol) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            std::cout << symbol;
        }
        std::cout << std::endl;
    }
}

int main() {
    drawFilledRectangle(10, 5, '*'); 
    return 0;
}
