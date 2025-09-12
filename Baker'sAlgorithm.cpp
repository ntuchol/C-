#include <vector>
#include <atomic> 
const int NUM_THREADS = 5; 
std::vector<std::atomic<bool>> choosing(NUM_THREADS);
std::vector<std::atomic<int>> number(NUM_THREADS);

void critical_section(int thread_id) {
    choosing[thread_id] = true;
    int max_num = 0;
    for (int i = 0; i < NUM_THREADS; ++i) {
        if (number[i] > max_num) {
            max_num = number[i];
        }
    }
    number[thread_id] = max_num + 1;
    choosing[thread_id] = false;

    for (int j = 0; j < NUM_THREADS; ++j) {
        while (choosing[j]) {
        }
        while (number[j] != 0 && (number[j] < number[thread_id] ||
                                  (number[j] == number[thread_id] && j < thread_id))) {
        }
    }

    // Critical Section Code
    // ...

    // 3. Exit
    number[thread_id] = 0;
}
