#include <iostream>
#include <cmath> 
#include <iomanip> 
int main() {
    const double G = 6.674e-11; 

    double mass1, mass2, distance;
    double gravitationalForce;

    std::cout << "Enter the mass of the first object (in kg): ";
    std::cin >> mass1;

    std::cout << "Enter the mass of the second object (in kg): ";
    std::cin >> mass2;

    std::cout << "Enter the distance between the objects (in meters): ";
    std::cin >> distance;

    gravitationalForce = (G * mass1 * mass2) / pow(distance, 2);

    std::cout << std::fixed << std::setprecision(10); 
    std::cout << "The gravitational force between the two objects is: " << gravitationalForce << " Newtons" << std::endl;

    return 0;
}
