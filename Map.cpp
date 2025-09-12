#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> ages;

    ages["John"] = 30;
    ages["Alice"] = 25;
    ages["Bob"] = 35;

    std::cout << "John's age: " << ages["John"] << std::endl;

    std::cout << "All ages:" << std::endl;
    for (const auto& pair : ages) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    if (ages.count("Alice")) {
        std::cout << "Alice is in the map." << std::endl;
    }

    ages.erase("Bob");

    return 0;
}
