#include <iostream>
#include <vector>
#include <string>

class Seat {
public:
    int seatNumber;
    bool isBooked;

    Seat(int num) : seatNumber(num), isBooked(false) {}
};

class Flight {
public:
    std::string flightID;
    std::vector<Seat> seats;

    Flight(std::string id, int numSeats) : flightID(id) {
        for (int i = 1; i <= numSeats; ++i) {
            seats.push_back(Seat(i));
        }
    }

    void displaySeats() {
        std::cout << "Flight " << flightID << " Seats:\n";
        for (const auto& seat : seats) {
            std::cout << "Seat " << seat.seatNumber << ": " << (seat.isBooked ? "Booked" : "Available") << "\n";
        }
    }

    bool bookSeat(int seatNum) {
        if (seatNum > 0 && seatNum <= seats.size() && !seats[seatNum - 1].isBooked) {
            seats[seatNum - 1].isBooked = true;
            return true;
        }
        return false;
    }
};

int main() {
    Flight f1("FL101", 10); // Create a flight with 10 seats

    f1.displaySeats();

    if (f1.bookSeat(5)) {
        std::cout << "Seat 5 booked successfully!\n";
    } else {
        std::cout << "Failed to book seat 5.\n";
    }

    f1.displaySeats();

    return 0;
}
