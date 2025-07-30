#include <iostream>

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    // Base case: If there's only one disk, move it directly from source to destination.
    if (n == 1) {
        std::cout << "Move disk 1 from " << source << " to " << destination << std::endl;
        return;
    }

    // Recursive step:
    // 1. Move n-1 disks from the source peg to the auxiliary peg, using the destination peg.
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // 2. Move the largest (nth) disk from the source peg to the destination peg.
    std::cout << "Move disk " << n << " from " << source << " to " << destination << std::endl;

    // 3. Move the n-1 disks from the auxiliary peg to the destination peg, using the source peg.
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int numDisks;
    std::cout << "Enter the number of disks: ";
    std::cin >> numDisks;

    // Call the function with initial pegs (e.g., 'A' as source, 'B' as auxiliary, 'C' as destination)
    towerOfHanoi(numDisks, 'A', 'B', 'C');

    return 0;
}