#include <iostream>
#include <string>
#include <map>

// Function to convert English text to Morse code
std::string englishToMorse(const std::string& text) {
    std::map<char, std::string> morseMap = {
        {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
        // ... add more mappings for other letters, numbers, and punctuation
        {' ', "/"} // Space between words
    };

    std::string morseOutput = "";
    for (char c : text) {
        char upperC = toupper(c); // Convert to uppercase for consistent mapping
        if (morseMap.count(upperC)) {
            morseOutput += morseMap[upperC] + " "; // Add space between character codes
        } else if (upperC == ' ') {
            morseOutput += morseMap[upperC] + " "; // Add space between words
        }
    }
    return morseOutput;
}

// Function to convert Morse code to English text
std::string morseToEnglish(const std::string& morseCode) {
    std::map<std::string, char> englishMap = {
        {".-", 'A'}, {"-...", 'B'}, {"-.-.", 'C'}, {"-..", 'D'}, {".", 'E'},
        // ... add more mappings
        {"/", ' '} // Space between words
    };

    std::string englishOutput = "";
    std::string currentMorseChar = "";
    for (char c : morseCode) {
        if (c == ' ' || c == '/') {
            if (englishMap.count(currentMorseChar)) {
                englishOutput += englishMap[currentMorseChar];
            }
            if (c == '/') {
                englishOutput += ' '; // Add space for word separation
            }
            currentMorseChar = ""; // Reset for next Morse character
        } else {
            currentMorseChar += c;
        }
    }
    // Handle the last Morse character if not followed by a space/slash
    if (!currentMorseChar.empty() && englishMap.count(currentMorseChar)) {
        englishOutput += englishMap[currentMorseChar];
    }
    return englishOutput;
}

int main() {
    std::string text = "Hello World";
    std::string morse = englishToMorse(text);
    std::cout << "English to Morse: " << morse << std::endl;

    std::string decodedText = morseToEnglish(morse);
    std::cout << "Morse to English: " << decodedText << std::endl;

    return 0;
}