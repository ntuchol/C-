#include <iostream>
#include <string>
#include <cctype> 
bool is_vowel(char c) {
    c = std::tolower(c); 
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
            return word + "ay"; 
        }
    }
}

int main() {
    std::cout << to_pig_latin("apple") << std::endl;  
    std::cout << to_pig_latin("pig") << std::endl;    
    std::cout << to_pig_latin("street") << std::endl; 
    std::cout << to_pig_latin("rhythm") << std::endl; 
    return 0;
}
