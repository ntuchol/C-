#include <iostream>

// Function to print a row of a specific color
void printRow(char colorChar, int length) {
    for (int i = 0; i < length; ++i) {
        std::cout << colorChar;
    }
}

int main() {
    // Define characters for blue and white
    char blueChar = '#'; // Or a different character for blue
    char whiteChar = ' '; // Or a different character for white

    // Flag dimensions (simplified for console display)
    int stripeWidth = 20;
    int stripeHeight = 1;
    int crossArmLength = 5;

    // Top section with cross
    for (int i = 0; i < crossArmLength * 2 + stripeHeight; ++i) {
        if (i >= crossArmLength && i < crossArmLength + stripeHeight) { // Horizontal arm of cross
            printRow(whiteChar, crossArmLength * 2 + stripeHeight); // White cross and surrounding blue
            printRow(blueChar, stripeWidth - (crossArmLength * 2 + stripeHeight)); // Rest of the blue stripe
        } else { // Blue rows around the cross
            printRow(blueChar, crossArmLength);
            printRow(whiteChar, stripeHeight); // Vertical arm of cross
            printRow(blueChar, crossArmLength);
            printRow(blueChar, stripeWidth - (crossArmLength * 2 + stripeHeight));
        }
        std::cout << std::endl;
    }

    // Remaining stripes
    for (int i = 0; i < 4; ++i) { // 4 remaining stripes (total 9, 5 blue, 4 white)
        if (i % 2 == 0) { // White stripe
            printRow(whiteChar, stripeWidth);
        } else { // Blue stripe
            printRow(blueChar, stripeWidth);
        }
        std::cout << std::endl;
    }

    return 0;
}