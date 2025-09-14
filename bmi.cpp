#include <iostream> 
#include <cmath>    
int main() {
    double weight_kg; 
    double height_m;  
    double bmi;       
    std::cout << "Enter your weight in kilograms: ";
    std::cin >> weight_kg;

    std::cout << "Enter your height in meters: ";
    std::cin >> height_m;

    bmi = weight_kg / std::pow(height_m, 2);

    std::cout << "Your BMI is: " << bmi << std::endl;

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
