#include <random>
#include <iostream>

int main() {
    std::mt19937 gen(std::random_device{}()); 

    std::uniform_int_distribution<> distrib(1, 10); 

    for (int i = 0; i < 5; ++i) {
        std::cout << distrib(gen) << " ";
    }
    std::cout << std::endl;

    return 0;
}

#include <random>
#include <iostream>

int main() {
    std::mt19937 gen(std::random_device{}());

    std::uniform_real_distribution<> distrib(0.0, 1.0); 

    for (int i = 0; i < 5; ++i) {
        std::cout << distrib(gen) << " ";
    }
    std::cout << std::endl;

    return 0;
}
