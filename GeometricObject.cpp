class Point {
private:
    double x;
    double y;

public:
    // Constructor
    Point(double x_val, double y_val) : x(x_val), y(y_val) {}

    // Getters
    double getX() const { return x; }
    double getY() const { return y; }

    // Method to calculate distance from another point
    double distanceFrom(const Point& other) const {
        return std::sqrt(std::pow(x - other.x, 2) + std::pow(y - other.y, 2));
    }
};