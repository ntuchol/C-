#include <algorithm> 
#include <vector>    
#include <random>   
#include <iostream>  

int main() {
    std::vector<int> data(1000000); 
    for (int i = 0; i < data.size(); ++i) {
        data[i] = i;
    }

    std::mt19937 rng(std::random_device{}()); 

    std::shuffle(data.begin(), data.end(), rng);

    for (int i = 0; i < 10; ++i) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
