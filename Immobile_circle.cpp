class Circle {
    private:
        double center_x;
        double center_y;
        double radius;

    public:
        // Constructor to initialize the circle
        Circle(double x, double y, double r) : center_x(x), center_y(y), radius(r) {}

        // Getter methods to access the properties (no setters for immutability)
        double getCenterX() const { return center_x; }
        double getCenterY() const { return center_y; }
        double getRadius() const { return radius; }

        // Optional: Method to calculate area or other properties
        double calculateArea() const {
            return 3.14159 * radius * radius; // Using a constant for PI is better
        }
    };
