#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    // Declare an unordered_map to store string keys and int values
    std::unordered_map<std::string, int> ages;

    // Insert elements
    ages["Alice"] = 30;
    ages["Bob"] = 25;
    ages["Charlie"] = 35;

    // Access elements
    std::cout << "Alice's age: " << ages["Alice"] << std::endl;

    // Check if a key exists
    if (ages.count("Bob")) {
        std::cout << "Bob is in the map." << std::endl;
    }

    // Iterate over elements
    for (const auto& pair : ages) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Erase an element
    ages.erase("Charlie");

    return 0;
}