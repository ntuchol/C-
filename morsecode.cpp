#include <iostream>
#include <string>
#include <map>
#include <sstream> // For parsing Morse code

// Global maps or encapsulated within a class
std::map<char, std::string> englishToMorse;
std::map<std::string, char> morseToEnglish;

void initializeMappings() {
    // Populate englishToMorse and morseToEnglish maps with all characters and their Morse equivalents
    englishToMorse['a'] = ".-";
    morseToEnglish[".-"] = 'a';
    // ... add all other characters and numbers
}

std::string textToMorse(const std::string& text) {
    std::string result = "";
    for (char c : text) {
        c = std::tolower(c); // Handle case-insensitivity
        if (englishToMorse.count(c)) {
            result += englishToMorse[c] + " "; // Add space between character codes
        } else if (c == ' ') {
            result += "/ "; // Add a word separator
        }
    }
    return result;
}

std::string morseToText(const std::string& morse) {
    std::string result = "";
    std::stringstream ss(morse);
    std::string token;
    while (ss >> token) {
        if (token == "/") { // Handle word separator
            result += " ";
        } else if (morseToEnglish.count(token)) {
            result += morseToEnglish[token];
        }
    }
    return result;
}

int main() {
    initializeMappings();

    // Example usage
    std::string text = "hello world";
    std::string morse = textToMorse(text);
    std::cout << "Morse code for '" << text << "': " << morse << std::endl;

    std::string decodedText = morseToText(morse);
    std::cout << "Decoded text from '" << morse << "': " << decodedText << std::endl;

    return 0;
}