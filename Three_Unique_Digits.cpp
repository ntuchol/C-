#include <iostream>
#include <algorithm> // Required for std::sort

int main() {
    int digit1, digit2, digit3;

    std::cout << "Enter three unique digits:" << std::endl;
    std::cout << "Digit 1: ";
    std::cin >> digit1;
    std::cout << "Digit 2: ";
    std::cin >> digit2;
    std::cout << "Digit 3: ";
    std::cin >> digit3;

    // Check for uniqueness (optional, but good practice for "unique digits")
    if (digit1 == digit2 || digit1 == digit3 || digit2 == digit3) {
        std::cout << "Error: Digits must be unique. Please restart the program." << std::endl;
        return 1; // Indicate an error
    }

    // Using if-else if-else to determine the order
    std::cout << "\nOrdering of the digits (ascending):" << std::endl;

    if (digit1 < digit2 && digit1 < digit3) {
        std::cout << digit1 << std::endl;
        if (digit2 < digit3) {
            std::cout << digit2 << std::endl;
            std::cout << digit3 << std::endl;
        } else {
            std::cout << digit3 << std::endl;
            std::cout << digit2 << std::endl;
        }
    } else if (digit2 < digit1 && digit2 < digit3) {
        std::cout << digit2 << std::endl;
        if (digit1 < digit3) {
            std::cout << digit1 << std::endl;
            std::cout << digit3 << std::endl;
        } else {
            std::cout << digit3 << std::endl;
            std::cout << digit1 << std::endl;
        }
    } else { // digit3 is the smallest
        std::cout << digit3 << std::endl;
        if (digit1 < digit2) {
            std::cout << digit1 << std::endl;
            std::cout << digit2 << std::endl;
        } else {
            std::cout << digit2 << std::endl;
            std::cout << digit1 << std::endl;
        }
    }

    return 0;
}