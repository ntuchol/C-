#include <queue>
#include <vector>
#include <iostream>
#include <functional> // For std::greater

int main() {
    // Default max-heap (largest element at top)
    std::priority_queue<int> max_pq;
    max_pq.push(10);
    max_pq.push(5);
    max_pq.push(20);
    std::cout << "Max-heap top: " << max_pq.top() << std::endl; // Output: 20

    // Min-heap (smallest element at top) using std::greater
    std::priority_queue<int, std::vector<int>, std::greater<int>> min_pq;
    min_pq.push(10);
    min_pq.push(5);
    min_pq.push(20);
    std::cout << "Min-heap top: " << min_pq.top() << std::endl; // Output: 5

    return 0;
}

