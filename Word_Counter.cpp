#include <iostream>
#include <string>
#include <sstream> // Required for std::stringstream

int main() {
    std::string text = "This is a sample sentence with several words.";
    std::stringstream ss(text); // Create a stringstream from the text
    std::string word;
    int wordCount = 0;

    // Extract words from the stringstream
    while (ss >> word) {
        wordCount++;
    }

    std::cout << "Number of words: " << wordCount << std::endl;

    return 0;
}