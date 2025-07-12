#include <iostream>
#include <string>
#include <algorithm> // Required for std::sort

// Function to check if two strings are anagrams
bool areAnagrams(std::string str1, std::string str2) {
    // Remove spaces and convert to lowercase for case-insensitive comparison
    str1.erase(remove_if(str1.begin(), str1.end(), isspace), str1.end());
    str2.erase(remove_if(str2.begin(), str2.end(), isspace), str2.end());
    std::transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    std::transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    // If lengths are different, they cannot be anagrams
    if (str1.length() != str2.length()) {
        return false;
    }

    // Sort both strings
    std::sort(str1.begin(), str1.end());
    std::sort(str2.begin(), str2.end());

    // Compare the sorted strings
    return str1 == str2;
}

int main() {
    std::string word1, word2;

    // Prompt for input
    std::cout << "Enter the first word: ";
    std::getline(std::cin, word1);

    std::cout << "Enter the second word: ";
    std::getline(std::cin, word2);

    // Determine and display if they are anagrams
    if (areAnagrams(word1, word2)) {
        std::cout << "\"" << word1 << "\" and \"" << word2 << "\" are anagrams." << std::endl;
    } else {
        std::cout << "\"" << word1 << "\" and \"" << word2 << "\" are not anagrams." << std::endl;
    }

    return 0;
}
