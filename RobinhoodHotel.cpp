#include <iostream>
#include "robin_hood.h" // Assuming you're using the martinus/robin-hood-hashing library

struct RoomInfo {
    std::string roomType;
    bool isBooked;
    // other room details
};

int main() {
    robin_hood::unordered_map<int, RoomInfo> hotelRooms;

    // Insert room information
    hotelRooms[101] = {"Single", false};
    hotelRooms[102] = {"Double", true};

    // Check availability
    if (!hotelRooms[101].isBooked) {
        // Book room 101
        hotelRooms[101].isBooked = true;
        std::cout << "Room 101 booked." << std::endl;
    } else {
        std::cout << "Room 101 is already booked." << std::endl;
    }

    return 0;
}