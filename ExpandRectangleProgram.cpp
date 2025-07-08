#include <iostream>

// Define a simple Point structure
struct Point {
    double x;
    double y;
};

// Define a Rectangle class
class Rectangle {
public:
    Point topLeft;
    double width;
    double height;

    // Constructor
    Rectangle(double x, double y, double w, double h) : topLeft({x, y}), width(w), height(h) {}

    // Method to expand the rectangle from its center
    void expandFromCenter(double amount) {
        // Adjust top-left corner to keep center fixed
        topLeft.x -= amount / 2.0;
        topLeft.y -= amount / 2.0;

        // Increase width and height
        width += amount;
        height += amount;
    }

    // Method to print rectangle details
    void printDetails() const {
        std::cout << "Rectangle: Top-Left(" << topLeft.x << ", " << topLeft.y
                  << "), Width: " << width << ", Height: " << height << std::endl;
    }
};

int main() {
    // Create a rectangle
    Rectangle rect(10.0, 20.0, 50.0, 30.0);
    std::cout << "Original ";
    rect.printDetails();

    // Expand the rectangle by 10 units from its center
    rect.expandFromCenter(10.0);
    std::cout << "Expanded ";
    rect.printDetails();

    // Expand again by 5 units
    rect.expandFromCenter(5.0);
    std::cout << "Further Expanded ";
    rect.printDetails();

    return 0;
}