#include <iostream>
#include <queue>
#include <random>

struct Customer {
    int arrivalTime;
    int transactionTime;
};

struct Event {
    enum EventType { ARRIVAL, DEPARTURE };
    EventType type;
    int time;
    Customer customer; 

bool operator>(const Event& other) const {
        return time > other.time;
    }
};

void simulateBank(double arrivalRate, int numTellers, int simulationTime) {
    std::priority_queue<Event, std::vector<Event>, std::greater<Event>> eventList; 
    std::queue<Customer> bankQueue; 

    std::random_device rd;
    std::mt19937 gen(rd());
    std::exponential_distribution<double> arrivalDistribution(arrivalRate); 

    Event initialArrival;
    initialArrival.type = Event::ARRIVAL;
    initialArrival.time = 0; 
    eventList.push(initialArrival);

    int currentTime = 0;
    int numCustomersServed = 0;
    int totalWaitTime = 0;

    while (currentTime <= simulationTime && !eventList.empty()) {
        Event currentEvent = eventList.top();
        eventList.pop();
        currentTime = currentEvent.time;

        if (currentEvent.type == Event::ARRIVAL) {
            int nextArrivalTime = currentTime + static_cast<int>(arrivalDistribution(gen)); 
            Event nextArrival;
            nextArrival.type = Event::ARRIVAL;
            nextArrival.time = nextArrivalTime;
            if (nextArrivalTime <= simulationTime) { 
                eventList.push(nextArrival);
            }


        } else { 
        }
    }

    // Output statistics (average wait time, number of customers served, etc.)
    std::cout << "Simulation finished." << std::endl;
    std::cout << "Total customers served: " << numCustomersServed << std::endl;
    // ...
}

int main() {
    // Call simulateBank with desired parameters (arrival rate, number of tellers, simulation time)
    simulateBank(0.2, 1, 100); 
    return 0;
}
