int arr[10]; 
const int SIZE = 5;
double data[SIZE]; 
#include <array>
#include <iostream>

    std::array<int, 5> my_array; 
    my_array.at(0) = 10; 
    try {
        my_array.at(5) = 20; 
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
