#include <iostream> 
#include <string>  
#include <algorithm> 
#include <cctype>   

bool areAnagrams(std::string str1, std::string str2) {
    std::transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    std::transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    str1.erase(std::remove_if(str1.begin(), str1.end(), [](char c){ return !std::isalpha(c); }), str1.end());
    str2.erase(std::remove_if(str2.begin(), str2.end(), [](char c){ return !std::isalpha(c); }), str2.end());

    if (str1.length() != str2.length()) {
        return false;
    }

    std::sort(str1.begin(), str1.end());
    std::sort(str2.begin(), str2.end());

    return str1 == str2;
}

int main() {
    std::string word1, word2;

    std::cout << "Enter the first word: ";
    std::cin >> word1;

    std::cout << "Enter the second word: ";
    std::cin >> word2;

    if (areAnagrams(word1, word2)) {
        std::cout << "\"" << word1 << "\" and \"" << word2 << "\" are anagrams." << std::endl;
    } else {
        std::cout << "\"" << word1 << "\" and \"" << word2 << "\" are not anagrams." << std::endl;
    }

    return 0;
}
