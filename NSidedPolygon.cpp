#include <iostream>
#include <vector>
#include <cmath> 

std::vector<std::pair<double, double>> calculatePolygonVertices(int numSides, double radius) {
    std::vector<std::pair<double, double>> vertices;
    if (numSides < 3) {
        std::cerr << "A polygon must have at least 3 sides." << std::endl;
        return vertices;
    }

    double angleIncrement = 2 * M_PI / numSides; 
    
    for (int i = 0; i < numSides; ++i) {
        double angle = i * angleIncrement;
        double x = radius * cos(angle);
        double y = radius * sin(angle);
        vertices.push_back({x, y});
    }
    return vertices;
}

int main() {
    int numSides;
    double radius;

    std::cout << "Enter the number of sides for the polygon (n >= 3): ";
    std::cin >> numSides;

    std::cout << "Enter the radius of the polygon: ";
    std::cin >> radius;

    std::vector<std::pair<double, double>> polygonVertices = calculatePolygonVertices(numSides, radius);

    if (!polygonVertices.empty()) {
        std::cout << "Vertices of the regular " << numSides << "-sided polygon:" << std::endl;
        for (size_t i = 0; i < polygonVertices.size(); ++i) {
            std::cout << "Vertex " << i + 1 << ": (" << polygonVertices[i].first << ", " << polygonVertices[i].second << ")" << std::endl;
        }
    }

    return 0;
}
