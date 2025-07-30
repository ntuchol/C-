#include <iostream>
#include <queue>
#include <random>

// Define structures for Customer and Event (as described above)
struct Customer {
    int arrivalTime;
    int transactionTime;
};

struct Event {
    enum EventType { ARRIVAL, DEPARTURE };
    EventType type;
    int time;
    Customer customer; // Associated customer

    // For priority queue ordering (by event time)
    bool operator>(const Event& other) const {
        return time > other.time;
    }
};

void simulateBank(double arrivalRate, int numTellers, int simulationTime) {
    std::priority_queue<Event, std::vector<Event>, std::greater<Event>> eventList; // Event list
    std::queue<Customer> bankQueue; // Customer waiting line

    // Initialize random number generator for arrivals
    std::random_device rd;
    std::mt19937 gen(rd());
    std::exponential_distribution<double> arrivalDistribution(arrivalRate); 

    // Generate initial arrival event
    Event initialArrival;
    initialArrival.type = Event::ARRIVAL;
    initialArrival.time = 0; // First customer arrives at time 0
    eventList.push(initialArrival);

    int currentTime = 0;
    int numCustomersServed = 0;
    int totalWaitTime = 0;

    while (currentTime <= simulationTime && !eventList.empty()) {
        Event currentEvent = eventList.top();
        eventList.pop();
        currentTime = currentEvent.time;

        if (currentEvent.type == Event::ARRIVAL) {
            // Process arrival
            // Generate next arrival time
            int nextArrivalTime = currentTime + static_cast<int>(arrivalDistribution(gen)); 
            Event nextArrival;
            nextArrival.type = Event::ARRIVAL;
            nextArrival.time = nextArrivalTime;
            // Only add if next arrival is within simulation time
            if (nextArrivalTime <= simulationTime) { 
                eventList.push(nextArrival);
            }

            // ... Logic for checking teller availability and adding to bankQueue ...
            // ... Logic for creating and adding departure events ...

        } else { // Departure Event
            // ... Logic for handling teller availability and potentially serving next customer from bankQueue ...
        }
        // ... (Update statistics, etc.)
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