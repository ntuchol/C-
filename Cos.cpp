#include <iostream>
#include <cmath> // Required for cos()
#include <iomanip> // For setprecision

int main() {
    double angle_radians = 3.14159; // Approximately PI radians
    double cosine_value = std::cos(angle_radians);

    std::cout << "Cosine of " << angle_radians << " radians: " << std::fixed << std::setprecision(4) << cosine_value << std::endl;

    double angle_degrees = 180.0;
    // Convert degrees to radians
    double angle_radians_from_degrees = angle_degrees * (M_PI / 180.0); // M_PI is often available in cmath or math.h
    double cosine_from_degrees = std::cos(angle_radians_from_degrees);

    std::cout << "Cosine of " << angle_degrees << " degrees: " << std::fixed << std::setprecision(4) << cosine_from_degrees << std::endl;

    return 0;
}