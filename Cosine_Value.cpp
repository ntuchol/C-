#include <iostream>
#include <cmath> 
#include <numbers> 

int main() {
    double angle_radians = std::numbers::pi / 3.0; 
    double cosine_value = std::cos(angle_radians);
    std::cout << "Cosine of " << angle_radians << " radians is: " << cosine_value << std::endl;

    double angle_degrees = 45.0;
    double angle_radians_from_degrees = angle_degrees * (std::numbers::pi / 180.0);
    double cosine_value_degrees = std::cos(angle_radians_from_degrees);
    std::cout << "Cosine of " << angle_degrees << " degrees is: " << cosine_value_degrees << std::endl;

    return 0;
}
