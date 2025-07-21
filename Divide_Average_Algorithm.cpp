#include <iostream>
#include <vector> // For using std::vector

// Function to calculate the average of elements in a vector
double calculateAverage(const std::vector<int>& numbers) {
    if (numbers.empty()) {
        return 0.0; // Handle empty vector case to avoid division by zero
    }

    long long sum = 0; // Use long long to prevent overflow for large sums
    for (int num : numbers) {
        sum += num;
    }

    return static_cast<double>(sum) / numbers.size();
}

int main() {
    std::vector<int> data = {10, 20, 30, 40, 50};
    double average = calculateAverage(data);

    std::cout << "The average is: " << average << std::endl;

    return 0;
}