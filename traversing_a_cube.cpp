#include <iostream>
#include <vector>

struct Vertex {
    double x, y, z;
};

int main() {
    // Representing a cube with 8 vertices
    std::vector<Vertex> vertices(8);

    // Initialize the vertices of a unit cube (for example)
    vertices[0] = {0.0, 0.0, 0.0};
    vertices[1] = {1.0, 0.0, 0.0};
    vertices[2] = {0.0, 1.0, 0.0};
    vertices[3] = {1.0, 1.0, 0.0};
    vertices[4] = {0.0, 0.0, 1.0};
    vertices[5] = {1.0, 0.0, 1.0};
    vertices[6] = {0.0, 1.0, 1.0};
    vertices[7] = {1.0, 1.0, 1.0};

    // Traverse the vertices and print their coordinates
    std::cout << "Traversing Cube Vertices:" << std::endl;
    for (int i = 0; i < vertices.size(); ++i) {
        std::cout << "Vertex " << i << ": (" << vertices[i].x << ", " << vertices[i].y << ", " << vertices[i].z << ")" << std::endl;
    }

    return 0;
}