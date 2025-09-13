#include <iostream>
#include <set> 
enum Direction { UP, DOWN, IDLE };

class Elevator {
public:
    int currentFloor;
    Direction direction;
    std::set<int> destinationFloors; 
    Elevator(int initialFloor = 1) : currentFloor(initialFloor), direction(IDLE) {}

    void requestFloor(int floor) {
        if (floor >= 1) { 
            destinationFloors.insert(floor);
            std::cout << "Request received for floor " << floor << std::endl;
        }
    }

    void move() {
        if (destinationFloors.empty()) {
            direction = IDLE;
            return;
        }

        if (direction == IDLE) {
            if (*destinationFloors.begin() > currentFloor) {
                direction = UP;
            } else if (*destinationFloors.begin() < currentFloor) {
                direction = DOWN;
            }
        }

        if (direction == UP) {
            currentFloor++;
            std::cout << "Moving UP to floor " << currentFloor << std::endl;
        } else if (direction == DOWN) {
            currentFloor--;
            std::cout << "Moving DOWN to floor " << currentFloor << std::endl;
        }

        if (destinationFloors.count(currentFloor)) {
            std::cout << "Arrived at floor " << currentFloor << ". Doors opening..." << std::endl;
            destinationFloors.erase(currentFloor); 
            std::cout << "Doors closing." << std::endl;
        }
    }

    void displayStatus() {
        std::cout << "Elevator at Floor: " << currentFloor << ", Direction: ";
        if (direction == UP) std::cout << "UP";
        else if (direction == DOWN) std::cout << "DOWN";
        else std::cout << "IDLE";
        std::cout << std::endl;
    }
};

int main() {
    Elevator myElevator;
    myElevator.displayStatus();

    myElevator.requestFloor(5);
    myElevator.requestFloor(2);
    myElevator.requestFloor(8);

    for (int i = 0; i < 10; ++i) { 
        myElevator.move();
        myElevator.displayStatus();
    }

    return 0;
}
