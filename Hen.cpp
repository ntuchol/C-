#include <iostream>
#include <string>

class Egg {
public:
    Egg(std::string color) : color_(color) {
        std::cout << "Egg constructor called. Color: " << color_ << std::endl; 
    }

    void display() {
        std::cout << "This is a " << color_ << " egg." << std::endl; 
    }

    ~Egg() {
        std::cout << "Egg destructor called. Color: " << color_ << std::endl; 
    }

private:
    std::string color_;
};

class Hen {
public:
    Hen(std::string name) : name_(name) {
        std::cout << "Hen constructor called. Name: " << name_ << std::endl; 
    }

    Egg layEgg(std::string eggColor) {
        std::cout << name_ << " is laying a " << eggColor << " egg." << std::endl;
        return Egg(eggColor); 
    }

    void display() {
        std::cout << "This is " << name_ << ", a happy hen." << std::endl; 
    }

    ~Hen() {
        std::cout << "Hen destructor called. Name: " << name_ << std::endl; 
    }

private:
    std::string name_;
};

int main() {
    Hen* myHen = new Hen("Henrietta"); 
    myHen->display();

    Egg myEgg = myHen->layEgg("brown"); 

    myEgg.display();

    delete myHen; 
    myHen = nullptr; 

    return 0;
}
