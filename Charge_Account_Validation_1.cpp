    int validAccountNumbers[] = {5658845, 4520125, 7895122, /* ... more numbers ... */};
    int userAccountNumber;
    std::cout << "Enter charge account number: ";
    std::cin >> userAccountNumber;
    
    bool isValid = false;
        for (int i = 0; i < arraySize; ++i) {
            if (validAccountNumbers[i] == userAccountNumber) {
                isValid = true;
                break; 
            }
        }
    if (isValid) {
        std::cout << "Account number is valid." << std::endl;
    } else {
        std::cout << "Account number is not valid." << std::endl;
    }
