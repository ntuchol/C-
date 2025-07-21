double original_value = 10.5;
double first_half = original_value / 2.0; // first_half will be 5.25

#include <vector>
    #include <iostream>

    int main() {
        std::vector<double> numbers = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
        size_t half_size = numbers.size() / 2;

        std::cout << "First half of the vector:" << std::endl;
        for (size_t i = 0; i < half_size; ++i) {
            std::cout << numbers[i] << " ";
        }
        std::cout << std::endl;
        return 0;
    }