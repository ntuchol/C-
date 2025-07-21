 #include <algorithm>
    #include <vector>
    #include <random>
    #include <chrono> // For seeding

    std::vector<int> myVector = {1, 2, 3, 4, 5};

    // Create a random number generator and seed it
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    std::shuffle(myVector.begin(), myVector.end(), generator);
    
    template<class RandomIt>
    void random_shuffle(RandomIt first, RandomIt last);

    template<class RandomIt, class Predicate>
    void random_shuffle(RandomIt first, RandomIt last, Predicate pred);