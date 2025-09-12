 #include <vector>
 #include <algorithm> 

    int main() {
        std::vector<int> v = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};

        std::make_heap(v.begin(), v.end());

        return 0;
    }
