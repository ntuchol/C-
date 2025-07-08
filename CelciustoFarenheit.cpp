#include <iostream> // Required for input/output operations
#include <iomanip>  // Required for setting output precision

int main() {
    double celsius; // Declare a variable to store Celsius temperature
    double fahrenheit; // Declare a variable to store Fahrenheit temperature

    // Prompt the user to enter the temperature in Celsius
    std::cout << "Enter the temperature in Celsius: ";
    // Read the input from the user and store it in the 'celsius' variable
    std::cin >> celsius;

    // Apply the conversion formula: F = (C * 9/5) + 32
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Display the converted temperature with a specific precision
    std::cout << std::fixed << std::setprecision(2); // Set output to 2 decimal places
    std::cout << "Temperature in Fahrenheit: " << fahrenheit << " F" << std::endl;

    return 0; // Indicate successful program execution
}