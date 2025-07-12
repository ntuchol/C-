#include <iostream>

int main() {
    int numbers[5]; // Declare an integer array of size 5

    std::cout << "Enter 5 integer numbers:" << std::endl;

    // Loop to take input for each element
    for (int i = 0; i < 5; ++i) {
        std::cout << "Enter number " << i + 1 << ": ";
        std::cin >> numbers[i]; // Take input for the element at index i
    }

    std::cout << "The numbers entered are: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

#include <iostream>
#include <string> // For std::string and std::getline

int main() {
    char name_char_array[50]; // Character array
    std::string name_string;  // std::string object

    std::cout << "Enter your first name (char array): ";
    std::cin >> name_char_array; // Reads until whitespace

    std::cin.ignore(); // Clear the buffer after previous cin operation

    std::cout << "Enter your full name (std::string): ";
    std::getline(std::cin, name_string); // Reads entire line

    std::cout << "First name: " << name_char_array << std::endl;
    std::cout << "Full name: " << name_string << std::endl;

    return 0;
}