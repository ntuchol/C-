#include <cstdlib> 
#include <ctime>   

srand(static_cast<unsigned int>(time(nullptr)));
    
int next_random_number = rand();

int random_0_to_99 = rand() % 100;

int random_1_to_100 = (rand() % 100) + 1;
