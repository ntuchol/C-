#include <algorithm> // For std::sort
#include <vector>
#include <iostream>

struct Person {
    std::string name;
    int age;
};

int main() {
    std::vector<Person> people = {{"Alice", 30}, {"Bob", 25}, {"Charlie", 30}};

    // Sort people by age in ascending order
    // If ages are equal, sort by name alphabetically
    std::sort(people.begin(), people.end(), [](const Person& p1, const Person& p2) {
        if (p1.age != p2.age) {
            return p1.age < p2.age;
        }
        return p1.name < p2.name;
    });

    for (const auto& p : people) {
        std::cout << p.name << " (" << p.age << ")\n";
    }

    return 0;
}