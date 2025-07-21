    Windchill = 35.74 + (0.6215 * T) - (35.75 * V^0.16) + (0.4275 * T * V^0.16)
#include <iostream>
#include <cmath>
#include <iomanip>

// Function to calculate wind chill
double calculateWindChill(double temperatureF, double windSpeedMPH) {
    // Check for valid conditions
    if (temperatureF > 50.0 || windSpeedMPH <= 3.0) {
        return -999.0; // Indicate invalid calculation, or handle differently
    }
    return 35.74 + (0.6215 * temperatureF) - (35.75 * std::pow(windSpeedMPH, 0.16)) + (0.4275 * temperatureF * std::pow(windSpeedMPH, 0.16));
}

int main() {
    double temp, wind;
    std::cout << "Enter temperature in Fahrenheit: ";
    std::cin >> temp;
    std::cout << "Enter wind speed in MPH: ";
    std::cin >> wind;

    double windChill = calculateWindChill(temp, wind);

    if (windChill == -999.0) { // Check for the invalid indicator
        std::cout << "Wind chill is not defined for these conditions." << std::endl;
    } else {
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "Wind Chill Factor: " << windChill << "F" << std::endl;
    }

    return 0;
}