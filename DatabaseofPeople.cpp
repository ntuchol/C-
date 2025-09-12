#include <iostream>
#include <vector>
#include <string>
#include <limits> 

struct Person {
    int id;
    std::string name;
    int age;
};

void addPerson(std::vector<Person>& people) {
    Person newPerson;
    newPerson.id = people.empty() ? 1 : people.back().id + 1; 

    std::cout << "Enter Name: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    std::getline(std::cin, newPerson.name);

    std::cout << "Enter Age: ";
    while (!(std::cin >> newPerson.age)) {
        std::cout << "Invalid input. Please enter a number for age: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    people.push_back(newPerson);
    std::cout << "Person added successfully with ID: " << newPerson.id << std::endl;
}

void viewPeople(const std::vector<Person>& people) {
    if (people.empty()) {
        std::cout << "No people in the database." << std::endl;
        return;
    }
    std::cout << "\n--- People Database ---" << std::endl;
    for (const auto& p : people) {
        std::cout << "ID: " << p.id << ", Name: " << p.name << ", Age: " << p.age << std::endl;
    }
    std::cout << "-----------------------" << std::endl;
}

void searchPerson(const std::vector<Person>& people) {
    if (people.empty()) {
        std::cout << "No people in the database to search." << std::endl;
        return;
    }
    int searchId;
    std::cout << "Enter ID to search: ";
    while (!(std::cin >> searchId)) {
        std::cout << "Invalid input. Please enter a number for ID: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    bool found = false;
    for (const auto& p : people) {
        if (p.id == searchId) {
            std::cout << "Found: ID: " << p.id << ", Name: " << p.name << ", Age: " << p.age << std::endl;
            found = true;
            break;
        }
    }
    if (!found) {
        std::cout << "Person with ID " << searchId << " not found." << std::endl;
    }
}

int main() {
    std::vector<Person> peopleDatabase;
    int choice;

    do {
        std::cout << "\n--- People Database Menu ---" << std::endl;
        std::cout << "1. Add Person" << std::endl;
        std::cout << "2. View All People" << std::endl;
        std::cout << "3. Search Person by ID" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";

        while (!(std::cin >> choice)) {
            std::cout << "Invalid input. Please enter a number: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        switch (choice) {
            case 1:
                addPerson(peopleDatabase);
                break;
            case 2:
                viewPeople(peopleDatabase);
                break;
            case 3:
                searchPerson(peopleDatabase);
                break;
            case 4:
                std::cout << "Exiting program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 4);

    return 0;
}
