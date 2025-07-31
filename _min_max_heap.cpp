#include <queue>
#include <vector>

        std::priority_queue<int> max_heap; // Default: max-heap
        
#include <queue>
#include <vector>
#include <functional> // For std::greater

        std::priority_queue<int, std::vector<int>, std::greater<int>> min_heap; // Min-heap