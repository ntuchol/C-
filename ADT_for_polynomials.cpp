class Polynomial {
    private:
        // Internal representation (e.g., array of coefficients, linked list of terms)
        // This is hidden from the user.
    public:
        // Constructors
        Polynomial(); // Default constructor (e.g., zero polynomial)
        Polynomial(int coefficient, int exponent); // Constructor for a single term
        // Copy constructor, assignment operator, destructor (for memory management)

        // Operations
        // Overloaded operators for arithmetic (e.g., +, -, *)
        Polynomial operator+(const Polynomial& other) const;
        Polynomial operator-(const Polynomial& other) const;
        Polynomial operator*(const Polynomial& other) const;

        // Functions to manipulate terms
        void addTerm(int coefficient, int exponent);
        void setCoefficient(int coefficient, int exponent);
        int getCoefficient(int exponent) const;

        // Functions for information retrieval
        int getDegree() const; // Highest exponent
        int getNumberOfTerms() const;
        double evaluate(double x) const; // Evaluate polynomial at a given value of x

        // Input/Output operations (e.g., friend functions for stream operators)
        friend std::ostream& operator<<(std::ostream& os, const Polynomial& poly);
        friend std::istream& operator>>(std::istream& is, Polynomial& poly);
    };
