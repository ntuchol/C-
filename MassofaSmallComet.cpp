#include <iostream>
#include <cmath> 
int main() {
    double diameter_km = 4.8; 
    double diameter_m = diameter_km * 1000;
    double radius_m = diameter_m / 2;

    double density_kg_m3 = 500; 
    double volume_m3 = (4.0 / 3.0) * M_PI * std::pow(radius_m, 3);

    double mass_kg = density_kg_m3 * volume_m3;

    std::cout << "Estimated mass of the small comet: " << mass_kg << " kg" << std::endl;

    return 0;
}
