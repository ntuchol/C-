#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> words;
    std::string input;

    std::cout << "Enter strings (enter an empty line to stop):" << std::endl;

    while (std::getline(std::cin, input) && !input.empty()) {
        words.push_back(input);
    }

    std::sort(words.begin(), words.end()); 
    std::cout << "\nSorted strings:" << std::endl;

    for (const auto& word : words) {
        std::cout << word << std::endl;
    }

    return 0;
}
