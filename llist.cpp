#include <iostream>
#include <list>
#include <string>

int main() {
    std::list<std::string> cars = {"Volvo", "BMW", "Ford"};

    // Add elements
    cars.push_back("Mazda");
    cars.push_front("Mercedes");

    // Iterate and print elements
    for (const std::string& car : cars) {
        std::cout << car << " ";
    }
    std::cout << std::endl; // Output: Mercedes Volvo BMW Ford Mazda

    // Remove an element
    cars.remove("BMW");

    // Print after removal
    for (const std::string& car : cars) {
        std::cout << car << " ";
    }
    std::cout << std::endl; // Output: Mercedes Volvo Ford Mazda

    return 0;
}