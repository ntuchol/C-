#include <iostream>
#include <vector>

// Define board dimensions
const int ROWS = 6;
const int COLS = 7;

// Function prototypes
void initializeBoard(std::vector<std::vector<char>>& board);
void displayBoard(const std::vector<std::vector<char>>& board);
bool dropPiece(std::vector<std::vector<char>>& board, int col, char playerPiece);
bool checkWin(const std::vector<std::vector<char>>& board, char playerPiece);
bool checkDraw(const std::vector<std::vector<char>>& board);

int main() {
    std::vector<std::vector<char>> board(ROWS, std::vector<char>(COLS, ' ')); // Initialize with empty spaces
    initializeBoard(board);

    char currentPlayer = 'X'; // Player 1 starts
    bool gameOver = false;

    while (!gameOver) {
        displayBoard(board);

        int col;
        std::cout << "Player " << currentPlayer << ", enter column (0-6): ";
        std::cin >> col;

        if (col < 0 || col >= COLS) {
            std::cout << "Invalid column. Try again." << std::endl;
            continue;
        }

        if (dropPiece(board, col, currentPlayer)) {
            if (checkWin(board, currentPlayer)) {
                displayBoard(board);
                std::cout << "Player " << currentPlayer << " wins!" << std::endl;
                gameOver = true;
            } else if (checkDraw(board)) {
                displayBoard(board);
                std::cout << "It's a draw!" << std::endl;
                gameOver = true;
            } else {
                // Switch player
                currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
            }
        } else {
            std::cout << "Column is full. Try again." << std::endl;
        }
    }

    return 0;
}