#include <iostream>

int main() {
    int num1;
    double num2;

    std::cout << "Enter an integer: ";
    std::cin >> num1; 
    
    std::cout << "Enter a double: ";
    std::cin >> num2; 
    std::cout << "You entered: " << num1 << " and " << num2 << std::endl;

    return 0;
}

#include <iostream>
#include <fstream> 
int main() {
    std::ifstream inputFile("numbers.txt"); 
    if (!inputFile.is_open()) { 
        std::cerr << "Error opening file!" << std::endl;
        return 1; 
    }

    int numFromFile;
    while (inputFile >> numFromFile) { 
        std::cout << "Read from file: " << numFromFile << std::endl;
    }

    inputFile.close(); 

    return 0;
}
