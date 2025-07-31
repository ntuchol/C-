#include <cstdlib> // For rand() and srand()
    #include <ctime>   // For time()

    // ... inside main or another function
    srand(static_cast<unsigned int>(time(nullptr)));
    
int next_random_number = rand();

// Generate a random number between 0 and 99 (inclusive)
    int random_0_to_99 = rand() % 100;

    // Generate a random number between 1 and 100 (inclusive)
    int random_1_to_100 = (rand() % 100) + 1;