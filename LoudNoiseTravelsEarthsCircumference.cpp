#include <iostream>

int main() {
    double circumference_meters = 40075000.0; // Earth's circumference in meters
    double speed_of_sound_mps = 343.0;     // Speed of sound in meters per second

    double time_in_seconds = circumference_meters / speed_of_sound_mps;
    double time_in_hours = time_in_seconds / 3600.0; // 3600 seconds in an hour

    std::cout << "Time for sound to travel around the Earth: " << time_in_hours << " hours" << std::endl;

    return 0;
}