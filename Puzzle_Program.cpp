#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <unordered_set> 

std::vector<std::string> readGrid(const std::string& filename) {
}

std::unordered_set<std::string> readDictionary(const std::string& filename) {
}

bool searchWordInDirection(const std::vector<std::string>& grid, const std::string& word,
                           int startRow, int startCol, int dRow, int dCol) {
}

void findWords(const std::vector<std::string>& grid, const std::unordered_set<std::string>& dictionary) {
}

int main() {
    std::vector<std::string> grid = readGrid("grid.txt");
    std::unordered_set<std::string> dictionary = readDictionary("dictionary.txt");

    findWords(grid, dictionary);

    return 0;
}
