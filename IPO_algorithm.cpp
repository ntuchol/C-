#include <iostream>

double getRadius() {
    double radius;
    std::cout << "Enter the radius of the circle: "; 
    std::cin >> radius; 
    return radius;
}

double calculateArea(double radius) {
    const double PI = 3.14159;
    return PI * radius * radius;
}

void displayArea(double area) {
    std::cout << "The area of the circle is: " << area << std::endl; 
}

int main() {
    double radius = getRadius();
    double area = calculateArea(radius);
    displayArea(area);
    return 0;
}
