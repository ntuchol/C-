#include <iostream>
#include <string>
#include <map>
std::string englishToMorse(const std::string& text) {
    std::map<char, std::string> morseMap = {
        {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
        {' ', "/"} 
    };

    std::string morseOutput = "";
    for (char c : text) {
        char upperC = toupper(c); 
        if (morseMap.count(upperC)) {
            morseOutput += morseMap[upperC] + " "; 
        } else if (upperC == ' ') {
            morseOutput += morseMap[upperC] + " "; 
        }
    }
    return morseOutput;
}

std::string morseToEnglish(const std::string& morseCode) {
    std::map<std::string, char> englishMap = {
        {".-", 'A'}, {"-...", 'B'}, {"-.-.", 'C'}, {"-..", 'D'}, {".", 'E'},
        {"/", ' '} 
    };

    std::string englishOutput = "";
    std::string currentMorseChar = "";
    for (char c : morseCode) {
        if (c == ' ' || c == '/') {
            if (englishMap.count(currentMorseChar)) {
                englishOutput += englishMap[currentMorseChar];
            }
            if (c == '/') {
                englishOutput += ' '; 
            }
            currentMorseChar = ""; 
        } else {
            currentMorseChar += c;
        }
    }
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
