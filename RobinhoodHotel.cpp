#include <iostream>
#include "robin_hood.h" 

struct RoomInfo {
    std::string roomType;
    bool isBooked;
};

int main() {
    robin_hood::unordered_map<int, RoomInfo> hotelRooms;

    hotelRooms[101] = {"Single", false};
    hotelRooms[102] = {"Double", true};

    if (!hotelRooms[101].isBooked) {
        hotelRooms[101].isBooked = true;
        std::cout << "Room 101 booked." << std::endl;
    } else {
        std::cout << "Room 101 is already booked." << std::endl;
    }

    return 0;
}
