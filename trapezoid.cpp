#include <iostream>

int main() {
    double base1;
    double base2;
    double height;

    std::cout << "Enter the length of the first base (base1): ";
    std::cin >> base1;

    std::cout << "Enter the length of the second base (base2): ";
    std::cin >> base2;

    std::cout << "Enter the height of the trapezoid: ";
    std::cin >> height;

    double area = (base1 + base2) * height / 2.0; 
    
    std::cout << "The area of the trapezoid is: " << area << std::endl;

    return 0;
}
