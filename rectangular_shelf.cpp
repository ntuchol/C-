#include <iostream>

int main() {
    double shelfLength, shelfWidth, boxSideLength;

    std::cout << "Enter the length of the shelf: ";
    std::cin >> shelfLength;

    std::cout << "Enter the width of the shelf: ";
    std::cin >> shelfWidth;

    std::cout << "Enter the side length of the square box: ";
    std::cin >> boxSideLength;

    int boxesAlongLength = static_cast<int>(shelfLength / boxSideLength);

    int boxesAlongWidth = static_cast<int>(shelfWidth / boxSideLength);

    int totalBoxes = boxesAlongLength * boxesAlongWidth;

    std::cout << "You can fit " << totalBoxes << " square boxes on the shelf." << std::endl;

    return 0;
}
