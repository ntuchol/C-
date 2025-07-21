#include <iostream> // For input/output operations
#include <cmath>    // For M_PI or pow() function

// Function to calculate area
double calculateArea(double radius) {
    // Implement area calculation
    return M_PI * radius * radius;
}

// Function to calculate circumference
double calculateCircumference(double radius) {
    // Implement circumference calculation
    return 2 * M_PI * radius;
}

int main() {
    double radius;

    // Get input from user with validation
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    if (radius <= 0) {
        std::cout << "Invalid radius. Please enter a positive value." << std::endl;
        return 1; // Indicate error
    }

    // Call functions to perform calculations
    double area = calculateArea(radius);
    double circumference = calculateCircumference(radius);

    // Display results
    std::cout << "Area of the circle: " << area << std::endl;
    std::cout << "Circumference of the circle: " << circumference << std::endl;

    return 0; // Indicate successful execution
}