#include <iostream>
#include <chrono> // For std::chrono::seconds
#include <thread> // For std::this_thread::sleep_for

int main() {
    int countdown_seconds;

    std::cout << "Enter the countdown duration in seconds: ";
    std::cin >> countdown_seconds;

    while (countdown_seconds >= 0) {
        std::cout << "Time remaining: " << countdown_seconds << " seconds\n";
        std::this_thread::sleep_for(std::chrono::seconds(1)); // Pause for 1 second
        countdown_seconds--;
    }

    std::cout << "Countdown finished!\n";

    return 0;
}
