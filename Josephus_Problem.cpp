int josephus(int n, int k) {
        if (n == 1) {
            return 1;
        } else {
            return ((josephus(n - 1, k) + k - 1) % n) + 1;
        }
    }
#include <vector>
    #include <numeric>

    int josephus_iterative(int n, int k) {
        std::vector<int> people(n);
        std::iota(people.begin(), people.end(), 1);

        int current_index = 0;
        while (people.size() > 1) {
            current_index = (current_index + k - 1) % people.size();
            people.erase(people.begin() + current_index);
        }
        return people[0];
    }
