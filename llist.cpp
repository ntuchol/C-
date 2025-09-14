#include <iostream>
#include <list>
#include <string>

int main() {
    std::list<std::string> cars = {"Volvo", "BMW", "Ford"};

    cars.push_back("Mazda");
    cars.push_front("Mercedes");

    for (const std::string& car : cars) {
        std::cout << car << " ";
    }
    std::cout << std::endl; 
    
    cars.remove("BMW");

    for (const std::string& car : cars) {
        std::cout << car << " ";
    }
    std::cout << std::endl; 
    return 0;
}
