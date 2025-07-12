#include <iostream>

int main() {
    int num1;
    double num2;

    std::cout << "Enter an integer: ";
    std::cin >> num1; // Reads an integer from the console

    std::cout << "Enter a double: ";
    std::cin >> num2; // Reads a double from the console

    std::cout << "You entered: " << num1 << " and " << num2 << std::endl;

    return 0;
}

#include <iostream>
#include <fstream> // Required for file operations

int main() {
    std::ifstream inputFile("numbers.txt"); // Open a file named "numbers.txt" for reading

    if (!inputFile.is_open()) { // Check if the file opened successfully
        std::cerr << "Error opening file!" << std::endl;
        return 1; // Indicate an error
    }

    int numFromFile;
    while (inputFile >> numFromFile) { // Read numbers until the end of the file is reached
        std::cout << "Read from file: " << numFromFile << std::endl;
    }

    inputFile.close(); // Close the file stream

    return 0;
}