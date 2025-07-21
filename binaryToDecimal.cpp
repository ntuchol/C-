#include <iostream>
#include <cmath> // For pow function, though bit shifting is often preferred for performance

int binaryToDecimal(long long n) {
    int decimalValue = 0;
    int i = 0; // Represents the power of 2 (0, 1, 2, ...)
    int remainder;

    while (n != 0) {
        remainder = n % 10; // Get the last digit
        n /= 10;           // Remove the last digit
        decimalValue += remainder * pow(2, i); // Add (digit * 2^i) to decimalValue
        ++i;               // Increment power for the next digit
    }
    return decimalValue;
}

int main() {
    long long binaryNumber;
    std::cout << "Enter a binary number: ";
    std::cin >> binaryNumber;
    std::cout << binaryNumber << " in binary = " << binaryToDecimal(binaryNumber) << " in decimal" << std::endl;
    return 0;
}
