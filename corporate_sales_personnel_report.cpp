#include <iostream> // For input/output operations
#include <fstream>  // For file operations
#include <vector>   // For dynamic arrays
#include <string>   // For string manipulation
#include <iomanip>  // For output formatting
#include <algorithm> // For sorting (e.g., std::sort)

// Structure to hold salesperson data
struct SalesPerson {
    std::string name;
    double monthlySales;
};

// Function to read data from a file
void readSalesData(const std::string& filename, std::vector<SalesPerson>& salesData) {
    // Implementation to open, read, and populate salesData
}

// Function to find highest/lowest sales
void findMinMaxSales(const std::vector<SalesPerson>& salesData, SalesPerson& lowest, SalesPerson& highest) {
    // Implementation to find and assign lowest/highest salespersons
}

// Function to calculate total and average sales
void calculateAggregates(const std::vector<SalesPerson>& salesData, double& totalSales, double& averageSales) {
    // Implementation to calculate total and average
}

// Function to generate and write reports to files
void generateReports(const std::vector<SalesPerson>& salesData, const std::string& reportFile1, const std::string& reportFile2) {
    // Implementation to write unsorted and sorted reports, including aggregates
}

int main() {
    std::vector<SalesPerson> salesPersonnel;
    // Call readSalesData
    // Call findMinMaxSales
    // Call calculateAggregates
    // Call generateReports
    return 0;
}