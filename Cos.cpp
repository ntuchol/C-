#include <iostream>
#include <cmath> 
#include <iomanip> 

int main() {
    double angle_radians = 3.14159; 
    double cosine_value = std::cos(angle_radians);

    std::cout << "Cosine of " << angle_radians << " radians: " << std::fixed << std::setprecision(4) << cosine_value << std::endl;

    double angle_degrees = 180.0;
    double angle_radians_from_degrees = angle_degrees * (M_PI / 180.0); 
    double cosine_from_degrees = std::cos(angle_radians_from_degrees);

    std::cout << "Cosine of " << angle_degrees << " degrees: " << std::fixed << std::setprecision(4) << cosine_from_degrees << std::endl;

    return 0;
}
