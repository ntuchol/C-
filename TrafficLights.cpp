#include <iostream>
#include <chrono>
#include <thread> // For std::this_thread::sleep_for

enum TrafficLightState { RED, YELLOW, GREEN };

void simulateTrafficLight() {
    TrafficLightState currentState = RED;

    while (true) {
        switch (currentState) {
            case RED:
                std::cout << "Traffic Light: RED - Stop!" << std::endl;
                std::this_thread::sleep_for(std::chrono::seconds(5)); // Red for 5 seconds
                currentState = GREEN;
                break;
            case GREEN:
                std::cout << "Traffic Light: GREEN - Go!" << std::endl;
                std::this_thread::sleep_for(std::chrono::seconds(7)); // Green for 7 seconds
                currentState = YELLOW;
                break;
            case YELLOW:
                std::cout << "Traffic Light: YELLOW - Prepare to stop!" << std::endl;
                std::this_thread::sleep_for(std::chrono::seconds(2)); // Yellow for 2 seconds
                currentState = RED;
                break;
        }
        std::cout << "--------------------" << std::endl;
    }
}

int main() {
    simulateTrafficLight();
    return 0;
}