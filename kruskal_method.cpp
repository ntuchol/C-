#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

// Structure to represent an edge
struct Edge {
    int u, v, weight;

    // Comparator for sorting edges by weight
    bool operator<(const Edge& other) const {
        return weight < other.weight;
    }
};

// Disjoint Set Union (DSU) class
class DSU {
    std::vector<int> parent;
    std::vector<int> rank; // Or size for union by size

public:
    DSU(int n) {
        parent.resize(n);
        rank.resize(n, 0); // Initialize rank to 0
        for (int i = 0; i < n; ++i) {
            parent[i] = i; // Each element is its own parent initially
        }
    }

    // Find operation with path compression
    int find(int i) {
        if (parent[i] == i)
            return i;
        return parent[i] = find(parent[i]);
    }

    // Union operation by rank
    void unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX != rootY) {
            if (rank[rootX] < rank[rootY])
                parent[rootX] = rootY;
            else if (rank[rootX] > rank[rootY])
                parent[rootY] = rootX;
            else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }
};

// Kruskal's Algorithm function
std::vector<Edge> kruskalMST(int V, std::vector<Edge>& edges) {
    std::vector<Edge> mst;
    std::sort(edges.begin(), edges.end()); // Sort edges by weight
    DSU dsu(V);

    for (const auto& edge : edges) {
        if (dsu.find(edge.u) != dsu.find(edge.v)) {
            mst.push_back(edge);
            dsu.unite(edge.u, edge.v);
            if (mst.size() == V - 1) { // MST has V-1 edges
                break;
            }
        }
    }
    return mst;
}

// Main function for demonstration (example usage)
int main() {
    int V = 4; // Number of vertices
    std::vector<Edge> edges = {
        {0, 1, 10},
        {1, 3, 15},
        {2, 3, 4},
        {2, 0, 6},
        {0, 3, 5}
    };

    std::vector<Edge> mst = kruskalMST(V, edges);

    std::cout << "Edges in the Minimum Spanning Tree:\n";
    for (const auto& edge : mst) {
        std::cout << edge.u << " - " << edge.v << " : " << edge.weight << "\n";
    }

    return 0;
}