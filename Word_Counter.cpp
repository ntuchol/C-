#include <iostream>
#include <string>
#include <sstream> 
int main() {
    std::string text = "This is a sample sentence with several words.";
    std::stringstream ss(text); 
    std::string word;
    int wordCount = 0;

    while (ss >> word) {
        wordCount++;
    }

    std::cout << "Number of words: " << wordCount << std::endl;

    return 0;
}
