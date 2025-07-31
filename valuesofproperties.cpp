class MyClass {
public:
    int myIntProperty; // A data member representing an integer property
    std::string myStringProperty; // A data member representing a string property

    // Constructor to initialize properties
    MyClass(int i, const std::string& s) : myIntProperty(i), myStringProperty(s) {}

    // Getter function to access the value of myIntProperty
    int getMyIntProperty() const {
        return myIntProperty;
    }
};

// Usage:
MyClass obj(10, "Hello");
int value = obj.getMyIntProperty(); // 'value' will be 10