#include <iostream>
#include <cstdlib> 
#include <ctime>   

void takeStep(int& x, int& y) {
    int direction = rand() % 4; 
    
    if (direction == 0) { 
        y++;
    } else if (direction == 1) { 
        x++;
    } else if (direction == 2) { 
        y--;
    } else { 
        x--;
    }
}

int main() {
    srand(time(0)); 
    
    int N; 
    std::cout << "Enter the number of steps (N): ";
    std::cin >> N;

    int x = 0; 
    int y = 0; 

    std::cout << "Initial location: (" << x << ", " << y << ")\n";

    for (int i = 0; i < N; ++i) {
        takeStep(x, y);
        std::cout << "Step " << i + 1 << ": (" << x << ", " << y << ")\n";
    }

    std::cout << "Final location: (" << x << ", " << y << ")\n";
    long long squared_distance = static_cast<long long>(x) * x + static_cast<long long>(y) * y;
    std::cout << "Squared distance from origin: " << squared_distance << "\n";
    return 0;
}
