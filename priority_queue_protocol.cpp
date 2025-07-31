   #include <queue>
std::priority_queue<int> pq_max; // Max-heap of integers (default)
   std::priority_queue<int, std::vector<int>, std::greater<int>> pq_min; // Min-heap of integers