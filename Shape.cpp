   class Shape {
    public:
        virtual double area() const = 0;
        virtual double perimeter() const = 0;
        virtual void display() const = 0;
        virtual ~Shape() {} 
    };
    
    class Circle : public Shape {
    private:
        double radius;
    public:
        Circle(double r) : radius(r) {}
        double area() const override { return 3.14159 * radius * radius; }
        double perimeter() const override { return 2 * 3.14159 * radius; }
        void display() const override { /* Implementation for displaying Circle info */ }
    };
    
    Shape* myShape = new Circle(5.0);
    double calculatedArea = myShape->area(); 
    Circle::area()
    delete myShape; 
