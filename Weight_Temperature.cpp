 double mass = 75.5; // Weight in kilograms
double force = 9.8 * mass; // Example: Force due to gravity (weight)

#include <iostream>

    double calculateHeatEnergy(double mass, double initialTemp, double finalTemp) {
        const double specificHeatCapacityOfWater = 4184.0; // Joules per kg per degree Celsius
        return mass * (finalTemp - initialTemp) * specificHeatCapacityOfWater;
    }

    int main() {
        double waterMass, initialWaterTemp, finalWaterTemp;

        std::cout << "Enter the mass of water in kg: ";
        std::cin >> waterMass;
        std::cout << "Enter the initial temperature in Celsius: ";
        std::cin >> initialWaterTemp;
        std::cout << "Enter the final temperature in Celsius: ";
        std::cin >> finalWaterTemp;

        double heatEnergy = calculateHeatEnergy(waterMass, initialWaterTemp, finalWaterTemp);
        std::cout << "Heat energy required: " << heatEnergy << " Joules" << std::endl;

        return 0;
    }