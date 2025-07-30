#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <unordered_set> // For efficient dictionary lookups

// Function to read the grid from a file
std::vector<std::string> readGrid(const std::string& filename) {
    // ... implementation to read grid into a vector of strings
}

// Function to read the dictionary from a file
std::unordered_set<std::string> readDictionary(const std::string& filename) {
    // ... implementation to read words into an unordered_set
}

// Function to search for a word in a specific direction from a starting point
bool searchWordInDirection(const std::vector<std::string>& grid, const std::string& word,
                           int startRow, int startCol, int dRow, int dCol) {
    // ... implementation to check for word in given direction
}

// Main function to find all words
void findWords(const std::vector<std::string>& grid, const std::unordered_set<std::string>& dictionary) {
    // Iterate through dictionary words
    // Iterate through grid cells (startRow, startCol)
    // Iterate through 8 directions (dRow, dCol)
    // Call searchWordInDirection
    // Print found words and their locations
}

int main() {
    std::vector<std::string> grid = readGrid("grid.txt");
    std::unordered_set<std::string> dictionary = readDictionary("dictionary.txt");

    findWords(grid, dictionary);

    return 0;
}