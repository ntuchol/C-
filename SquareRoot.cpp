#include <iostream> // For input/output operations
#include <cmath>    // For the sqrt() function

int main() {
    double number = 25.0;
    double squareRoot = std::sqrt(number); // Calculate the square root

    std::cout << "The square root of " << number << " is " << squareRoot << std::endl;

    // Example with an integer type
    int intNumber = 16;
    double intSquareRoot = std::sqrt(static_cast<double>(intNumber)); // Cast to double for sqrt()
    std::cout << "The square root of " << intNumber << " is " << intSquareRoot << std::endl;

    return 0;
}