#include <iostream>
#include <iomanip> // For setprecision

int main() {
    int numFloors, roomsOnFloor, occupiedRoomsOnFloor;
    int totalRooms = 0;
    int totalOccupiedRooms = 0;
    double occupancyRate;

    std::cout << "Enter the number of floors in the hotel: ";
    std::cin >> numFloors;

    // Input validation for numFloors (e.g., numFloors >= 1)

    for (int i = 1; i <= numFloors; ++i) {
        if (i == 13) { // Skipping the 13th floor
            continue;
        }

        std::cout << "Enter the number of rooms on floor " << i << ": ";
        std::cin >> roomsOnFloor;
        // Input validation for roomsOnFloor (e.g., roomsOnFloor >= 10)

        std::cout << "Enter the number of occupied rooms on floor " << i << ": ";
        std::cin >> occupiedRoomsOnFloor;
        // Input validation for occupiedRoomsOnFloor (e.g., 0 <= occupiedRoomsOnFloor <= roomsOnFloor)

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