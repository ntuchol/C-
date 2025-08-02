int arr[10]; // Declares a bounded array of 10 integers
const int SIZE = 5;
double data[SIZE]; // Declares a bounded array of 5 doubles

#include <array>
#include <iostream>

    std::array<int, 5> my_array; // Declares a std::array of 5 integers
    my_array.at(0) = 10; // Safe access with bounds checking
    try {
        my_array.at(5) = 20; // This will throw an exception
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }