#include <iostream>
#include <map>
#include <string>

int main() {
    // Declare a map with string keys and int values
    std::map<std::string, int> ages;

    // Insert elements
    ages["John"] = 30;
    ages["Alice"] = 25;
    ages["Bob"] = 35;

    // Access elements using keys
    std::cout << "John's age: " << ages["John"] << std::endl;

    // Iterate through the map (elements will be in sorted order by key)
    std::cout << "All ages:" << std::endl;
    for (const auto& pair : ages) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Check if a key exists
    if (ages.count("Alice")) {
        std::cout << "Alice is in the map." << std::endl;
    }

    // Erase an element
    ages.erase("Bob");

    return 0;
}