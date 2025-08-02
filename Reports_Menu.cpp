#include <iostream>

    void displayReportsMenu() {
        std::cout << "\n--- Reports Menu ---\n";
        std::cout << "1. Sales Report\n";
        std::cout << "2. Inventory Report\n";
        std::cout << "3. Customer Report\n";
        std::cout << "4. Back to Main Menu\n";
        std::cout << "Enter your choice: ";
    }
    
 int choice;
    do {
        displayReportsMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                // Call function to generate Sales Report
                std::cout << "Generating Sales Report...\n";
                break;
            case 2:
                // Call function to generate Inventory Report
                std::cout << "Generating Inventory Report...\n";
                break;
            case 3:
                // Call function to generate Customer Report
                std::cout << "Generating Customer Report...\n";
                break;
            case 4:
                std::cout << "Returning to Main Menu.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);