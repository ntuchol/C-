#include <iostream>
#include <vector>

const int N = 8; // For 8x8 board

// Function to check if a queen can be placed at board[row][col]
bool isSafe(std::vector<std::vector<int>>& board, int row, int col) {
    // Check row on left side
    for (int i = 0; i < col; i++) {
        if (board[row][i] == 1) {
            return false;
        }
    }

    // Check upper diagonal on left side
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    // Check lower diagonal on left side
    for (int i = row, j = col; i < N && j >= 0; i++, j--) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    return true;
}

// Function to solve the N-Queens problem using backtracking
bool solveNQueens(std::vector<std::vector<int>>& board, int col) {
    // Base case: If all queens are placed, return true
    if (col >= N) {
        // Print the solution
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                std::cout << board[i][j] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl; // Separator for multiple solutions
        return true; // Or false if only one solution is needed
    }

    // Consider this column and try placing queen in all rows
    for (int i = 0; i < N; i++) {
        if (isSafe(board, i, col)) {
            board[i][col] = 1; // Place queen

            // Recur to place rest of the queens
            solveNQueens(board, col + 1); // This will find all solutions

            board[i][col] = 0; // Backtrack: Remove queen
        }
    }
    return false; // No solution found for this path
}

int main() {
    std::vector<std::vector<int>> board(N, std::vector<int>(N, 0));
    solveNQueens(board, 0); // Start placing queens from column 0
    return 0;
}