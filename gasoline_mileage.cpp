MPG = Miles Driven / Gallons of Gas Used
#include <iostream> 
int main() {
    double milesDriven; 
    double gallonsUsed; 
    double mpg;         
    std::cout << "Enter the number of miles driven: ";
    std::cin >> milesDriven; 
    std::cout << "Enter the number of gallons of gas used: ";
    std::cin >> gallonsUsed; 
    
    if (gallonsUsed > 0) { 
        mpg = milesDriven / gallonsUsed;
        std::cout << "The car's gas mileage (MPG) is: " << mpg << std::endl;
    } else {
        std::cout << "Cannot calculate MPG: Gallons used must be greater than zero." << std::endl;
    }

    return 0; 
}
