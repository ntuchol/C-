#include <vector>
#include <iostream>

int main() {
    // Declare a vector to store 25 integer grades
    std::vector<int> grades(25); 

    // Initialize or populate the grades (example)
    for (int i = 0; i < 25; ++i) {
        grades[i] = 70 + i; // Assign some sample grades
    }

    // Access and print the grades
    for (int i = 0; i < 25; ++i) {
        std::cout << "Grade " << i + 1 << ": " << grades[i] << std::endl;
    }

    return 0;
}