#include <iostream>
#include <cmath> // Required for pow() function
#include <iomanip> // Required for setprecision() and fixed

int main() {
    // Universal Gravitational Constant
    const double G = 6.674e-11; // N*m^2/kg^2

    double mass1, mass2, distance;
    double gravitationalForce;

    // Get input from the user
    std::cout << "Enter the mass of the first object (in kg): ";
    std::cin >> mass1;

    std::cout << "Enter the mass of the second object (in kg): ";
    std::cin >> mass2;

    std::cout << "Enter the distance between the objects (in meters): ";
    std::cin >> distance;

    // Calculate the gravitational force
    gravitationalForce = (G * mass1 * mass2) / pow(distance, 2);

    // Display the result
    std::cout << std::fixed << std::setprecision(10); // Format output for precision
    std::cout << "The gravitational force between the two objects is: " << gravitationalForce << " Newtons" << std::endl;

    return 0;
}
