#include <vector>
#include <cmath> // For abs()

// Function to check if placing a queen at board[row][col] is safe
bool isSafe(const std::vector<int>& board, int row, int col) {
    // Check if any previously placed queen attacks the current position
    for (int i = 0; i < row; ++i) {
        // Check same column or diagonals
        if (board[i] == col || std::abs(board[i] - col) == std::abs(i - row)) {
            return false;
        }
    }
    return true; // No conflicts found
}

// Recursive function to place queens
void placeQueens(int n, int row, std::vector<int>& board, std::vector<std::vector<int>>& solutions) {
    // Base case: All queens are placed
    if (row == n) {
        solutions.push_back(board); // Add the current configuration to solutions
        return;
    }

    // Try placing a queen in each column of the current row
    for (int col = 0; col < n; ++col) {
        if (isSafe(board, row, col)) {
            board[row] = col; // Place the queen
            placeQueens(n, row + 1, board, solutions); // Recurse for the next row
            // Backtrack: Remove the queen if the current placement doesn't lead to a solution
            // (not strictly necessary here as `board[row]` will be overwritten in the next iteration)
        }
    }
}

// Main function to solve N-Queens
std::vector<std::vector<int>> solveNQueens(int n) {
    std::vector<std::vector<int>> solutions;
    std::vector<int> board(n); // board[i] stores the column of the queen in row i
    placeQueens(n, 0, board, solutions); // Start placing from row 0
    return solutions;
}