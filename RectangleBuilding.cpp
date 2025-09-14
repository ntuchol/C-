#include <iostream>

struct Rectangle {
    double length;
    double width;
};

int main() {
    Rectangle building;
    building.length = 50.0; 
    building.width = 30.0;  

    std::cout << "Building Length: " << building.length << " meters" << std::endl;
    std::cout << "Building Width: " << building.width << " meters" << std::endl;

    return 0;
}
