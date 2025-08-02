#include <iostream>
#include <vector>
#include <string>

// Option 1: Using a custom struct
struct Contact {
    std::string name;
    std::string phoneNumber;
};

int main() {
    // Option 1: Vector of Contact structs
    std::vector<Contact> phoneList;
    phoneList.push_back({"Alice", "123-456-7890"});
    phoneList.push_back({"Bob", "987-654-3210"});

    // Option 2: Vector of strings (if combining name and number)
    std::vector<std::string> simplePhoneList;
    simplePhoneList.push_back("Charlie, 555-111-2222");
    simplePhoneList.push_back("Diana, 555-333-4444");

    // Displaying contacts
    for (const auto& contact : phoneList) {
        std::cout << "Name: " << contact.name << ", Phone: " << contact.phoneNumber << std::endl;
    }

    return 0;
}