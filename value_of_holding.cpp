double value_of_holding = number_of_shares * current_price_per_share;

#include <iostream>
#include <string>

class StockHolding {
public:
    std::string tickerSymbol;
    int numberOfShares;
    double purchasePrice; 
    double currentPrice;

    StockHolding(std::string symbol, int shares, double current_price)
        : tickerSymbol(symbol), numberOfShares(shares), currentPrice(current_price) {}

    double calculateCurrentValue() const {
        return numberOfShares * currentPrice;
    }
};

int main() {
    StockHolding appleStock("AAPL", 100, 180.50); 
    double totalValue = appleStock.calculateCurrentValue();
    std::cout << "Current value of " << appleStock.tickerSymbol << " holding: $" << totalValue << std::endl;

    return 0;
}
