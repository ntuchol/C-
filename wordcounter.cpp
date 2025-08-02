#include <iostream>
#include <string>
#include <sstream> // For std::istringstream

int countWords(const std::string& text) {
    std::istringstream iss(text);
    int wordCount = 0;
    std::string word;
    while (iss >> word) { // Reads words separated by whitespace
        wordCount++;
    }
    return wordCount;
}

int main() {
    std::string sentence = "This is a sample sentence.";
    int words = countWords(sentence);
    std::cout << "Number of words: " << words << std::endl; // Output: Number of words: 5
    return 0;
}