#include <queue> // For std::priority_queue
#include <string>
#include <iostream>

class Patient {
public:
    std::string name;
    int priority; // Lower number = higher priority (e.g., 1 for critical)

    Patient(std::string n, int p) : name(n), priority(p) {}

    // Custom comparator for priority_queue (min-heap for priority)
    bool operator<(const Patient& other) const {
        return priority > other.priority; // Min-heap based on priority
    }
};

int main() {
    // Priority queue to simulate the waiting room (min-heap based on priority)
    std::priority_queue<Patient> waitingRoom;

    waitingRoom.push(Patient("Alice", 3)); // Lower priority
    waitingRoom.push(Patient("Bob", 1));   // Highest priority
    waitingRoom.push(Patient("Charlie", 2)); // Medium priority

    std::cout << "Patients in waiting room (by priority):" << std::endl;
    while (!waitingRoom.empty()) {
        Patient nextPatient = waitingRoom.top();
        waitingRoom.pop();
        std::cout << nextPatient.name << " (Priority: " << nextPatient.priority << ")" << std::endl;
    }

    return 0;
}