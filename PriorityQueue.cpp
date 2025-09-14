#include <queue>
#include <vector>
#include <iostream>
#include <functional> 
int main() {
    std::priority_queue<int> max_pq;
    max_pq.push(10);
    max_pq.push(5);
    max_pq.push(20);
    std::cout << "Max-heap top: " << max_pq.top() << std::endl; 

    std::priority_queue<int, std::vector<int>, std::greater<int>> min_pq;
    min_pq.push(10);
    min_pq.push(5);
    min_pq.push(20);
    std::cout << "Min-heap top: " << min_pq.top() << std::endl; 

    return 0;
}

