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

#include <iostream>
// ... (Your Star struct definition)

void displayStarInfo(const Star& star) {
    std::cout << "Name: " << star.name << std::endl;
    std::cout << "Apparent Magnitude: " << star.apparentMagnitude << std::endl;
    // ... (Repeat for other characteristics)
}

#include <vector>
#include <limits> // Required for std::numeric_limits

int main() {
    std::vector<Star> stars;
    int choice;

    do {
        std::cout << "\nStar Recording Application Menu:\n";
        std::cout << "1. Add a new star\n";
        std::cout << "2. View all stars\n";
        std::cout << "3. Save stars to file\n";
        std::cout << "4. Load stars from file\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Input validation
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input, please enter a number.\n";
            continue;
        }

        switch (choice) {
            case 1: {
                Star newStar = getStarDataFromUser();
                stars.push_back(newStar);
                break;
            }
            case 2: {
                if (stars.empty()) {
                    std::cout << "No stars recorded yet.\n";
                } else {
                    for (const auto& star : stars) {
                        displayStarInfo(star);
                        std::cout << "--------------------\n";
                    }
                }
                break;
            }
            case 3:
                // Call saveStarsToFile()
                break;
            case 4:
                // Call loadStarsFromFile()
                break;
            case 5:
                std::cout << "Exiting application.\n";
                break;
            default:
                std::cout << "Invalid choice, please try again.\n";
        }
    } while (choice != 5);

    return 0;
}