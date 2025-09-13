#include <vector>
#include <iostream>

int main() {
    std::vector<int> grades(25); 

    for (int i = 0; i < 25; ++i) {
        grades[i] = 70 + i; 
    }

    for (int i = 0; i < 25; ++i) {
        std::cout << "Grade " << i + 1 << ": " << grades[i] << std::endl;
    }

    return 0;
}
