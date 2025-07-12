#include <iostream>

int main() {
    // Declare variables for shelf dimensions and square box side length
    double shelfLength, shelfWidth, boxSideLength;

    // Get input from the user
    std::cout << "Enter the length of the shelf: ";
    std::cin >> shelfLength;

    std::cout << "Enter the width of the shelf: ";
    std::cin >> shelfWidth;

    std::cout << "Enter the side length of the square box: ";
    std::cin >> boxSideLength;

    // Calculate how many boxes fit along the length
    // We use integer division because we can only fit whole boxes.
    int boxesAlongLength = static_cast<int>(shelfLength / boxSideLength);

    // Calculate how many boxes fit along the width
    int boxesAlongWidth = static_cast<int>(shelfWidth / boxSideLength);

    // Calculate the total number of boxes
    int totalBoxes = boxesAlongLength * boxesAlongWidth;

    // Display the result
    std::cout << "You can fit " << totalBoxes << " square boxes on the shelf." << std::endl;

    return 0;
}