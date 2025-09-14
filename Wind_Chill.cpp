#include <iostream>
#include <cmath> 
double calculateWindChill(double temperatureFahrenheit, double windSpeedMph) {
    if (temperatureFahrenheit > 50.0 || windSpeedMph <= 3.0) {
        return temperatureFahrenheit; 
    }

    double windChill = 35.74 + (0.6215 * temperatureFahrenheit) - 
                       (35.75 * std::pow(windSpeedMph, 0.16)) + 
                       (0.4275 * temperatureFahrenheit * std::pow(windSpeedMph, 0.16));
    return windChill;
}

int main() {
    double temp, wind;

    std::cout << "Enter temperature in Fahrenheit: ";
    std::cin >> temp;

    std::cout << "Enter wind speed in mph: ";
    std::cin >> wind;

    double windChillFactor = calculateWindChill(temp, wind);

    if (temp > 50.0 || wind <= 3.0) {
        std::cout << "Wind chill is not applicable for these conditions. Feels like: " << windChillFactor << "F" << std::endl;
    } else {
        std::cout << "Wind Chill: " << windChillFactor << "F" << std::endl;
    }

    return 0;
}
