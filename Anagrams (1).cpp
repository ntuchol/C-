#include <iostream> // Required for input/output operations (cin, cout)
#include <string>   // Required for string manipulation
#include <algorithm> // Required for sorting algorithms (sort, transform)
#include <cctype>   // Required for character manipulation (tolower)

// Function to check if two strings are anagrams
bool areAnagrams(std::string str1, std::string str2) {
    // 1. Convert both strings to lowercase to handle case-insensitivity
    std::transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    std::transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    // 2. Remove any non-alphabetic characters (e.g., spaces, punctuation)
    str1.erase(std::remove_if(str1.begin(), str1.end(), [](char c){ return !std::isalpha(c); }), str1.end());
    str2.erase(std::remove_if(str2.begin(), str2.end(), [](char c){ return !std::isalpha(c); }), str2.end());

    // 3. Check if the lengths are different after cleaning. If so, they cannot be anagrams.
    if (str1.length() != str2.length()) {
        return false;
    }

    // 4. Sort both strings alphabetically
    std::sort(str1.begin(), str1.end());
    std::sort(str2.begin(), str2.end());

    // 5. Compare the sorted strings. If they are identical, the original words are anagrams.
    return str1 == str2;
}

int main() {
    std::string word1, word2;

    // Prompt the user for the first word
    std::cout << "Enter the first word: ";
    std::cin >> word1;

    // Prompt the user for the second word
    std::cout << "Enter the second word: ";
    std::cin >> word2;

    // Determine if they are anagrams and print the result
    if (areAnagrams(word1, word2)) {
        std::cout << "\"" << word1 << "\" and \"" << word2 << "\" are anagrams." << std::endl;
    } else {
        std::cout << "\"" << word1 << "\" and \"" << word2 << "\" are not anagrams." << std::endl;
    }

    return 0;
}