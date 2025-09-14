class Point {
public:
    double x, y;
};

class Shape {
public:
    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;
    virtual void display() const;
    virtual ~Shape() = default;
protected:
    std::vector<Point> vertices;
};

class Triangle : public Shape {
public:
    Triangle(const Point& p1, const Point& p2, const Point& p3);
    double calculateArea() const override;
    double calculatePerimeter() const override;
};

class Rectangle : public Shape {
public:
    Rectangle(const Point& topLeft, const Point& bottomRight);
    double calculateArea() const override;
    double calculatePerimeter() const override;
};

class Square : public Rectangle {
public:
    Square(const Point& topLeft, double sideLength);
};

class Circle : public Shape { 
public:
    Circle(const Point& center, double radius);
    double calculateArea() const override;
    double calculatePerimeter() const override; 
private:
    Point center;
    double radius;
};
