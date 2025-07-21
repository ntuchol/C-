#include <iostream>
#include <cmath> // For std::pow and M_PI

int main() {
    // 1. Get the comet's size (diameter in kilometers)
    double diameter_km = 4.8; // Example for Comet Encke

    // Convert diameter to meters for volume calculation
    double diameter_m = diameter_km * 1000;
    double radius_m = diameter_m / 2;

    // 2. Estimate the comet's density (in kg/m³)
    double density_kg_m3 = 500; // Average density of a porous comet nucleus (~0.5 g/cm³ converted to kg/m³)

    // 3. Calculate the comet's volume (assuming a sphere)
    // The value of PI (M_PI) is often available in cmath or defined as a constant
    double volume_m3 = (4.0 / 3.0) * M_PI * std::pow(radius_m, 3);

    // 4. Calculate the comet's mass
    double mass_kg = density_kg_m3 * volume_m3;

    std::cout << "Estimated mass of the small comet: " << mass_kg << " kg" << std::endl;

    return 0;
}