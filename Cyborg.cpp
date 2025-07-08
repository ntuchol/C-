#include <string>
#include <iostream>

class Person {
public:
    // Constructor
    Person(const std::string& name, int age) : name_(name), age_(age) {}

    // Getters
    std::string getName() const { return name_; }
    int getAge() const { return age_; }

    // Virtual function to allow for polymorphism
    virtual void introduce() const {
        std::cout << "Hi, I'm " << name_ << " and I'm " << age_ << " years old." << std::endl;
    }

private:
    std::string name_;
    int age_;
};

#include "Person.h" // Include the Person class header file

class Cyborg : public Person { // Inherit publicly from Person
public:
    // Constructor
    Cyborg(const std::string& name, int age, const std::string& cybernetics_enhancements)
        : Person(name, age), cybernetics_enhancements_(cybernetics_enhancements) {} // Call the base class constructor

    // Getters
    std::string getCyberneticsEnhancements() const { return cybernetics_enhancements_; }

    // Override the introduce function (polymorphism)
    void introduce() const override {
        std::cout << "Greetings. I am Cyborg " << getName() << ", designated " << getAge() << " solar cycles. I possess " << cybernetics_enhancements_ << "." << std::endl;
    }

private:
    std::string cybernetics_enhancements_;
};