#include <iostream> // Required for input/output operations

int main() {
    double number; // Declare a variable to store the input number

    // Prompt the user to enter a number
    std::cout << "Enter a number to square: "; 
    std::cin >> number; // Read the number from the user

    // Calculate the square
    double squared_number = number * number; 

    // Display the result
    std::cout << "The square of " << number << " is: " << squared_number << std::endl;

    return 0; // Indicate successful program execution
}