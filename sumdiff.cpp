#include <iostream>

    int main() {
        double num1, num2;

        std::cout << "Enter the first number: ";
        std::cin >> num1;
        std::cout << "Enter the second number: ";
        std::cin >> num2;

        double sum = num1 + num2;
        double difference = num1 - num2; // Or std::abs(num1 - num2) for absolute difference

        std::cout << "Sum: " << sum << std::endl;
        std::cout << "Difference: " << difference << std::endl;

        return 0;
    }