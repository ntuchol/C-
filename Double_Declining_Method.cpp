#include <iostream>
#include <iomanip> 

int main() {
    double cost, salvageValue;
    int usefulLife;

    std::cout << "Enter asset cost: ";
    std::cin >> cost;
    std::cout << "Enter salvage value: ";
    std::cin >> salvageValue;
    std::cout << "Enter useful life in years: ";
    std::cin >> usefulLife;

    double depreciationRate = (2.0 / usefulLife); 
    double currentBookValue = cost;

    std::cout << std::fixed << std::setprecision(2); 
    
    for (int year = 1; year <= usefulLife; ++year) {
        if (currentBookValue <= salvageValue) {
            std::cout << "Year " << year << ": No further depreciation (Book value reached salvage value)." << std::endl;
            break; 
        }

        double depreciationExpense = currentBookValue * depreciationRate;

        if (currentBookValue - depreciationExpense < salvageValue) {
            depreciationExpense = currentBookValue - salvageValue;
        }

        currentBookValue -= depreciationExpense;

        std::cout << "Year " << year << ": Depreciation = " << depreciationExpense
                  << ", Remaining Book Value = " << currentBookValue << std::endl;
    }

    return 0;
}
