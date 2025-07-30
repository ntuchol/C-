#include <iostream>
#include <vector>
#include <random>
#include <chrono>

// Hash table class
class HashTable {
public:
    HashTable(int size) : table_size(size), collisions(0) {
        table.resize(size, -1); // Initialize with -1 to indicate empty slots
    }

    void insert(int key) {
        int hash_index = key % table_size;

        // Linear probing
        while (table[hash_index] != -1) {
            collisions++; // Collision occurred
            hash_index = (hash_index + 1) % table_size; // Move to the next slot
        }
        table[hash_index] = key;
    }

    int getCollisions() const {
        return collisions;
    }

private:
    std::vector<int> table;
    int table_size;
    int collisions;
};

int main() {
    const int TABLE_SIZE = 1000; // Size of the hash table
    const int NUM_INSERTIONS = 5000; // Number of random insertions

    HashTable ht(TABLE_SIZE);

    // Seed the random number generator
    std::mt19937 rng(std::chrono::steady_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<int> dist(0, 1000000); // Range of random numbers

    for (int i = 0; i < NUM_INSERTIONS; ++i) {
        int random_value = dist(rng);
        ht.insert(random_value);
    }

    std::cout << "Number of insertions: " << NUM_INSERTIONS << std::endl;
    std::cout << "Hash table size: " << TABLE_SIZE << std::endl;
    std::cout << "Total collisions during insertions (Linear Probing): " << ht.getCollisions() << std::endl;

    return 0;
}