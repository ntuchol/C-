#include <iostream> // Required for input/output operations
#include <string>   // Required for std::string

int main() {
    std::string binaryString; // Declare a string variable to store the input

    // Prompt the user to enter the string
    std::cout << "Enter a string of 0s and 1s: ";

    // Read the string from standard input
    std::cin >> binaryString; 

    // Output the read string to verify
    std::cout << "You entered: " << binaryString << std::endl;

    // You can then process the string, for example, iterate through its characters:
    for (char c : binaryString) {
        if (c == '0') {
            // Do something with '0'
            std::cout << "Found a zero." << std::endl;
        } else if (c == '1') {
            // Do something with '1'
            std::cout << "Found a one." << std::endl;
        } else {
            // Handle invalid characters if necessary
            std::cout << "Found an invalid character: " << c << std::endl;
        }
    }

    return 0;
}