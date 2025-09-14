#include <iostream>
#include <cmath> 
#include <iomanip> 

int main() {
    double temperature_f, wind_speed_mph;
    double wind_chill_index;

    std::cout << "Enter the air temperature in Fahrenheit: ";
    std::cin >> temperature_f;

    std::cout << "Enter the wind speed in miles per hour: ";
    std::cin >> wind_speed_mph;

    wind_chill_index = 35.74 + (0.6215 * temperature_f) - (35.75 * std::pow(wind_speed_mph, 0.16)) + (0.4275 * temperature_f * std::pow(wind_speed_mph, 0.16));

    std::cout << std::fixed << std::setprecision(2); 
    std::cout << "The wind chill index is: " << wind_chill_index << " degrees Fahrenheit." << std::endl;

    return 0;
}
