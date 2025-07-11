    #include <iostream> // For input/output
    #include <vector>   // For std::vector
    #include <string>   // For std::string
    #include <algorithm> // For std::sort
    
      std::vector<std::string> names = {"Charlie", "Alice", "Bob", "David"};
      std::sort(names.begin(), names.end());
      struct Person {
            std::string firstName;
            std::string lastName;
        };

        // Custom comparison function
        bool comparePeople(const Person& a, const Person& b) {
            return a.lastName < b.lastName; // Sort by last name
        }

        std::vector<Person> people = {{"Alice", "Smith"}, {"Bob", "Johnson"}, {"Charlie", "Adams"}};
        std::sort(people.begin(), people.end(), comparePeople);
        for (const std::string& name : names) {
        std::cout << name << std::endl;
    }