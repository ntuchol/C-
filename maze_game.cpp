#include <iostream>
#include <vector>

const int MAZE_ROWS = 10;
const int MAZE_COLS = 20;

void printMaze(const std::vector<std::vector<char>>& maze) {
    for (const auto& row : maze) {
        for (char cell : row) {
            std::cout << cell;
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<std::vector<char>> maze = {
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', 'P', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
        {'#', ' ', '#', '#', '#', '#', '#', ' ', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', ' ', '#'},
        {'#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
        {'#', '#', '#', '#', '#', ' ', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', ' ', '#', '#'},
        {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
        {'#', ' ', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', ' ', '#'},
        {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', 'E', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}
    };

    int playerRow = 1;
    int playerCol = 1;

    while (true) {
        printMaze(maze);

        char move;
        std::cout << "Enter move (w/a/s/d): ";
        std::cin >> move;

        int newPlayerRow = playerRow;
        int newPlayerCol = playerCol;

        if (move == 'w') newPlayerRow--;
        else if (move == 's') newPlayerRow++;
        else if (move == 'a') newPlayerCol--;
        else if (move == 'd') newPlayerCol++;

        if (newPlayerRow >= 0 && newPlayerRow < MAZE_ROWS &&
            newPlayerCol >= 0 && newPlayerCol < MAZE_COLS &&
            maze[newPlayerRow][newPlayerCol] != '#') {

            maze[playerRow][playerCol] = ' '; 
            playerRow = newPlayerRow;
            playerCol = newPlayerCol;
            maze[playerRow][playerCol] = 'P'; 

            if (maze[playerRow][playerCol] == 'E') {
                std::cout << "Congratulations! You reached the exit!" << std::endl;
                break;
            }
        } else {
            std::cout << "Invalid move or hit a wall!" << std::endl;
        }
    }

    return 0;
}
