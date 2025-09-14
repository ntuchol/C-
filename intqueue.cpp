#include <iostream>
#include <queue> 
int main() {
    std::queue<int> myIntQueue; 
    
    myIntQueue.push(10);
    myIntQueue.push(20);
    myIntQueue.push(30);

    std::cout << "Front element: " << myIntQueue.front() << std::endl; 

    myIntQueue.pop(); 

    while (!myIntQueue.empty()) {
        std::cout << "Dequeued: " << myIntQueue.front() << std::endl;
        myIntQueue.pop();
    }

    return 0;
}
