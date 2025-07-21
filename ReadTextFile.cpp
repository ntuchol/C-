#include <iostream> // For console output (e.g., printing file content)
    #include <fstream>  // For file stream operations
    #include <string>   // For using std::string
        std::ifstream inputFile("filename.txt"); // Replace "filename.txt" with your file's path
if (inputFile.is_open()) {
        // File opened successfully, proceed with reading
    } else {
        std::cerr << "Error: Unable to open file." << std::endl;
        // Handle the error (e.g., exit, return an error code)
    }
    std::string line;
    while (std::getline(inputFile, line)) {
        std::cout << line << std::endl; // Process or print each line
    } 
    std::string word;
    while (inputFile >> word) {
        std::cout << word << std::endl; // Process or print each word
    }
        inputFile.close();
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile("my_text_file.txt"); // Assuming 'my_text_file.txt' is in the same directory

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