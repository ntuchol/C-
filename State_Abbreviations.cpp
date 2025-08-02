#include <iostream>
#include <string>
#include <map>

int main() {
    // Create a map to store state name to abbreviation pairs
    std::map<std::string, std::string> stateAbbreviations;

    // Populate the map with some state abbreviations
    stateAbbreviations["Alabama"] = "AL";
    stateAbbreviations["Alaska"] = "AK";
    stateAbbreviations["Arizona"] = "AZ";
    stateAbbreviations["California"] = "CA";
    stateAbbreviations["New York"] = "NY";

    // Example of retrieving an abbreviation
    std::string stateName = "California";
    auto it = stateAbbreviations.find(stateName);

    if (it != stateAbbreviations.end()) {
        std::cout << "The abbreviation for " << stateName << " is: " << it->second << std::endl;
    } else {
        std::cout << "Abbreviation not found for " << stateName << std::endl;
    }

    // Example of handling a state not in the map
    stateName = "Florida";
    it = stateAbbreviations.find(stateName);
    if (it != stateAbbreviations.end()) {
        std::cout << "The abbreviation for " << stateName << " is: " << it->second << std::endl;
    } else {
        std::cout << "Abbreviation not found for " << stateName << std::endl;
    }

    return 0;
}