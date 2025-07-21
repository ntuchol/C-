#include <iostream>

int main() {
    // Declare variables for the two bases and the height
    double base1;
    double base2;
    double height;

    // Prompt the user to enter the values
    std::cout << "Enter the length of the first base (base1): ";
    std::cin >> base1;

    std::cout << "Enter the length of the second base (base2): ";
    std::cin >> base2;

    std::cout << "Enter the height of the trapezoid: ";
    std::cin >> height;

    // Calculate the area using the formula
    double area = (base1 + base2) * height / 2.0; // Use 2.0 for floating-point division

    // Display the calculated area
    std::cout << "The area of the trapezoid is: " << area << std::endl;

    return 0;
}