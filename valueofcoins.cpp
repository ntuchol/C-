#include <iostream>
#include <vector>
#include <numeric> // For std::accumulate

int main() {
    // Define a vector of coin values
    std::vector<double> coinValues = {0.25, 0.10, 0.05, 0.25, 1.00}; // Quarters, Dimes, Nickels, Quarter, Dollar

    // Calculate the sum using a loop
    double sumLoop = 0.0;
    for (double value : coinValues) {
        sumLoop += value;
    }
    std::cout << "Sum using loop: $" << sumLoop << std::endl;

    // Calculate the sum using std::accumulate (more concise)
    double sumAccumulate = std::accumulate(coinValues.begin(), coinValues.end(), 0.0);
    std::cout << "Sum using std::accumulate: $" << sumAccumulate << std::endl;

    return 0;
}