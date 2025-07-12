#include <iostream> // Required for input/output operations (cin, cout, getline)
#include <string>   // Required for string manipulation
#include <cctype>   // Required for character case conversion functions (islower, isupper, toupper, tolower)

int main() {
    std::string inputString; // Declare a string variable to store the user's input

    // Prompt the user to enter a string
    std::cout << "Enter a string: ";
    // Read the entire line of input, including spaces, into inputString
    std::getline(std::cin, inputString);

    // Iterate through each character of the string
    for (char &c : inputString) { // Use a reference to modify the character directly
        if (std::islower(c)) { // Check if the character is lowercase
            c = std::toupper(c); // Convert to uppercase
        } else if (std::isupper(c)) { // Check if the character is uppercase
            c = std::tolower(c); // Convert to lowercase
        }
        // If the character is not a letter, it remains unchanged
    }

    // Print the modified string with reversed case
    std::cout << "String with reversed case: " << inputString << std::endl;

    return 0; // Indicate successful program execution
}
AI r