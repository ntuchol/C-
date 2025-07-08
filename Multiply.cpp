

#include <iostream> // Required for input/output operations

// Function definition
// Takes two integer arguments, 'a' and 'b', and returns their product as an integer.
int multiply(int a, int b) {
    return a * b; // Returns the result of the multiplication
}

// Main function where the program execution begins
int main() {
    int num1, num2; // Declare two integer variables

    std::cout << "Enter the first number: "; // Prompt for the first number
    std::cin >> num1; // Read the first number from the user

    std::cout << "Enter the second number: "; // Prompt for the second number
    std::cin >> num2; // Read the second number from the user

    // Call the multiply function and store the returned product in a variable
    int product_result = multiply(num1, num2); 

    std::cout << "The product is: " << product_result << std::endl; // Display the result

    return 0; // Indicate successful program execution
}