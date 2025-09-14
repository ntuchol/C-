#include <iostream>
#include <cmath> 

    int main() {
        double airTemperatureF, windSpeedMph;

        std::cout << "Enter air temperature in Fahrenheit: ";
        std::cin >> airTemperatureF;

        std::cout << "Enter wind speed in miles per hour: ";
        std::cin >> windSpeedMph;

        double windChillIndex = 35.74 + (0.6215 * airTemperatureF) - (35.75 * std::pow(windSpeedMph, 0.16)) + (0.4275 * airTemperatureF * std::pow(windSpeedMph, 0.16));

        std::cout << "The wind chill index is: " << windChillIndex << " F" << std::endl;

        return 0;
    }
