#include <iostream>

int main() {
    double circumference_meters = 40075000.0; 
    double speed_of_sound_mps = 343.0;   

    double time_in_seconds = circumference_meters / speed_of_sound_mps;
    double time_in_hours = time_in_seconds / 3600.0; 

    std::cout << "Time for sound to travel around the Earth: " << time_in_hours << " hours" << std::endl;

    return 0;
}
