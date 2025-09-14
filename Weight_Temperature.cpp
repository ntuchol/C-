 double mass = 75.5; 
double force = 9.8 * mass; 

#include <iostream>

    double calculateHeatEnergy(double mass, double initialTemp, double finalTemp) {
        const double specificHeatCapacityOfWater = 4184.0; 
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
