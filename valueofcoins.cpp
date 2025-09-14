#include <iostream>
#include <vector>
#include <numeric> 
int main() {
    std::vector<double> coinValues = {0.25, 0.10, 0.05, 0.25, 1.00}; 
    double sumLoop = 0.0;
    for (double value : coinValues) {
        sumLoop += value;
    }
    std::cout << "Sum using loop: $" << sumLoop << std::endl;

    double sumAccumulate = std::accumulate(coinValues.begin(), coinValues.end(), 0.0);
    std::cout << "Sum using std::accumulate: $" << sumAccumulate << std::endl;

    return 0;
}
