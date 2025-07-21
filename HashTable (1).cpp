#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    // Declare an unordered_map with string keys and int values
    std::unordered_map<std::string, int> ageMap;

    // Insert elements
    ageMap["Alice"] = 30;
    ageMap["Bob"] = 25;
    ageMap.emplace("Charlie", 35); // Another way to insert

    // Access elements
    std::cout << "Alice's age: " << ageMap["Alice"] << std::endl;

    // Check if a key exists
    if (ageMap.count("David")) {
        std::cout << "David's age: " << ageMap["David"] << std::endl;
    } else {
        std::cout << "David not found." << std::endl;
    }

    // Iterate through the map
    for (const auto& pair : ageMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Erase an element
    ageMap.erase("Bob");

    return 0;
}