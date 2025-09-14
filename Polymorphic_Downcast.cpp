#include <boost/polymorphic_cast.hpp>
#include <iostream>

class Base {
public:
    virtual ~Base() = default;
    virtual void print_base() { std::cout << "Base class" << std::endl; }
};

class Derived : public Base {
public:
    void print_derived() { std::cout << "Derived class" << std::endl; }
};

int main() {
    Base* base_ptr = new Derived(); 
    
    Derived* derived_ptr = boost::polymorphic_downcast<Derived*>(base_ptr);

    if (derived_ptr) {
        derived_ptr->print_derived();
    }

    Base* another_base_ptr = new Base();
    Derived* incorrect_derived_ptr = boost::polymorphic_downcast<Derived*>(another_base_ptr); 

    delete base_ptr;
    delete another_base_ptr; 
    return 0;
}
