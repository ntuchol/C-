#include <iostream>
#include <vector>

const int N = 8; 

bool isSafe(std::vector<std::vector<int>>& board, int row, int col) {
    for (int i = 0; i < col; i++) {
        if (board[row][i] == 1) {
            return false;
        }
    }

    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    for (int i = row, j = col; i < N && j >= 0; i++, j--) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    return true;
}

bool solveNQueens(std::vector<std::vector<int>>& board, int col) {
    if (col >= N) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                std::cout << board[i][j] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl; 
        return true; 
    }

    for (int i = 0; i < N; i++) {
        if (isSafe(board, i, col)) {
            board[i][col] = 1; 
            solveNQueens(board, col + 1); 

            board[i][col] = 0; 
        }
    }
    return false; 
}

int main() {
    std::vector<std::vector<int>> board(N, std::vector<int>(N, 0));
    solveNQueens(board, 0); 
    return 0;
}
