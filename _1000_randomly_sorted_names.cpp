#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random> // For modern C++ random number generation
#include <fstream> // Optional: for file output

// Function to generate a random name
std::string generateRandomName(std::mt19937& rng) {
    std::string name;
    std::uniform_int_distribution<int> lengthDist(5, 10); // Name length between 5 and 10 characters
    int length = lengthDist(rng);
    std::uniform_int_distribution<char> charDist('a', 'z'); // Random lowercase letters

    for (int i = 0; i < length; ++i) {
        name += charDist(rng);
    }
    return name;
}

int main() {
    // Seed the random number generator using a hardware-based random device if available
    std::random_device rd;
    std::mt19937 rng(rd());

    std::vector<std::string> names;

    // Generate 1000 random names
    for (int i = 0; i < 1000; ++i) {
        names.push_back(generateRandomName(rng));
    }

    // Sort the names alphabetically
    std::sort(names.begin(), names.end());

    // Print the sorted names to the console
    std::cout << "Sorted Names:\n";
    for (const std::string& name : names) {
        std::cout << name << '\n';
    }

    // Optional: Write the sorted names to a file
    /*
    std::ofstream outFile("sorted_names.txt");
    if (outFile.is_open()) {
        for (const std::string& name : names) {
            outFile << name << '\n';
        }
        outFile.close();
        std::cout << "\nSorted names saved to sorted_names.txt\n";
    } else {
        std::cerr << "Error: Unable to open file for writing.\n";
    }
    */

    return 0;
}