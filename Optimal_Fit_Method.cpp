#include <iostream>
#include <vector>
#include <algorithm>

void bestFit(std::vector<int>& blockSize, int m, const std::vector<int>& processSize, int n) {
    std::vector<int> allocation(n, -1); 
    for (int i = 0; i < n; i++) { 
        int bestIdx = -1;
        for (int j = 0; j < m; j++) { 
            if (blockSize[j] >= processSize[i]) {
                if (bestIdx == -1 || blockSize[bestIdx] > blockSize[j]) {
                    bestIdx = j;
                }
            }
        }

        if (bestIdx != -1) { 
            allocation[i] = bestIdx;
            blockSize[bestIdx] -= processSize[i]; 
        }
    }

    std::cout << "\nProcess No.\tProcess Size\tBlock no.\n";
    for (int i = 0; i < n; i++) {
        std::cout << " " << i + 1 << "\t\t" << processSize[i] << "\t\t";
        if (allocation[i] != -1) {
            std::cout << allocation[i] + 1;
        } else {
            std::cout << "Not Allocated";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<int> blockSize = {100, 500, 200, 300, 600};
    std::vector<int> processSize = {212, 417, 112, 426};
    int m = blockSize.size();
    int n = processSize.size();

    bestFit(blockSize, m, processSize, n);

    return 0;
}
