#include <iostream>
#include <vector>
#include <string>

struct Contact {
    std::string name;
    std::string phoneNumber;
};

int main() {
    std::vector<Contact> phoneList;
    phoneList.push_back({"Alice", "123-456-7890"});
    phoneList.push_back({"Bob", "987-654-3210"});

    std::vector<std::string> simplePhoneList;
    simplePhoneList.push_back("Charlie, 555-111-2222");
    simplePhoneList.push_back("Diana, 555-333-4444");

    for (const auto& contact : phoneList) {
        std::cout << "Name: " << contact.name << ", Phone: " << contact.phoneNumber << std::endl;
    }

    return 0;
}
