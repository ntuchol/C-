#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

int main() {
    srand(time(NULL)); // Seed the random number generator

    int current_position = 0;
    int num_steps = 10;

    std::cout << "Starting position: " << current_position << std::endl;

    for (int i = 0; i < num_steps; ++i) {
        int direction = rand() % 2; // 0 for left, 1 for right

        if (direction == 0) {
            current_position--; // Move left
        } else {
            current_position++; // Move right
        }
        std::cout << "After step " << i + 1 << ": " << current_position << std::endl;
    }

    return 0;
}