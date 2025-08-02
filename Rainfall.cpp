#include <iostream>
#include <vector>
#include <string>
#include <numeric> // For std::accumulate
#include <algorithm> // For std::min_element, std::max_element

// Function to get rainfall data from the user
void getRainfallData(std::vector<double>& rainfall, const std::vector<std::string>& months);

// Function to calculate total rainfall
double calculateTotal(const std::vector<double>& rainfall);

// Function to calculate average rainfall
double calculateAverage(const std::vector<double>& rainfall);

// Function to find the month with the highest rainfall
int findHighestRainfallMonth(const std::vector<double>& rainfall);

// Function to find the month with the lowest rainfall
int findLowestRainfallMonth(const std::vector<double>& rainfall);

// Main function to orchestrate the program
int main() {
    // ... program logic ...
    return 0;
}