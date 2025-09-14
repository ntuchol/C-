#include <iostream>
#include <cstdlib> 
#include <ctime>   

int main() {
    srand(time(NULL)); 

    int current_position = 0;
    int num_steps = 10;

    std::cout << "Starting position: " << current_position << std::endl;

    for (int i = 0; i < num_steps; ++i) {
        int direction = rand() % 2; 
        if (direction == 0) {
            current_position--; 
        } else {
            current_position++; 
        }
        std::cout << "After step " << i + 1 << ": " << current_position << std::endl;
    }

    return 0;
}
