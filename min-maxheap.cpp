 #include <queue>
        #include <vector>
        #include <functional> // For std::greater

        // Min-heap of integers
        std::priority_queue<int, std::vector<int>, std::greater<int>> min_pq;
  #include <queue>
  #include <vector>

        // Max-heap of integers (default behavior)
        std::priority_queue<int> max_pq;