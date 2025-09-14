#include <iostream>
#include <vector>

const int N = 8; 

int board[N][N];
int xMove[] = {2, 1, -1, -2, -2, -1, 1, 2};
int yMove[] = {1, 2, 2, 1, -1, -2, -2, -1};

bool isSafe(int x, int y) {
    return (x >= 0 && x < N && y >= 0 && y < N && board[x][y] == -1);
}

bool solveKnightTour(int x, int y, int moveCount) {
    if (moveCount == N * N) {
        return true;
    }

    for (int i = 0; i < 8; i++) {
        int nextX = x + xMove[i];
        int nextY = y + yMove[i];
        if (isSafe(nextX, nextY)) {
            board[nextX][nextY] = moveCount;
            if (solveKnightTour(nextX, nextY, moveCount + 1)) {
                return true;
            } else {
                board[nextX][nextY] = -1; // Backtrack
            }
        }
    }
    return false;
}

// ...
