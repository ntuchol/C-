#include <iostream> 
int main() {
    double length, width, height;

    std::cout << "Enter the length of the rectangular solid: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangular solid: ";
    std::cin >> width;

    std::cout << "Enter the height of the rectangular solid: ";
    std::cin >> height;

    double volume = length * width * height;

    std::cout << "The volume of the rectangular solid is: " << volume << std::endl;

    return 0; 
}
