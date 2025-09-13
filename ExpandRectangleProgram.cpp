#include <iostream>

struct Point {
    double x;
    double y;
};
class Rectangle {
public:
    Point topLeft;
    double width;
    double height;

    Rectangle(double x, double y, double w, double h) : topLeft({x, y}), width(w), height(h) {}

    void expandFromCenter(double amount) {
        topLeft.x -= amount / 2.0;
        topLeft.y -= amount / 2.0;

        width += amount;
        height += amount;
    }

    void printDetails() const {
        std::cout << "Rectangle: Top-Left(" << topLeft.x << ", " << topLeft.y
                  << "), Width: " << width << ", Height: " << height << std::endl;
    }
};

int main() {
    Rectangle rect(10.0, 20.0, 50.0, 30.0);
    std::cout << "Original ";
    rect.printDetails();

    rect.expandFromCenter(10.0);
    std::cout << "Expanded ";
    rect.printDetails();

    rect.expandFromCenter(5.0);
    std::cout << "Further Expanded ";
    rect.printDetails();

    return 0;
}
