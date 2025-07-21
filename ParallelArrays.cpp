#include <iostream>
#include <string>

int main() {
    const int NUM_STUDENTS = 3;

    std::string names[NUM_STUDENTS] = {"Alice", "Bob", "Charlie"};
    int ages[NUM_STUDENTS] = {20, 22, 21};
    double grades[NUM_STUDENTS] = {92.5, 88.0, 95.2};

    for (int i = 0; i < NUM_STUDENTS; ++i) {
        std::cout << "Student " << (i + 1) << ": "
                  << "Name: " << names[i]
                  << ", Age: " << ages[i]
                  << ", Grade: " << grades[i] << std::endl;
    }

    return 0;
}