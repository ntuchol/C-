#include <iostream>
#include <chrono> 
#include <thread> 
int main() {
    int countdown_seconds;

    std::cout << "Enter the countdown duration in seconds: ";
    std::cin >> countdown_seconds;

    while (countdown_seconds >= 0) {
        std::cout << "Time remaining: " << countdown_seconds << " seconds\n";
        std::this_thread::sleep_for(std::chrono::seconds(1)); 
        countdown_seconds--;
    }

    std::cout << "Countdown finished!\n";

    return 0;
}
