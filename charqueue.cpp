#include <iostream>
#include <queue>

int main() {
    std::queue<char> charQueue;

    charQueue.push('X');
    charQueue.push('Y');
    charQueue.push('Z');

    std::cout << "Front element: " << charQueue.front() << std::endl;
    std::cout << "Back element: " << charQueue.back() << std::endl;
    std::cout << "Queue size: " << charQueue.size() << std::endl;

    charQueue.pop(); 

    std::cout << "Front element after pop: " << charQueue.front() << std::endl;

    while (!charQueue.empty()) {
        std::cout << "Dequeuing: " << charQueue.front() << std::endl;
        charQueue.pop();
    }

    return 0;
}
