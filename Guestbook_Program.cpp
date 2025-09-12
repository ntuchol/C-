#include <iostream>
#include <fstream>
#include <vector>
#include <string>

struct GuestbookEntry {
    std::string name;
    std::string message;
};

void addEntry(const GuestbookEntry& entry) {
    std::ofstream outFile("guestbook.txt", std::ios::app); 
    if (outFile.is_open()) {
        outFile << entry.name << "\n";
        outFile << entry.message << "\n";
        outFile.close();
        std::cout << "Entry added successfully!\n";
    } else {
        std::cerr << "Error opening file for writing.\n";
    }
}

void viewEntries() {
    std::ifstream inFile("guestbook.txt");
    if (inFile.is_open()) {
        std::string line;
        GuestbookEntry entry;
        while (std::getline(inFile, entry.name) && std::getline(inFile, entry.message)) {
            std::cout << "Name: " << entry.name << "\n";
            std::cout << "Message: " << entry.message << "\n";
            std::cout << "--------------------\n";
        }
        inFile.close();
    } else {
        std::cerr << "No entries found or error opening file.\n";
    }
}

int main() {
    int choice;
    do {
        std::cout << "\nGuestbook Menu:\n";
        std::cout << "1. Add New Entry\n";
        std::cout << "2. View Entries\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore(); 
        
        switch (choice) {
            case 1: {
                GuestbookEntry newEntry;
                std::cout << "Enter your name: ";
                std::getline(std::cin, newEntry.name);
                std::cout << "Enter your message: ";
                std::getline(std::cin, newEntry.message);
                addEntry(newEntry);
                break;
            }
            case 2:
                viewEntries();
                break;
            case 3:
                std::cout << "Exiting Guestbook program. Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}
