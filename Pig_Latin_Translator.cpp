#include <iostream>
#include <string>
#include <vector>
#include <cctype> 

bool isVowel(char c) {
    c = std::tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

std::string toPigLatin(const std::string& word) {
    if (word.empty()) {
        return "";
    }

    if (isVowel(word[0])) {
        return word + "way";
    }

    size_t firstVowelIndex = 0;
    while (firstVowelIndex < word.length() && !isVowel(word[firstVowelIndex]) && word[firstVowelIndex] != 'y') {
        firstVowelIndex++;
    }

    if (firstVowelIndex == 0 && word[0] == 'y') {
        firstVowelIndex = 1; // Treat 'y' as a consonant
    }

    if (firstVowelIndex == word.length()) { 
        return word + "ay"; 
    }

    std::string consonants = word.substr(0, firstVowelIndex);
    std::string restOfWord = word.substr(firstVowelIndex);

    return restOfWord + consonants + "ay";
}

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    std::string translatedSentence = "";
    std::string currentWord = "";
    for (char c : sentence) {
        if (std::isalpha(c)) { 
            currentWord += c;
        } else {
            if (!currentWord.empty()) {
                translatedSentence += toPigLatin(currentWord) + " ";
                currentWord = "";
            }
            translatedSentence += c; 
        }
    }
    if (!currentWord.empty()) {
        translatedSentence += toPigLatin(currentWord);
    }

    std::cout << "Pig Latin translation: " << translatedSentence << std::endl;

    return 0;
}
