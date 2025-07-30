#include <iostream> // Required for input/output operations (cin, cout)
#include <cmath>    // Required for the pow() function (for calculating height squared)

int main() {
    double weight_kg; // Variable to store weight in kilograms
    double height_m;  // Variable to store height in meters
    double bmi;       // Variable to store the calculated BMI

    // Get input from the user
    std::cout << "Enter your weight in kilograms: ";
    std::cin >> weight_kg;

    std::cout << "Enter your height in meters: ";
    std::cin >> height_m;

    // Calculate BMI using the formula: BMI = weight (kg) / (height (m))^2
    bmi = weight_kg / std::pow(height_m, 2);

    // Display the calculated BMI
    std::cout << "Your BMI is: " << bmi << std::endl;

    // Interpret the BMI value
    if (bmi < 18.5) {
        std::cout << "Category: Underweight" << std::endl;
    } else if (bmi >= 18.5 && bmi < 24.9) {
        std::cout << "Category: Normal weight" << std::endl;
    } else if (bmi >= 24.9 && bmi < 29.9) {
        std::cout << "Category: Overweight" << std::endl;
    } else {
        std::cout << "Category: Obesity" << std::endl;
    }

    return 0; // Indicate successful program execution
}