#include <iostream>
#include <limits> // Required for std::numeric_limits

int get_integer_input() {
    int value;
    while (true) {
        std::cout << "Enter an integer: ";
        if (std::cin >> value) { // Attempt to read the integer
            return value; // Input is valid, return the value
        } else {
            std::cout << "Invalid input. Please enter a valid integer." << std::endl;
            std::cin.clear(); // Clear the error state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
        }
    }
}

int main() {
    int number = get_integer_input();
    std::cout << "You entered: " << number << std::endl;
    return 0;
}