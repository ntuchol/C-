#include <string>
#include <iostream>

class Person {
public:
    Person(const std::string& name, int age) : name_(name), age_(age) {}

    std::string getName() const { return name_; }
    int getAge() const { return age_; }

    virtual void introduce() const {
        std::cout << "Hi, I'm " << name_ << " and I'm " << age_ << " years old." << std::endl;
    }

private:
    std::string name_;
    int age_;
};

#include "Person.h" 
class Cyborg : public Person { 
public:
    Cyborg(const std::string& name, int age, const std::string& cybernetics_enhancements)
        : Person(name, age), cybernetics_enhancements_(cybernetics_enhancements) {} 
    std::string getCyberneticsEnhancements() const { return cybernetics_enhancements_; }

    void introduce() const override {
        std::cout << "Greetings. I am Cyborg " << getName() << ", designated " << getAge() << " solar cycles. I possess " << cybernetics_enhancements_ << "." << std::endl;
    }

private:
    std::string cybernetics_enhancements_;
};
