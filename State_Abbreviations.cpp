#include <iostream>
#include <string>
#include <map>

int main() {
    std::map<std::string, std::string> stateAbbreviations;

    stateAbbreviations["Alabama"] = "AL";
    stateAbbreviations["Alaska"] = "AK";
    stateAbbreviations["Arizona"] = "AZ";
    stateAbbreviations["California"] = "CA";
    stateAbbreviations["New York"] = "NY";

    std::string stateName = "California";
    auto it = stateAbbreviations.find(stateName);

    if (it != stateAbbreviations.end()) {
        std::cout << "The abbreviation for " << stateName << " is: " << it->second << std::endl;
    } else {
        std::cout << "Abbreviation not found for " << stateName << std::endl;
    }

    stateName = "Florida";
    it = stateAbbreviations.find(stateName);
    if (it != stateAbbreviations.end()) {
        std::cout << "The abbreviation for " << stateName << " is: " << it->second << std::endl;
    } else {
        std::cout << "Abbreviation not found for " << stateName << std::endl;
    }

    return 0;
}
