#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // For std::remove_if

class Contact {
public:
    std::string name;
    std::string phoneNumber;
    std::string address;

    Contact(std::string n, std::string pn, std::string addr = "")
        : name(n), phoneNumber(pn), address(addr) {}

    void display() const {
        std::cout << "Name: " << name << ", Phone: " << phoneNumber;
        if (!address.empty()) {
            std::cout << ", Address: " << address;
        }
        std::cout << std::endl;
    }
};

class TelephoneDirectory {
private:
    std::vector<Contact> contacts;

public:
    void addContact(const Contact& newContact) {
        contacts.push_back(newContact);
        std::cout << "Contact added successfully." << std::endl;
    }

    void displayAllContacts() const {
        if (contacts.empty()) {
            std::cout << "No contacts in the directory." << std::endl;
            return;
        }
        std::cout << "\n--- All Contacts ---" << std::endl;
        for (const auto& contact : contacts) {
            contact.display();
        }
        std::cout << "--------------------" << std::endl;
    }

    void searchContact(const std::string& searchName) const {
        bool found = false;
        for (const auto& contact : contacts) {
            if (contact.name == searchName) {
                contact.display();
                found = true;
                break;
            }
        }
        if (!found) {
            std::cout << "Contact '" << searchName << "' not found." << std::endl;
        }
    }

    void deleteContact(const std::string& nameToDelete) {
        auto it = std::remove_if(contacts.begin(), contacts.end(),
                                 [&](const Contact& c) { return c.name == nameToDelete; });

        if (it != contacts.end()) {
            contacts.erase(it, contacts.end());
            std::cout << "Contact '" << nameToDelete << "' deleted successfully." << std::endl;
        } else {
            std::cout << "Contact '" << nameToDelete << "' not found." << std::endl;
        }
    }
};

// Main function for user interaction would be implemented here
AI responses may include mistak