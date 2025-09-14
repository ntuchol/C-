#include <iostream>
#include <string>
#include <sstream> 

int countWords(const std::string& text) {
    std::istringstream iss(text);
    int wordCount = 0;
    std::string word;
    while (iss >> word) { 
        wordCount++;
    }
    return wordCount;
}

int main() {
    std::string sentence = "This is a sample sentence.";
    int words = countWords(sentence);
    std::cout << "Number of words: " << words << std::endl; 
    return 0;
}
