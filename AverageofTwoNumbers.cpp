#include <iostream> // Required for input/output operations

int main() {
    // Declare variables to store the two numbers and their average
    double num1, num2, average;

    // Prompt the user to enter the first number
    std::cout << "Enter the first number: ";
    // Read the first number from the user
    std::cin >> num1;

    // Prompt the user to enter the second number
    std::cout << "Enter the second number: ";
    // Read the second number from the user
    std::cin >> num2;

    // Calculate the average
    // The sum of the two numbers is divided by 2
    average = (num1 + num2) / 2.0; // Use 2.0 to ensure floating-point division

    // Display the calculated average
    std::cout << "The average of " << num1 << " and " << num2 << " is: " << average << std::endl;

    return 0; // Indicate successful program execution
}