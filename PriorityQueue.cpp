#include <iostream>
#include <queue> // Required for std::priority_queue

int main() {
    // Create a priority queue of integers (default: max-heap)
    std::priority_queue<int> pq;

    // Push elements
    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(20);

    // Access and remove elements based on priority
    while (!pq.empty()) {
        std::cout << pq.top() << " "; // Output: 50 30 20 10
        pq.pop();
    }
    std::cout << std::endl;

    // Create a min-heap by providing a custom comparator (std::greater)
    std::priority_queue<int, std::vector<int>, std::greater<int>> min_pq;
    min_pq.push(30);
    min_pq.push(10);
    min_pq.push(50);
    min_pq.push(20);

    while (!min_pq.empty()) {
        std::cout << min_pq.top() << " "; // Output: 10 20 30 50
        min_pq.pop();
    }
    std::cout << std::endl;

    return 0;
}