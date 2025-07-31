#include <iostream>
#include <vector>
#include <string>
#include <set> // To store found words and avoid duplicates

// Define a Trie class for dictionary lookup
class Trie {
    // ... implementation for insert, contains, containsPrefix ...
};

class BoggleSolver {
public:
    BoggleSolver(const std::vector<std::vector<char>>& board, const Trie& dictionary);
    std::set<std::string> findAllWords();

private:
    void findWordsRecursive(int row, int col, std::string currentWord,
                            std::vector<std::vector<bool>>& visited);

    std::vector<std::vector<char>> board_;
    const Trie& dictionary_;
    std::set<std::string> foundWords_;
};
