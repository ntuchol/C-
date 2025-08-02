#include <iostream>

// Function to check if a number is perfect
bool isPerfectNumber(int num) {
    if (num <= 1) { // Perfect numbers are positive integers greater than 1
        return false;
    }
    int sumOfDivisors = 1; // Start with 1 as a proper divisor for any number > 1
    for (int i = 2; i * i <= num; ++i) { // Iterate up to the square root for efficiency
        if (num % i == 0) {
            sumOfDivisors += i;
            if (i * i != num) { // Avoid adding the same divisor twice for perfect squares
                sumOfDivisors += num / i;
            }
        }
    }
    return sumOfDivisors == num;
}

int main() {
    int numberToTest = 28;
    if (isPerfectNumber(numberToTest)) {
        std::cout << numberToTest << " is a perfect number." << std::endl;
    } else {
        std::cout << numberToTest << " is not a perfect number." << std::endl;
    }

    // Example to find perfect numbers in a range
    std::cout << "Perfect numbers up to 1000:" << std::endl;
    for (int i = 1; i <= 1000; ++i) {
        if (isPerfectNumber(i)) {
            std::cout << i << std::endl;
        }
    }

    return 0;
}