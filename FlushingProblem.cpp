 #include <iostream>

    int main() {
        std::cout << "Progress: " << std::flush; // Flushes without newline
        // ... perform some long operation ...
        std::cout << "Done." << std::endl;
        return 0;
    }