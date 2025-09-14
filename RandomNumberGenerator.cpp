#include <iostream>
#include <cstdlib> 
#include <ctime>   

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int randomNumber = rand();
    std::cout << "Random number: " << randomNumber << std::endl;

    int min = 1;
    int max = 100;
    int rangedNumber = (rand() % (max - min + 1)) + min;
    std::cout << "Random number (1-100): " << rangedNumber << std::endl;

    return 0;
}
