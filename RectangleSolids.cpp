#include <iostream> // Required for input/output operations

int main() {
    // Declare variables to store dimensions
    double length, width, height;

    // Prompt the user to enter the dimensions
    std::cout << "Enter the length of the rectangular solid: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangular solid: ";
    std::cin >> width;

    std::cout << "Enter the height of the rectangular solid: ";
    std::cin >> height;

    // Calculate the volume
    double volume = length * width * height;

    // Display the calculated volume
    std::cout << "The volume of the rectangular solid is: " << volume << std::endl;

    return 0; // Indicate successful program execution
}