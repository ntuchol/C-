#include <iostream>

int main() {
    double length, width, perimeter;

    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    perimeter = 2 * (length + width);

    std::cout << "The perimeter of the rectangle is: " << perimeter << std::endl;

    return 0;
}