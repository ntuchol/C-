 #include <iostream>
    #include <vector>
    
    // Define a simple Point structure
    struct Point {
        double x, y;
    };
    
    // Function to check if a point is inside a polygon (simplified example for convex polygon)
    // For general polygons, more complex algorithms are required.
    bool isPointInPolygon(const std::vector<Point>& polygon, const Point& p) {
        // This is a placeholder; a full implementation for general polygons
        // would involve algorithms like ray casting.
        // For a simple rectangle:
        if (polygon.size() == 4) { // Assuming a rectangle defined by 4 points
            double minX = std::min({polygon[0].x, polygon[1].x, polygon[2].x, polygon[3].x});
            double maxX = std::max({polygon[0].x, polygon[1].x, polygon[2].x, polygon[3].x});
            double minY = std::min({polygon[0].y, polygon[1].y, polygon[2].y, polygon[3].y});
            double maxY = std::max({polygon[0].y, polygon[1].y, polygon[2].y, polygon[3].y});
            return (p.x >= minX && p.x <= maxX && p.y >= minY && p.y <= maxY);
        }
        return false; // Not implemented for other shapes in this example
    }
    
    int main() {
        std::vector<Point> rectangle = {{0, 0}, {10, 0}, {10, 5}, {0, 5}};
        Point testPoint1 = {5, 2}; // Inside
        Point testPoint2 = {12, 3}; // Outside
    
        if (isPointInPolygon(rectangle, testPoint1)) {
            std::cout << "Point 1 is inside the rectangle." << std::endl;
        } else {
            std::cout << "Point 1 is outside the rectangle." << std::endl;
        }
    
        if (isPointInPolygon(rectangle, testPoint2)) {
            std::cout << "Point 2 is inside the rectangle." << std::endl;
        } else {
            std::cout << "Point 2 is outside the rectangle." << std::endl;
        }
    
        return 0;
    }