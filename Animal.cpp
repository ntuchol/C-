#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;
    int age;

public:
    Animal(std::string n, int a) : name(n), age(a) {}

    virtual void makeSound() {
        std::cout << name << " makes a generic animal sound." << std::endl;
    }

    void eat() {
        std::cout << name << " is eating." << std::endl;
    }
};

class Dog : public Animal {
public:
    Dog(std::string n, int a) : Animal(n, a) {}

    void makeSound() override {
        std::cout << name << " barks: Woof! Woof!" << std::endl;
    }

    void fetch() {
        std::cout << name << " is fetching the ball." << std::endl;
    }
};

class Cat : public Animal {
public:
    Cat(std::string n, int a) : Animal(n, a) {}

    void makeSound() override {
        std::cout << name << " meows: Meow!" << std::endl;
    }

    void purr() {
        std::cout << name << " is purring." << std::endl;
    }
};

int main() {
    Animal* myAnimal = new Dog("Buddy", 3);
    Animal* anotherAnimal = new Cat("Whiskers", 2);

    myAnimal->makeSound(); // Calls Dog's makeSound()
    myAnimal->eat();

    anotherAnimal->makeSound(); // Calls Cat's makeSound()
    anotherAnimal->eat();

    // Specific derived class methods
    Dog* myDog = dynamic_cast<Dog*>(myAnimal);
    if (myDog) {
        myDog->fetch();
    }

    delete myAnimal;
    delete anotherAnimal;

    return 0;
}