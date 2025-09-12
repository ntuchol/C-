#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    std::unordered_map<std::string, int> ages;

    ages["Alice"] = 30;
    ages["Bob"] = 25;
    ages["Charlie"] = 35;

    std::cout << "Alice's age: " << ages["Alice"] << std::endl;

    if (ages.count("Bob")) {
        std::cout << "Bob is in the map." << std::endl;
    }

    for (const auto& pair : ages) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    ages.erase("Charlie");

    return 0;
}
