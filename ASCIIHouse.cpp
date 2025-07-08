#include <iostream> // Required for input/output operations

int main() {
    // Print the roof of the house
    std::cout << "      /\\    " << std::endl;
    std::cout << "     /  \\   " << std::endl;
    std::cout << "    /____\\  " << std::endl;

    // Print the body of the house
    std::cout << "    |    |  " << std::endl;
    std::cout << "    | [] |  " << std::endl; // Window
    std::cout << "    |    |  " << std::endl;
    std::cout << "    | [] |  " << std::endl; // Window
    std::cout << "    |____|  " << std::endl;

    // Print the door
    std::cout << "    | || |  " << std::endl; // Door
    std::cout << "    |____|  " << std::endl;

    return 0; // Indicate successful program execution
}