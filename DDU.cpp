#ifndef MYCLASS_H
    #define MYCLASS_H

    class MyClass {
    public:
        MyClass(); 
        void doSomething(); 
    private:
        int data; 
    };

    #endif
    #include "MyClass.h"
    #include <iostream>

    MyClass::MyClass() : data(0) {
        std::cout << "MyClass object created." << std::endl;
    }

    void MyClass::doSomething() {
        std::cout << "Doing something with data: " << data << std::endl;
    }
