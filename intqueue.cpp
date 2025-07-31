#include <iostream>
#include <queue> // Required for std::queue

int main() {
    std::queue<int> myIntQueue; // Declare an int queue

    // Add elements to the queue
    myIntQueue.push(10);
    myIntQueue.push(20);
    myIntQueue.push(30);

    // Access the front element
    std::cout << "Front element: " << myIntQueue.front() << std::endl; // Output: 10

    // Remove elements from the queue
    myIntQueue.pop(); // Removes 10

    // Check if the queue is empty and print remaining elements
    while (!myIntQueue.empty()) {
        std::cout << "Dequeued: " << myIntQueue.front() << std::endl;
        myIntQueue.pop();
    }

    return 0;
}