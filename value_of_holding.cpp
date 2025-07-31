double value_of_holding = number_of_shares * current_price_per_share;

#include <iostream>
#include <string>

class StockHolding {
public:
    std::string tickerSymbol;
    int numberOfShares;
    double purchasePrice; // Optional, for tracking profit/loss
    double currentPrice;

    // Constructor
    StockHolding(std::string symbol, int shares, double current_price)
        : tickerSymbol(symbol), numberOfShares(shares), currentPrice(current_price) {}

    // Function to calculate the current value of the holding
    double calculateCurrentValue() const {
        return numberOfShares * currentPrice;
    }
};

int main() {
    // Create a StockHolding object for a specific stock
    StockHolding appleStock("AAPL", 100, 180.50); // 100 shares of AAPL at $180.50

    // Calculate and display the value of the holding
    double totalValue = appleStock.calculateCurrentValue();
    std::cout << "Current value of " << appleStock.tickerSymbol << " holding: $" << totalValue << std::endl;

    return 0;
}