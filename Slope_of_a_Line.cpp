#include <iostream>
#include <iomanip> 
int main() {
    float x1, y1, x2, y2;
    float slope;

    std::cout << "Enter the x-coordinate of the first point (x1): ";
    std::cin >> x1;
    std::cout << "Enter the y-coordinate of the first point (y1): ";
    std::cin >> y1;

    std::cout << "Enter the x-coordinate of the second point (x2): ";
    std::cin >> x2;
    std::cout << "Enter the y-coordinate of the second point (y2): ";
    std::cin >> y2;

    if (x2 - x1 == 0) {
        std::cout << "The line is vertical, and its slope is undefined." << std::endl;
    } else {
        slope = (y2 - y1) / (x2 - x1);
        std::cout << "The slope of the line is: " << std::fixed << std::setprecision(2) << slope << std::endl;
    }

    return 0;
}
