#include <fstream> 
#include <iostream> 
#include <string>   

int main() {
    std::ofstream outFile("example.txt");
    if (outFile.is_open()) {
        outFile << "This is the first line.\n";
        outFile << "This is the second line." << std::endl;
        outFile.close();
    } else {
        std::cerr << "Error opening file for writing.\n";
    }

    std::ifstream inFile("example.txt");
    if (inFile.is_open()) {
        std::string line;
        while (getline(inFile, line)) {
            std::cout << line << std::endl;
        }
        inFile.close();
    } else {
        std::cerr << "Error opening file for reading.\n";
    }

    return 0;
}
