#include <iostream>
    #include <vector>
    #include <numeric> 

    int josephus_simulation(int n, int k) {
        std::vector<int> people(n);
        std::iota(people.begin(), people.end(), 1); 

        int current_pos = 0;
        while (people.size() > 1) {
            current_pos = (current_pos + k - 1) % people.size();
            people.erase(people.begin() + current_pos);
        }
        return people[0];
    }
