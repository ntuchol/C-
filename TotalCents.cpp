#include <iostream>

int main() {
    int totalCents;

    std::cout << "Enter the total amount in cents: ";
    std::cin >> totalCents;

    int quarters = totalCents / 25;
    totalCents %= 25; 
    
    int dimes = totalCents / 10;
    totalCents %= 10; 
    
    int nickels = totalCents / 5;
    totalCents %= 5; 
    
    int pennies = totalCents;

    std::cout << "Number of Quarters: " << quarters << std::endl;
    std::cout << "Number of Dimes: " << dimes << std::endl;
    std::cout << "Number of Nickels: " << nickels << std::endl;
    std::cout << "Number of Pennies: " << pennies << std::endl;

    return 0;
}
