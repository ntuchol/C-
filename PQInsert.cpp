#include <iostream>
#include <queue> // Required for std::priority_queue

int main() {
    // Create a max-heap priority queue of integers (default behavior)
    std::priority_queue<int> pq;

    // Insert elements using push()
    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(20);

    // Display elements (top has highest priority)
    std::cout << "Elements in the priority queue (from top): ";
    while (!pq.empty()) {
        std::cout << pq.top() << " ";
        pq.pop(); // Remove the top element
    }
    std::cout << std::endl;

    return 0;
}