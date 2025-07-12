struct Star {
    std::string name;
    double apparentMagnitude; // How bright the star appears from Earth
    double absoluteMagnitude; // Intrinsic brightness of the star
    double distanceLightYears;
    std::string spectralType; // e.g., O, B, A, F, G, K, M
    double temperatureKelvin; 
    double massSolarMasses;
    double radiusSolarRadii;
};

#include <fstream>
// ... (Your Star struct definition)

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
// ... (Your Star struct definition)

Star getStarDataFromUser() {
    Star newStar;
    std::cout << "Enter star name: ";
    std::getline(std::cin >> std::ws, newStar.name); // Handles spaces in name
    std::cout << "Enter apparent magnitude: ";
    std::cin >> newStar.apparentMagnitude;
    // ... (Repeat for other characteristics)
    return newStar;
}