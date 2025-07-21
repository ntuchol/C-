    #include <vector>
    #include <algorithm> // For std::swap

    // A simple custom bubble sort implementation
    template <typename RandomAccessIterator>
    void custom_bubble_sort(RandomAccessIterator first, RandomAccessIterator last) {
        bool swapped;
        do {
            swapped = false;
            for (auto it = first; std::next(it) != last; ++it) {
                if (*it > *std::next(it)) {
                    std::swap(*it, *std::next(it));
                    swapped = true;
                }
            }
        } while (swapped);
    }

    // Example usage:
  std::vector<int> my_vec = {5, 2, 8, 1, 9};
  custom_bubble_sort(my_vec.begin(), my_vec.end());