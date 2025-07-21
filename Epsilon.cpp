#include <iostream>
    #include <limits>

    int main() {
        double epsilon_d = std::numeric_limits<double>::epsilon();
        float epsilon_f = std::numeric_limits<float>::epsilon();

        std::cout << "Machine epsilon for double: " << epsilon_d << std::endl;
        std::cout << "Machine epsilon for float: " << epsilon_f << std::endl;

        // Example of approximate comparison
        double a = 0.1 + 0.2;
        double b = 0.3;

        if (std::abs(a - b) < epsilon_d) {
            std::cout << "a and b are approximately equal." << std::endl;
        } else {
            std::cout << "a and b are not approximately equal." << std::endl;
        }

        return 0;
    }