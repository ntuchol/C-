#include <iostream>
#include <string>
#include <map>
#include <sstream> 

std::map<char, std::string> englishToMorse;
std::map<std::string, char> morseToEnglish;

void initializeMappings() {
    englishToMorse['a'] = ".-";
    morseToEnglish[".-"] = 'a';
}

std::string textToMorse(const std::string& text) {
    std::string result = "";
    for (char c : text) {
        c = std::tolower(c); 
        if (englishToMorse.count(c)) {
            result += englishToMorse[c] + " "; 
        } else if (c == ' ') {
            result += "/ ";
        }
    }
    return result;
}

std::string morseToText(const std::string& morse) {
    std::string result = "";
    std::stringstream ss(morse);
    std::string token;
    while (ss >> token) {
        if (token == "/") { 
            result += " ";
        } else if (morseToEnglish.count(token)) {
            result += morseToEnglish[token];
        }
    }
    return result;
}

int main() {
    initializeMappings();

    std::string text = "hello world";
    std::string morse = textToMorse(text);
    std::cout << "Morse code for '" << text << "': " << morse << std::endl;

    std::string decodedText = morseToText(morse);
    std::cout << "Decoded text from '" << morse << "': " << decodedText << std::endl;

    return 0;
}
