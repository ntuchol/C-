#include <iostream>
    #include <string>
    std::cout << "Enter the amount of money (e.g., 12.34): ";
    std::string input_str;
        std::cin >> input_str;
         double amount;
        std::cin >> amount;
        long long total_cents; 
        #include <iomanip> 

    double display_amount = static_cast<double>(total_cents) / 100.0;
    std::cout << "Amount: $" << std::fixed << std::setprecision(2) << display_amount << std::endl;
    
