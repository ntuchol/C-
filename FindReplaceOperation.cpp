#include <iostream>  // Required for input/output operations
#include <string>    // Required for using std::string

// Function to replace all occurrences of a substring
void replaceAll(std::string& text, const std::string& findStr, const std::string& replaceStr) {
    size_t pos = 0; // Initialize position to start searching from
    while ((pos = text.find(findStr, pos)) != std::string::npos) { // Loop until findStr is no longer found
        text.replace(pos, findStr.length(), replaceStr); // Replace the found substring
        pos += replaceStr.length(); // Advance the position to avoid infinite loops if findStr is a substring of replaceStr
    }
}

int main() {
    std::string text;
    std::string findString;
    std::string replaceString;

    // Get input from the user
    std::cout << "Enter the original text: ";
    std::getline(std::cin, text); // Read the entire line including spaces

    std::cout << "Enter the string to find: ";
    std::getline(std::cin, findString);

    std::cout << "Enter the string to replace with: ";
    std::getline(std::cin, replaceString);

    // Perform the replacement
    replaceAll(text, findString, replaceString);

    // Display the modified text
    std::cout << "\nModified text:\n" << text << std::endl;

    return 0;
}