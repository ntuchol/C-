#include <iostream> 
#include <fstream>  
#include <string>   
        std::ifstream inputFile("filename.txt"); 
if (inputFile.is_open()) {
    } else {
        std::cerr << "Error: Unable to open file." << std::endl;
    }
    std::string line;
    while (std::getline(inputFile, line)) {
        std::cout << line << std::endl; 
    } 
    std::string word;
    while (inputFile >> word) {
        std::cout << word << std::endl; 
    }
        inputFile.close();
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile("my_text_file.txt"); 

    if (inputFile.is_open()) {
        std::string line;
        while (std::getline(inputFile, line)) {
            std::cout << line << std::endl;
        }
        inputFile.close();
    } else {
        std::cerr << "Error: Could not open the file." << std::endl;
    }

    return 0;
}
