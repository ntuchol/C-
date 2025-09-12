#include <iostream> 
#include <random>  
#include <ctime>    

int main() {
    int min_val = 1;
    int max_val = 6;

    std::mt19937 generator(static_cast<unsigned int>(std::time(0)));

    std::uniform_int_distribution<> distribution(min_val, max_val);

    int dice_roll_result = distribution(generator);

    std::cout << "The dice rolled: " << dice_roll_result << std::endl;

    return 0; 
}
