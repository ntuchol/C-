std::atomic<bool> choosing[NUM_THREADS];
std::atomic<int> number[NUM_THREADS];

void lock(int process_id) {
    choosing[process_id] = true;
    int max_ticket = 0;
    for (int i = 0; i < NUM_THREADS; ++i) {
        int current_ticket = number[i].load(); 
        if (current_ticket > max_ticket) {
            max_ticket = current_ticket;
        }
    }
    number[process_id].store(max_ticket + 1); 
    choosing[process_id] = false;

    for (int j = 0; j < NUM_THREADS; ++j) {
        if (j != process_id) {
            while (choosing[j].load()) { /* busy-wait */ }
            while (number[j].load() != 0 &&
                   (number[j].load() < number[process_id].load() ||
                    (number[j].load() == number[process_id].load() && j < process_id))) {
                /* busy-wait */
            }
        }
    }
}

void unlock(int process_id) {
    number[process_id].store(0);
}
