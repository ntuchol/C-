#include <iostream>
#include <cstdlib> 
#include <ctime>   

std::string coinToss() {
    int result = rand() % 2; 

    if (result == 0) {
        return "Heads";
    } else {
        return "Tails";
    }
}

int main() {
    srand(static_cast<unsigned int>(time(NULL))); 

    int numTosses;
    std::cout << "Enter the number of coin tosses: ";
    std::cin >> numTosses;

    for (int i = 0; i < numTosses; ++i) {
        std::cout << "Toss " << (i + 1) << ": " << coinToss() << std::endl;
    }

    return 0;
}
