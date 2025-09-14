struct Star {
    std::string name;
    double apparentMagnitude; 
    double absoluteMagnitude; 
    double distanceLightYears;
    std::string spectralType; 
    double temperatureKelvin; 
    double massSolarMasses;
    double radiusSolarRadii;
};

#include <fstream>

void saveStarsToFile(const std::vector<Star>& stars, const std::string& filename) {
    std::ofstream outputFile(filename);
    if (outputFile.is_open()) {
        for (const auto& star : stars) {
            outputFile << star.name << "," 
                       << star.apparentMagnitude << "," 
                       << star.absoluteMagnitude << ","
                       << star.distanceLightYears << ","
                       << star.spectralType << ","
                       << star.temperatureKelvin << ","
                       << star.massSolarMasses << ","
                       << star.radiusSolarRadii << std::endl;
        }
        outputFile.close();
    } else {
        std::cerr << "Error: Unable to open file for writing." << std::endl;
    }
}

#include <iostream>

Star getStarDataFromUser() {
    Star newStar;
    std::cout << "Enter star name: ";
    std::getline(std::cin >> std::ws, newStar.name); 
    std::cout << "Enter apparent magnitude: ";
    std::cin >> newStar.apparentMagnitude;
    return newStar;
}
