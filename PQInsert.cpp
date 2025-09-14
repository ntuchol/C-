#include <iostream>
#include <queue> 
int main() {
    std::priority_queue<int> pq;

    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(20);

    std::cout << "Elements in the priority queue (from top): ";
    while (!pq.empty()) {
        std::cout << pq.top() << " ";
        pq.pop(); 
    }
    std::cout << std::endl;

    return 0;
}
