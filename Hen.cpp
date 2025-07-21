#include <iostream>
#include <string>

// Define the Egg class
class Egg {
public:
    // Constructor for the Egg class
    Egg(std::string color) : color_(color) {
        std::cout << "Egg constructor called. Color: " << color_ << std::endl; // Displays a message when the constructor is called.
    }

    // Display function for the Egg
    void display() {
        std::cout << "This is a " << color_ << " egg." << std::endl; // Displays the egg's color.
    }

    // Destructor for the Egg class
    ~Egg() {
        std::cout << "Egg destructor called. Color: " << color_ << std::endl; // Displays a message when the destructor is called.
    }

private:
    std::string color_;
};

// Define the Hen class
class Hen {
public:
    // Constructor for the Hen class
    Hen(std::string name) : name_(name) {
        std::cout << "Hen constructor called. Name: " << name_ << std::endl; // Displays a message when the constructor is called.
    }

    // Function for the Hen to lay an egg
    Egg layEgg(std::string eggColor) {
        std::cout << name_ << " is laying a " << eggColor << " egg." << std::endl;
        return Egg(eggColor); // Creates a new Egg object and returns it.
    }

    // Display function for the Hen
    void display() {
        std::cout << "This is " << name_ << ", a happy hen." << std::endl; // Displays the hen's name.
    }

    // Destructor for the Hen class
    ~Hen() {
        std::cout << "Hen destructor called. Name: " << name_ << std::endl; // Displays a message when the destructor is called.
    }

private:
    std::string name_;
};

int main() {
    // Create a Hen object dynamically using 'new'
    Hen* myHen = new Hen("Henrietta"); // Dynamically allocates memory for a Hen object.

    // Call the display function for the Hen
    myHen->display();

    // Have the Hen lay an Egg
    Egg myEgg = myHen->layEgg("brown"); // The Hen lays a brown egg.

    // Call the display function for the Egg
    myEgg.display();

    // Free the dynamically allocated memory using 'delete'
    delete myHen; // Frees the memory allocated for the Hen object.
    myHen = nullptr; // Sets the pointer to nullptr to prevent dangling pointers.

    return 0;
}