#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random> 
#include <fstream> 

std::string generateRandomName(std::mt19937& rng) {
    std::string name;
    std::uniform_int_distribution<int> lengthDist(5, 10); 
    int length = lengthDist(rng);
    std::uniform_int_distribution<char> charDist('a', 'z'); 

    for (int i = 0; i < length; ++i) {
        name += charDist(rng);
    }
    return name;
}

int main() {
    std::random_device rd;
    std::mt19937 rng(rd());

    std::vector<std::string> names;

    for (int i = 0; i < 1000; ++i) {
        names.push_back(generateRandomName(rng));
    }

    std::sort(names.begin(), names.end());

    std::cout << "Sorted Names:\n";
    for (const std::string& name : names) {
        std::cout << name << '\n';
    }

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

    return 0;
}
