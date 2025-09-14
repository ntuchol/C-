int x = 10; 
    void func() {
        int x = 20; 
        std::cout << ::x; 
    }
    void myGlobalFunction() { /* ... */ }
    class MyClass {
    public:
        void memberFunction() {
            ::myGlobalFunction(); 
        }
    };
