#include <iostream>
#include <vector>

const int N = 8; 

int board[N][N];
int xMove[] = {2, 1, -1, -2, -2, -1, 1, 2};
int yMove[] = {1, 2, 2, 1, -1, -2, -2, -1};

bool isSafe(int x, int y) {
    return (x >= 0 && x < N && y >= 0 && y < N && board[x][y] == 0);
}

void printSolution() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << board[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

bool solveKnightTour(int x, int y, int moveCount) {
    if (moveCount == N * N) {
        return true; 
    }

    for (int i = 0; i < 8; i++) {
        int nextX = x + xMove[i];
        int nextY = y + yMove[i];

        if (isSafe(nextX, nextY)) {
            board[nextX][nextY] = moveCount + 1;
            if (solveKnightTour(nextX, nextY, moveCount + 1)) {
                return true;
            } else {
                board[nextX][nextY] = 0; 
            }
        }
    }
    return false;
}

int main() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            board[i][j] = 0;
        }
    }

    int startX = 0, startY = 0; 
    board[startX][startY] = 1;

    if (solveKnightTour(startX, startY, 1)) {
        printSolution();
    } else {
        std::cout << "Solution does not exist." << std::endl;
    }

    return 0;
}
