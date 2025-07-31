#include <iostream>

int main() {
    int number = 12345;

    while (number > 0) {
        int digit = number % 10; // Get the last digit
        std::cout << digit << " "; // Print the digit
        number /= 10;           // Remove the last digit
    }
    std::cout << std::endl; // Output: 5 4 3 2 1
    return 0;
}