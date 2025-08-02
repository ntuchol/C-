#include <iostream>
#include <string>
#include <cctype> // For tolower()

bool is_vowel(char c) {
    c = std::tolower(c); // Convert to lowercase for consistent vowel checking
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

std::string to_pig_latin(const std::string& word) {
    if (word.empty()) {
        return "";
    }

    if (is_vowel(word[0])) {
        return word + "way";
    } else {
        size_t first_vowel_pos = std::string::npos;
        for (size_t i = 0; i < word.length(); ++i) {
            if (is_vowel(word[i])) {
                first_vowel_pos = i;
                break;
            }
        }

        if (first_vowel_pos != std::string::npos) {
            std::string consonants = word.substr(0, first_vowel_pos);
            std::string remaining_word = word.substr(first_vowel_pos);
            return remaining_word + consonants + "ay";
        } else {
            // Case: word contains no vowels (e.g., "rhythm") - handle as desired
            return word + "ay"; // Or throw an error, or a specific rule
        }
    }
}

int main() {
    std::cout << to_pig_latin("apple") << std::endl;  // Output: appleway
    std::cout << to_pig_latin("pig") << std::endl;    // Output: igpay
    std::cout << to_pig_latin("street") << std::endl; // Output: eetstray
    std::cout << to_pig_latin("rhythm") << std::endl; // Output: ythmray (example handling)
    return 0;
}
