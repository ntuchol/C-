#include <iostream>

int main() {
    // Define constants for freezing and boiling points (in Fahrenheit)
    const int WATER_FREEZE = 32;
    const int WATER_BOIL = 212;
    const int OXYGEN_FREEZE = -362;
    const int OXYGEN_BOIL = -306;
    // ... define for other substances

    double user_temp;

    std::cout << "Enter the temperature in Fahrenheit: ";
    std::cin >> user_temp;

    std::cout << "\nAt " << user_temp << " F:\n";

    // Check for water
    if (user_temp <= WATER_FREEZE) {
        std::cout << "Water will freeze.\n";
    } else if (user_temp >= WATER_BOIL) {
        std::cout << "Water will boil.\n";
    } else {
        std::cout << "Water is liquid.\n";
    }

    // Check for oxygen
    if (user_temp <= OXYGEN_FREEZE) {
        std::cout << "Oxygen will freeze.\n";
    } else if (user_temp >= OXYGEN_BOIL) {
        std::cout << "Oxygen will boil.\n";
    } else {
        std::cout << "Oxygen is gaseous.\n"; // Or liquid depending on context
    }

    // ... similar checks for other substances

    return 0;
}