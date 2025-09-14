 #include <iostream>
    #include <vector>
    
    struct Point {
        double x, y;
    };
    
    bool isPointInPolygon(const std::vector<Point>& polygon, const Point& p) {
        if (polygon.size() == 4) { 
            double minX = std::min({polygon[0].x, polygon[1].x, polygon[2].x, polygon[3].x});
            double maxX = std::max({polygon[0].x, polygon[1].x, polygon[2].x, polygon[3].x});
            double minY = std::min({polygon[0].y, polygon[1].y, polygon[2].y, polygon[3].y});
            double maxY = std::max({polygon[0].y, polygon[1].y, polygon[2].y, polygon[3].y});
            return (p.x >= minX && p.x <= maxX && p.y >= minY && p.y <= maxY);
        }
        return false; 
    }
    
    int main() {
        std::vector<Point> rectangle = {{0, 0}, {10, 0}, {10, 5}, {0, 5}};
        Point testPoint1 = {5, 2}; 
        Point testPoint2 = {12, 3}; 
    
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
