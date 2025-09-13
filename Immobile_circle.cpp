class Circle {
    private:
        double center_x;
        double center_y;
        double radius;

    public:
        Circle(double x, double y, double r) : center_x(x), center_y(y), radius(r) {}

        double getCenterX() const { return center_x; }
        double getCenterY() const { return center_y; }
        double getRadius() const { return radius; }

        double calculateArea() const {
            return 3.14159 * radius * radius; 
        }
    };
