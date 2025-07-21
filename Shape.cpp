class Shape {
    public:
        virtual double area() const = 0;
        virtual double perimeter() const = 0;
        virtual void display() const = 0; // Example for displaying shape info
        virtual ~Shape() {} // Virtual destructor
    };