class MyClass {
public:
    int myIntProperty; 
    std::string myStringProperty; 

    MyClass(int i, const std::string& s) : myIntProperty(i), myStringProperty(s) {}

    int getMyIntProperty() const {
        return myIntProperty;
    }
};

MyClass obj(10, "Hello");
int value = obj.getMyIntProperty(); 
