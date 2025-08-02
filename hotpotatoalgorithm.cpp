#include <iostream>
#include <queue>
#include <string>
#include <vector>

std::string hotPotato(const std::vector<std::string>& nameList, int num) {
    std::queue<std::string> simQueue;

    // Enqueue all participants into the queue
    for (const std::string& name : nameList) {
        simQueue.push(name);
    }

    // Continue the game until only one participant remains
    while (simQueue.size() > 1) {
        // Simulate passing the potato 'num' times
        for (int pass = 0; pass < num; ++pass) {
            // Move the person at the front to the back of the queue
            simQueue.push(simQueue.front());
            simQueue.pop();
        }

        // The person at the front is eliminated
        std::string removedPerson = simQueue.front();
        simQueue.pop();
        std::cout << removedPerson << " is out of the game." << std::endl;
    }

    // The last remaining person is the winner
    return simQueue.front();
}

int main() {
    std::vector<std::string> people = {"Bill", "David", "Susan", "Jane", "Kent", "Brad"};
    int passes = 7; // Number of passes after which a person is eliminated

    std::string winner = hotPotato(people, passes);
    std::cout << "The last person remaining is " << winner << "." << std::endl;

    return 0;
}