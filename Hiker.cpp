#include <iostream>
#include <vector>

struct Point {
    int x;
    int y;
};

struct Hiker {
    Point currentPosition;
    std::vector<Point> trail; 
};

int main() {
    Hiker hiker;
    hiker.currentPosition = {0, 0};
    hiker.trail.push_back(hiker.currentPosition); 
    hiker.currentPosition = {1, 0};
    hiker.trail.push_back(hiker.currentPosition);

    hiker.currentPosition = {1, 1};
    hiker.trail.push_back(hiker.currentPosition);

    std::cout << "Hiker's current position: (" << hiker.currentPosition.x << ", " << hiker.currentPosition.y << ")" << std::endl;

    std::cout << "Hiker's trail:" << std::endl;
    for (const auto& point : hiker.trail) {
        std::cout << "(" << point.x << ", " << point.y << ") ";
    }
    std::cout << std::endl;

    return 0;
}
