#include <iostream>
#include <iomanip> // For formatting output

int main() {
    double cost, salvageValue;
    int usefulLife;

    std::cout << "Enter asset cost: ";
    std::cin >> cost;
    std::cout << "Enter salvage value: ";
    std::cin >> salvageValue;
    std::cout << "Enter useful life in years: ";
    std::cin >> usefulLife;

    double depreciationRate = (2.0 / usefulLife); // Double the straight-line rate
    double currentBookValue = cost;

    std::cout << std::fixed << std::setprecision(2); // Format output to 2 decimal places

    for (int year = 1; year <= usefulLife; ++year) {
        if (currentBookValue <= salvageValue) {
            std::cout << "Year " << year << ": No further depreciation (Book value reached salvage value)." << std::endl;
            break; // Stop depreciating if salvage value is reached
        }

        double depreciationExpense = currentBookValue * depreciationRate;

        // Adjust depreciation in the final year to not go below salvage value
        if (currentBookValue - depreciationExpense < salvageValue) {
            depreciationExpense = currentBookValue - salvageValue;
        }

        currentBookValue -= depreciationExpense;

        std::cout << "Year " << year << ": Depreciation = " << depreciationExpense
                  << ", Remaining Book Value = " << currentBookValue << std::endl;
    }

    return 0;
}