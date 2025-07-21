#include <iostream>

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    // Base case: If there's only one disk, move it directly
    if (n == 1) {
        std::cout << "Move disk 1 from " << source << " to " << destination << std::endl;
        return;
    }

    // Step 1: Move n-1 disks from source to auxiliary, using destination as temporary
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Step 2: Move the nth disk from source to destination
    std::cout << "Move disk " << n << " from " << source << " to " << destination << std::endl;

    // Step 3: Move the n-1 disks from auxiliary to destination, using source as temporary
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int numDisks;
    std::cout << "Enter the number of disks: ";
    std::cin >> numDisks;

    // Call the recursive function to solve the puzzle
    towerOfHanoi(numDisks, 'A', 'B', 'C'); // A: Source, B: Auxiliary, C: Destination

    return 0;
}