#include <iostream>

int main() {
    int n;
    int sum = 0;
    int i = 1;

    // Prompt the user to enter a positive integer
    std::cout << "Enter a positive integer (n): ";
    std::cin >> n;

    // Input validation (optional but good practice)
    if (n < 1) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1; // Indicate an error
    }

    // Calculate the sum using a while loop
    while (i <= n) {
        sum += i; // Add current value of i to sum
        i++;      // Increment i
    }

    // Display the result
    std::cout << "The sum of positive integers from 1 to " << n << " is: " << sum << std::endl;

    return 0;
}