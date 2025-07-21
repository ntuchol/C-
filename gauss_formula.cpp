#include <iostream>

int main() {
    int n; // Declare an integer variable 'n' to store the user's input

    // Prompt the user to enter a positive integer
    std::cout << "Enter a positive integer (n): ";
    std::cin >> n; // Read the user's input into 'n'

    // Check if the input 'n' is positive
    if (n <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1; // Exit with an error code if 'n' is not positive
    }

    // Apply Gauss's formula: sum = n * (n + 1) / 2
    long long sum = static_cast<long long>(n) * (n + 1) / 2; 
    // Use long long for 'sum' to handle potentially large results and
    // static_cast<long long>(n) to ensure the multiplication is performed
    // using long long to prevent overflow before division.

    // Display the calculated sum
    std::cout << "The sum of numbers from 1 to " << n << " is: " << sum << std::endl;

    return 0; // Indicate successful execution
}