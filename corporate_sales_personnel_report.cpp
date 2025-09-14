#include <iostream> 
#include <fstream>  
#include <vector>   
#include <string>   
#include <iomanip>  
#include <algorithm> 

struct SalesPerson {
    std::string name;
    double monthlySales;
};

void readSalesData(const std::string& filename, std::vector<SalesPerson>& salesData) {
}

void findMinMaxSales(const std::vector<SalesPerson>& salesData, SalesPerson& lowest, SalesPerson& highest) {
}

void calculateAggregates(const std::vector<SalesPerson>& salesData, double& totalSales, double& averageSales) {
}

void generateReports(const std::vector<SalesPerson>& salesData, const std::string& reportFile1, const std::string& reportFile2) {
}

int main() {
    std::vector<SalesPerson> salesPersonnel;
    return 0;
}
