#include <iostream>
#include <vector>
#include <numeric> 
void firstFit(std::vector<int>& blockSize, const std::vector<int>& processSize) {
    int m = blockSize.size();
    int n = processSize.size();
    std::vector<int> allocation(n, -1); 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (blockSize[j] >= processSize[i]) {
                allocation[i] = j; 
                blockSize[j] -= processSize[i]; 
                break; 
            }
        }
    }

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

int main() {
     std::vector<int> blockSize = {100, 500, 200, 300, 600};
     std::vector<int> processSize = {212, 417, 112, 426};
     firstFit(blockSize, processSize);
     return 0;
 }
