#include <iostream>

// Input
double getRadius() {
    double radius;
    std::cout << "Enter the radius of the circle: "; // Output to console
    std::cin >> radius; // Input from user
    return radius;
}

// Process
double calculateArea(double radius) {
    const double PI = 3.14159;
    return PI * radius * radius;
}

// Output
void displayArea(double area) {
    std::cout << "The area of the circle is: " << area << std::endl; // Output to console
}

int main() {
    double radius = getRadius();
    double area = calculateArea(radius);
    displayArea(area);
    return 0;
}