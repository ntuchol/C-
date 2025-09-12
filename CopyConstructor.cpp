class MyClass {
private:
    int* data;

public:
    MyClass(int val) {
        data = new int;
        *data = val;
    }

    MyClass(const MyClass& other) {
        data = new int; 
        *data = *(other.data); 
    }

    ~MyClass() {
        delete data;
    }

    int getValue() const {
        return *data;
    }
};
