#include <iostream>
#include <iomanip>

int main() {
    int numFloors, roomsOnFloor, occupiedRoomsOnFloor;
    int totalRooms = 0;
    int totalOccupiedRooms = 0;
    double occupancyRate;

    std::cout << "Enter the number of floors in the hotel: ";
    std::cin >> numFloors;


    for (int i = 1; i <= numFloors; ++i) {
        if (i == 13) { 
            continue;
        }

        std::cout << "Enter the number of rooms on floor " << i << ": ";
        std::cin >> roomsOnFloor;

        std::cout << "Enter the number of occupied rooms on floor " << i << ": ";
        std::cin >> occupiedRoomsOnFloor;

        totalRooms += roomsOnFloor;
        totalOccupiedRooms += occupiedRoomsOnFloor;
    }

    if (totalRooms > 0) {
        occupancyRate = (static_cast<double>(totalOccupiedRooms) / totalRooms) * 100;
    } else {
        occupancyRate = 0.0;
    }

    std::cout << "\n--- Hotel Occupancy Report ---\n";
    std::cout << "Total rooms: " << totalRooms << std::endl;
    std::cout << "Occupied rooms: " << totalOccupiedRooms << std::endl;
    std::cout << "Unoccupied rooms: " << (totalRooms - totalOccupiedRooms) << std::endl;
    std::cout << "Occupancy rate: " << std::fixed << std::setprecision(2) << occupancyRate << "%\n";

    return 0;
}
