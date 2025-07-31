MPG = Miles Driven / Gallons of Gas Used
#include <iostream> // Required for input/output operations

int main() {
    double milesDriven; // Declare a variable for miles driven
    double gallonsUsed; // Declare a variable for gallons used
    double mpg;         // Declare a variable for miles per gallon

    // Prompt user for input
    std::cout << "Enter the number of miles driven: ";
    std::cin >> milesDriven; // Read miles driven from user

    std::cout << "Enter the number of gallons of gas used: ";
    std::cin >> gallonsUsed; // Read gallons used from user

    // Calculate MPG
    if (gallonsUsed > 0) { // Prevent division by zero
        mpg = milesDriven / gallonsUsed;
        // Display the result
        std::cout << "The car's gas mileage (MPG) is: " << mpg << std::endl;
    } else {
        std::cout << "Cannot calculate MPG: Gallons used must be greater than zero." << std::endl;
    }

    return 0; // Indicate successful program execution
}