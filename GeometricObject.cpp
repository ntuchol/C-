class Point {
private:
    double x;
    double y;

public:
    Point(double x_val, double y_val) : x(x_val), y(y_val) {}

    double getX() const { return x; }
    double getY() const { return y; }

    double distanceFrom(const Point& other) const {
        return std::sqrt(std::pow(x - other.x, 2) + std::pow(y - other.y, 2));
    }
};
