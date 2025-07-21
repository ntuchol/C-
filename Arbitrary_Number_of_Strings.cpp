#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // Required for std::sort

int main() {
    std::vector<std::string> words;
    std::string input;

    std::cout << "Enter strings (enter an empty line to stop):" << std::endl;

    // Read strings until an empty line is entered
    while (std::getline(std::cin, input) && !input.empty()) {
        words.push_back(input);
    }

    // Sort the vector of strings
    std::sort(words.begin(), words.end()); // {Link: According to Medium https://medium.com/@ryan_forrester_/sorting-strings-in-c-how-to-guide-df2bbdbc8546}, by default, std::sort sorts in ascending (lexicographical) order.

    std::cout << "\nSorted strings:" << std::endl;

    // Print the sorted strings
    for (const auto& word : words) {
        std::cout << word << std::endl;
    }

    return 0;
}