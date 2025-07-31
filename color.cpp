#include <iostream>
#include <windows.h>

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Set text color to red (using a predefined attribute value)
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    std::cout << "This text is red." << std::endl;

    // Set text color back to default white
    SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "This text is white again." << std::endl;

    // You can combine attributes for foreground and background colors
    // For example, red text on a yellow background:
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | BACKGROUND_YELLOW);
    std::cout << "Red text on yellow background." << std::endl;

    // Reset to default
    SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    return 0;
}