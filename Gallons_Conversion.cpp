#include <iostream>
#include <iomanip> // For output formatting

int main() {
    const double GALLON_TO_LITER = 3.78541; // Conversion factor
    double gallons;
    double liters;

    std::cout << "Enter the amount in gallons: ";
    std::cin >> gallons;

    liters = gallons * GALLON_TO_LITER;

    std::cout << std::fixed << std::setprecision(2) 
              << gallons << " gallons is equal to " << liters << " liters." << std::endl;

    return 0;
}