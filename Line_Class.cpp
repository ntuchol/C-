#include <cmath> // For std::sqrt

class Point {
public:
    double x;
    double y;

    Point(double x_coord = 0.0, double y_coord = 0.0) : x(x_coord), y(y_coord) {}
};

class Line {
private:
    Point startPoint;
    Point endPoint;

public:
    Line(const Point& p1, const Point& p2) : startPoint(p1), endPoint(p2) {}

    double getLength() const {
        double dx = endPoint.x - startPoint.x;
        double dy = endPoint.y - startPoint.y;
        return std::sqrt(dx * dx + dy * dy);
    }

    // Add other member functions for slope, intersection, etc.
};
