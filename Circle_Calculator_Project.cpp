#include <iostream> 
#include <cmath>    

double calculateArea(double radius) {
    return M_PI * radius * radius;
}

double calculateCircumference(double radius) {
    return 2 * M_PI * radius;
}

int main() {
    double radius;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    if (radius <= 0) {
        std::cout << "Invalid radius. Please enter a positive value." << std::endl;
        return 1; 
    }

    double area = calculateArea(radius);
    double circumference = calculateCircumference(radius);

    std::cout << "Area of the circle: " << area << std::endl;
    std::cout << "Circumference of the circle: " << circumference << std::endl;

    return 0; 
}
