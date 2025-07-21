#include <vector>
#include <atomic> // For thread-safe access to shared variables

const int NUM_THREADS = 5; // Example number of threads

std::vector<std::atomic<bool>> choosing(NUM_THREADS);
std::vector<std::atomic<int>> number(NUM_THREADS);

void critical_section(int thread_id) {
    // 1. Choosing phase
    choosing[thread_id] = true;
    int max_num = 0;
    for (int i = 0; i < NUM_THREADS; ++i) {
        if (number[i] > max_num) {
            max_num = number[i];
        }
    }
    number[thread_id] = max_num + 1;
    choosing[thread_id] = false;

    // 2. Waiting phase
    for (int j = 0; j < NUM_THREADS; ++j) {
        // Wait while other threads are choosing
        while (choosing[j]) {
            // Busy-wait
        }
        // Wait if another thread has a smaller or equal number with lower ID
        while (number[j] != 0 && (number[j] < number[thread_id] ||
                                  (number[j] == number[thread_id] && j < thread_id))) {
            // Busy-wait
        }
    }

    // Critical Section Code
    // ...

    // 3. Exit
    number[thread_id] = 0;
}