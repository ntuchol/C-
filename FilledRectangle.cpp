#include <windows.h> // Include Windows.h for GDI functions

    // ... inside a function where you have a device context (HDC) and a rectangle (RECT)
    HDC hdc = GetDC(hwnd); // Get device context for a window handle (hwnd)
    RECT rect = {10, 10, 100, 50}; // Define rectangle coordinates (left, top, right, bottom)
    HBRUSH hBrush = CreateSolidBrush(RGB(255, 0, 0)); // Create a solid red brush

    FillRect(hdc, &rect, hBrush); // Fill the rectangle

    DeleteObject(hBrush); // Clean up the brush
    ReleaseDC(hwnd, hdc); // Release the device context
    
    #include <opencv2/imgproc.hpp>
    #include <opencv2/highgui/highgui.hpp>

    // ...
    cv::Mat image(200, 300, CV_8UC3, cv::Scalar(255, 255, 255)); // Create a white image
    cv::Point p1(50, 50);
    cv::Point p2(150, 100);
    cv::Scalar color(0, 0, 255); // Blue color (BGR format)
    int thickness = -1; // Fill the rectangle

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
    drawFilledRectangle(10, 5, '*'); // Draw a 10x5 rectangle filled with '*'
    return 0;
}