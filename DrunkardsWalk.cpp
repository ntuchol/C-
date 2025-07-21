#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

// Function to take a random step
void takeStep(int& x, int& y) {
    int direction = rand() % 4; // 0: North, 1: East, 2: South, 3: West

    if (direction == 0) { // North
        y++;
    } else if (direction == 1) { // East
        x++;
    } else if (direction == 2) { // South
        y--;
    } else { // West
        x--;
    }
}

int main() {
    srand(time(0)); // Seed the random number generator

    int N; // Number of steps
    std::cout << "Enter the number of steps (N): ";
    std::cin >> N;

    int x = 0; // Initial x-coordinate
    int y = 0; // Initial y-coordinate

    std::cout << "Initial location: (" << x << ", " << y << ")\n";

    for (int i = 0; i < N; ++i) {
        takeStep(x, y);
        // Optional: Print current location after each step or every few steps
        // std::cout << "Step " << i + 1 << ": (" << x << ", " << y << ")\n";
    }

    std::cout << "Final location: (" << x << ", " << y << ")\n";
    long long squared_distance = static_cast<long long>(x) * x + static_cast<long long>(y) * y;
    std::cout << "Squared distance from origin: " << squared_distance << "\n";

    return 0;
}