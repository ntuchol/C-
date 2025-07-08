// Shape.h
#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
    // Pure virtual function: must be implemented by derived classes
    virtual double getArea() const = 0; 
    
    // Pure virtual function: must be implemented by derived classes
    virtual double getPerimeter() const = 0; 

    // Virtual destructor: important for proper cleanup in polymorphic scenarios
    virtual ~Shape() {} 

    // Concrete method (optional): can have an implementation in the abstract class
    void printInfo() const {
        // Implementation here, potentially using getArea() and getPerimeter()
        // if they were not pure virtual, or if calling a concrete implementation
        // of a derived class.
    }
};

#endif // SHAPE_H