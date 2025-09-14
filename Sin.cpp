#include <iostream>
#include <cmath> 
#include <numbers> 
int main() {
    double angle_radians = std::numbers::pi / 2.0; 
    double sine_value_radians = std::sin(angle_radians);
    std::cout << "Sine of " << angle_radians << " radians: " << sine_value_radians << std::endl;

    double angle_degrees = 90.0;
    double angle_in_radians = angle_degrees * (std::numbers::pi / 180.0);
    double sine_value_degrees = std::sin(angle_in_radians);
    std::cout << "Sine of " << angle_degrees << " degrees: " << sine_value_degrees << std::endl;

    return 0;
}
