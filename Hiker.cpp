#include <iostream>
#include <vector>

// Represents a 2D point on the map
struct Point {
    int x;
    int y;
};

// Represents the hiker
struct Hiker {
    Point currentPosition;
    std::vector<Point> trail; // Stores the path taken
};

int main() {
    // Create a hiker object
    Hiker hiker;
    hiker.currentPosition = {0, 0};
    hiker.trail.push_back(hiker.currentPosition); // Add starting position to trail

    // Simulate movement
    hiker.currentPosition = {1, 0};
    hiker.trail.push_back(hiker.currentPosition);

    hiker.currentPosition = {1, 1};
    hiker.trail.push_back(hiker.currentPosition);

    // Print current position
    std::cout << "Hiker's current position: (" << hiker.currentPosition.x << ", " << hiker.currentPosition.y << ")" << std::endl;

    // Print the trail
    std::cout << "Hiker's trail:" << std::endl;
    for (const auto& point : hiker.trail) {
        std::cout << "(" << point.x << ", " << point.y << ") ";
    }
    std::cout << std::endl;

    return 0;
}