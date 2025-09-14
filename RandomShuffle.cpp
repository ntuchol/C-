#include <vector>
#include <algorithm> 
#include <random>   
#include <chrono>    

int main() {
    std::vector<int> myVector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::chrono::system_clock::now().time_since_epoch().count() 
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine rng(seed); 

    std::shuffle(myVector.begin(), myVector.end(), rng);

    return 0;
}
