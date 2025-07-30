int josephus(int n, int k) {
        if (n == 1) {
            return 1;
        } else {
            // The position of the survivor in a circle of n-1 people,
            // shifted by k-1 and then taken modulo n to wrap around,
            // and finally adding 1 to convert from 0-indexed to 1-indexed.
            return ((josephus(n - 1, k) + k - 1) % n) + 1;
        }
    }
#include <vector>
    #include <numeric>

    int josephus_iterative(int n, int k) {
        std::vector<int> people(n);
        std::iota(people.begin(), people.end(), 1); // Fill with 1 to n

        int current_index = 0;
        while (people.size() > 1) {
            current_index = (current_index + k - 1) % people.size();
            people.erase(people.begin() + current_index);
        }
        return people[0];
    }