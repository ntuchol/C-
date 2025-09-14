#include <iostream>
#include <queue>
#include <string>
#include <vector>

std::string hotPotato(const std::vector<std::string>& nameList, int num) {
    std::queue<std::string> simQueue;

    for (const std::string& name : nameList) {
        simQueue.push(name);
    }

    while (simQueue.size() > 1) {
        for (int pass = 0; pass < num; ++pass) {
            simQueue.push(simQueue.front());
            simQueue.pop();
        }

        std::string removedPerson = simQueue.front();
        simQueue.pop();
        std::cout << removedPerson << " is out of the game." << std::endl;
    }

    return simQueue.front();
}

int main() {
    std::vector<std::string> people = {"Bill", "David", "Susan", "Jane", "Kent", "Brad"};
    int passes = 7; 
    
    std::string winner = hotPotato(people, passes);
    std::cout << "The last person remaining is " << winner << "." << std::endl;

    return 0;
}
