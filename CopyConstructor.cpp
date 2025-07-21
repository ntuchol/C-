class MyClass {
private:
    int* data;

public:
    // Constructor
    MyClass(int val) {
        data = new int;
        *data = val;
    }

    // Copy Constructor (Deep Copy)
    MyClass(const MyClass& other) {
        data = new int; // Allocate new memory for the copy
        *data = *(other.data); // Copy the content
    }

    // Destructor
    ~MyClass() {
        delete data;
    }

    int getValue() const {
        return *data;
    }
};
