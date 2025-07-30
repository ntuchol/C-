#include <iostream>
#include <string>
#include <vector>
#include <cctype> // For tolower()

// Function to check if a character is a vowel
bool isVowel(char c) {
    c = std::tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Function to translate a single word to Pig Latin
std::string toPigLatin(const std::string& word) {
    if (word.empty()) {
        return "";
    }

    // Handle words starting with vowels
    if (isVowel(word[0])) {
        return word + "way";
    }

    // Handle words starting with consonants
    size_t firstVowelIndex = 0;
    while (firstVowelIndex < word.length() && !isVowel(word[firstVowelIndex]) && word[firstVowelIndex] != 'y') {
        firstVowelIndex++;
    }

    // Special case for 'y' as a consonant at the beginning
    if (firstVowelIndex == 0 && word[0] == 'y') {
        firstVowelIndex = 1; // Treat 'y' as a consonant
    }

    if (firstVowelIndex == word.length()) { // No vowels found
        return word + "ay"; // Or handle as an error/special case
    }

    std::string consonants = word.substr(0, firstVowelIndex);
    std::string restOfWord = word.substr(firstVowelIndex);

    return restOfWord + consonants + "ay";
}

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    // Basic word splitting (can be improved for punctuation)
    std::string translatedSentence = "";
    std::string currentWord = "";
    for (char c : sentence) {
        if (std::isalpha(c)) { // Consider only alphabetic characters for words
            currentWord += c;
        } else {
            if (!currentWord.empty()) {
                translatedSentence += toPigLatin(currentWord) + " ";
                currentWord = "";
            }
            translatedSentence += c; // Add non-alphabetic characters back
        }
    }
    if (!currentWord.empty()) {
        translatedSentence += toPigLatin(currentWord);
    }

    std::cout << "Pig Latin translation: " << translatedSentence << std::endl;

    return 0;
}