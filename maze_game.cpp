#include <iostream>
#include <vector>

// Define maze dimensions
const int MAZE_ROWS = 10;
const int MAZE_COLS = 20;

// Function to print the maze
void printMaze(const std::vector<std::vector<char>>& maze) {
    for (const auto& row : maze) {
        for (char cell : row) {
            std::cout << cell;
        }
        std::cout << std::endl;
    }
}

int main() {
    // Example maze (can be generated or loaded)
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

    // Game loop
    while (true) {
        printMaze(maze);

        char move;
        std::cout << "Enter move (w/a/s/d): ";
        std::cin >> move;

        int newPlayerRow = playerRow;
        int newPlayerCol = playerCol;

        // Update player position based on input
        if (move == 'w') newPlayerRow--;
        else if (move == 's') newPlayerRow++;
        else if (move == 'a') newPlayerCol--;
        else if (move == 'd') newPlayerCol++;

        // Check for valid move and update maze
        if (newPlayerRow >= 0 && newPlayerRow < MAZE_ROWS &&
            newPlayerCol >= 0 && newPlayerCol < MAZE_COLS &&
            maze[newPlayerRow][newPlayerCol] != '#') {

            maze[playerRow][playerCol] = ' '; // Clear old position
            playerRow = newPlayerRow;
            playerCol = newPlayerCol;
            maze[playerRow][playerCol] = 'P'; // Set new position

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
