#include <iostream>

void printRow(char colorChar, int length) {
    for (int i = 0; i < length; ++i) {
        std::cout << colorChar;
    }
}

int main() {
    char blueChar = '#'; 
    char whiteChar = ' '; 
    int stripeWidth = 20;
    int stripeHeight = 1;
    int crossArmLength = 5;

    for (int i = 0; i < crossArmLength * 2 + stripeHeight; ++i) {
        if (i >= crossArmLength && i < crossArmLength + stripeHeight) { 
            printRow(whiteChar, crossArmLength * 2 + stripeHeight); 
            printRow(blueChar, stripeWidth - (crossArmLength * 2 + stripeHeight)); 
        } else { // Blue rows around the cross
            printRow(blueChar, crossArmLength);
            printRow(whiteChar, stripeHeight); 
            printRow(blueChar, crossArmLength);
            printRow(blueChar, stripeWidth - (crossArmLength * 2 + stripeHeight));
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < 4; ++i) { 
        if (i % 2 == 0) { 
            printRow(whiteChar, stripeWidth);
        } else { 
            printRow(blueChar, stripeWidth);
        }
        std::cout << std::endl;
    }

    return 0;
}
