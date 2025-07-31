#include <iostream> // For input/output operations (e.g., cout, cin)
#include <fstream>  // For file stream operations (ifstream, ofstream)
#include <string>   // For using std::string

int main() {
    std::ifstream inputFile;  // Declare an input file stream object
    std::ofstream outputFile; // Declare an output file stream object
    std::string line;         // String to store each line read from the input file

    // Open the input file for reading
    inputFile.open("input.txt"); 

    // Open the output file for writing (creates or overwrites if it exists)
    outputFile.open("output.txt");

    // Check if both files were successfully opened
    if (!inputFile.is_open()) {
        std::cerr << "Error: Could not open input.txt" << std::endl;
        return 1; // Indicate an error
    }
    if (!outputFile.is_open()) {
        std::cerr << "Error: Could not open output.txt" << std::endl;
        // Close the input file since the output file couldn't be opened
        inputFile.close(); 
        return 1; // Indicate an error
    }

    // Read line by line from the input file and write to the output file
    while (std::getline(inputFile, line)) {
        outputFile << line << std::endl; // Write the line and a newline character
    }

    // Close both files
    inputFile.close();
    outputFile.close();

    std::cout << "Content copied from input.txt to output.txt successfully." << std::endl;

    return 0; // Indicate successful execution
}