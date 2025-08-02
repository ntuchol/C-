int x = 10; // Global variable
    void func() {
        int x = 20; // Local variable
        std::cout << ::x; // Accesses the global x (outputs 10)
    }
    void myGlobalFunction() { /* ... */ }
    class MyClass {
    public:
        void memberFunction() {
            ::myGlobalFunction(); // Calls the global myGlobalFunction
        }
    };