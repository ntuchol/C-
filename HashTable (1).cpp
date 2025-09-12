#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> ageMap;

    ageMap["Alice"] = 30;
    ageMap["Bob"] = 25;
    ageMap.emplace("Charlie", 35); 

    std::cout << "Alice's age: " << ageMap["Alice"] << std::endl;

    if (ageMap.count("David")) {
        std::cout << "David's age: " << ageMap["David"] << std::endl;
    } else {
        std::cout << "David not found." << std::endl;
    }

    for (const auto& pair : ageMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    ageMap.erase("Bob");

    return 0;
}
