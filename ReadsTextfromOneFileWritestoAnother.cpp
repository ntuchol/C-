#include <iostream> 
#include <fstream>  
#include <string>  

int main() {
    std::ifstream inputFile;  
    std::ofstream outputFile; 
    std::string line;        
    
    inputFile.open("input.txt"); 

    outputFile.open("output.txt");

    if (!inputFile.is_open()) {
        std::cerr << "Error: Could not open input.txt" << std::endl;
        return 1; 
    }
    if (!outputFile.is_open()) {
        std::cerr << "Error: Could not open output.txt" << std::endl;
        inputFile.close(); 
        return 1; 
    }

    while (std::getline(inputFile, line)) {
        outputFile << line << std::endl; 
    }

    inputFile.close();
    outputFile.close();

    std::cout << "Content copied from input.txt to output.txt successfully." << std::endl;

    return 0; // Indicate successful execution
}
