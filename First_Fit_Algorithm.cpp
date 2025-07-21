#include <iostream>
#include <vector>
#include <numeric> // For std::iota

void firstFit(std::vector<int>& blockSize, const std::vector<int>& processSize) {
    int m = blockSize.size();
    int n = processSize.size();
    std::vector<int> allocation(n, -1); // Stores block ID allocated to each process

    for (int i = 0; i < n; ++i) { // Iterate through processes
        for (int j = 0; j < m; ++j) { // Iterate through memory blocks
            if (blockSize[j] >= processSize[i]) {
                allocation[i] = j; // Allocate block j to process i
                blockSize[j] -= processSize[i]; // Reduce available memory in this block
                break; // Move to the next process
            }
        }
    }

    // Output results
    std::cout << "\nProcess No.\tProcess Size\tBlock No.\n";
    for (int i = 0; i < n; ++i) {
        std::cout << " " << i + 1 << "\t\t" << processSize[i] << "\t\t";
        if (allocation[i] != -1)
            std::cout << allocation[i] + 1;
        else
            std::cout << "Not Allocated";
        std::cout << std::endl;
    }
}

// int main() {
//     std::vector<int> blockSize = {100, 500, 200, 300, 600};
//     std::vector<int> processSize = {212, 417, 112, 426};
//     firstFit(blockSize, processSize);
//     return 0;
// }