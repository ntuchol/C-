class Polynomial {
    private:
    public:
        Polynomial(); 
        Polynomial(int coefficient, int exponent); 
        Polynomial operator+(const Polynomial& other) const;
        Polynomial operator-(const Polynomial& other) const;
        Polynomial operator*(const Polynomial& other) const;

        void addTerm(int coefficient, int exponent);
        void setCoefficient(int coefficient, int exponent);
        int getCoefficient(int exponent) const;

        int getDegree() const; 
        int getNumberOfTerms() const;
        double evaluate(double x) const; 
        friend std::ostream& operator<<(std::ostream& os, const Polynomial& poly);
        friend std::istream& operator>>(std::istream& is, Polynomial& poly);
    };
