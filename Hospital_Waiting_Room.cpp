#include <queue> 
#include <string>
#include <iostream>

class Patient {
public:
    std::string name;
    int priority; 
    Patient(std::string n, int p) : name(n), priority(p) {}

    
    bool operator<(const Patient& other) const {
        return priority > other.priority; 
    }
};

int main() {
    std::priority_queue<Patient> waitingRoom;

    waitingRoom.push(Patient("Alice", 3)); 
    waitingRoom.push(Patient("Bob", 1));  
    waitingRoom.push(Patient("Charlie", 2)); 

    std::cout << "Patients in waiting room (by priority):" << std::endl;
    while (!waitingRoom.empty()) {
        Patient nextPatient = waitingRoom.top();
        waitingRoom.pop();
        std::cout << nextPatient.name << " (Priority: " << nextPatient.priority << ")" << std::endl;
    }

    return 0;
}
