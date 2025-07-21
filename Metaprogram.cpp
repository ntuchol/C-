template<int p, int i>
    struct is_prime {
        enum { pri = (p % i) && is_prime<(i > 2 ? p : 0), i - 1>::pri };
    };
    template<> struct is_prime<0, 0> { enum { pri = 1 }; }; // Base case for recursion
    template<> struct is_prime<0, 1> { enum { pri = 1 }; }; // Base case for recursion
    
    template<int i> struct D { D(void*); operator int(); }; // Used to trigger compiler messages
    template<int i>
    struct Prime_print {
        Prime_print<i - 1> a;
        enum { pri = is_prime<i, i - 1>::pri };
        void f() {
            D<i> d = pri; // Triggers an error if 'pri' is 1 (meaning 'i' is prime)
        }
    };
    template<> struct Prime_print<2> { enum { pri = 1 }; void f() { D<2> d = pri; } }; // Base case for 2
    