#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> words;
    std::string word;
    int count = 0;

    // Loop to read up to 256 words
    while (count < 256 && std::cin >> word) {
        words.push_back(word);
        count++;
    }

    // Optional: Print the read words to verify
    std::cout << "Read " << words.size() << " words:" << std::endl;
    for (const std::string& w : words) {
        std::cout << w << std::endl;
    }

    return 0;
}