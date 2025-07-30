 #include <vector>
    #include <algorithm> // For std::make_heap

    int main() {
        std::vector<int> v = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};

        // Build a max-heap
        std::make_heap(v.begin(), v.end());

        // Now v is a max-heap, with the largest element at v.front()
        // For example, v.front() would be 16
        return 0;
    }