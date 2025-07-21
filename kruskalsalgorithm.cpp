#include <vector>
#include <algorithm> // For std::sort
#include <numeric>   // For std::iota

// Structure to represent an edge
struct Edge {
    int u, v, weight;
};

// Comparator for sorting edges by weight
bool compareEdges(const Edge& a, const Edge& b) {
    return a.weight < b.weight;
}

// Disjoint Set Union (DSU) class
class DSU {
    std::vector<int> parent;
    std::vector<int> rank; // For union by rank optimization

public:
    DSU(int n) {
        parent.resize(n);
        std::iota(parent.begin(), parent.end(), 0); // Initialize each element as its own parent
        rank.assign(n, 0); // Initialize ranks to 0
    }

    int find(int i) {
        if (parent[i] == i)
            return i;
        return parent[i] = find(parent[i]); // Path compression
    }

    void unite(int i, int j) {
        int root_i = find(i);
        int root_j = find(j);

        if (root_i != root_j) {
            // Union by rank
            if (rank[root_i] < rank[root_j])
                parent[root_i] = root_j;
            else if (rank[root_i] > rank[root_j])
                parent[root_j] = root_i;
            else {
                parent[root_j] = root_i;
                rank[root_i]++;
            }
        }
    }
};

// Function to find MST using Kruskal's algorithm
std::vector<Edge> kruskalMST(int V, std::vector<Edge>& edges) {
    std::vector<Edge> mst;
    std::sort(edges.begin(), edges.end(), compareEdges); // Sort edges by weight

    DSU dsu(V); // Initialize DSU for V vertices

    int edges_in_mst = 0;
    for (const auto& edge : edges) {
        if (dsu.find(edge.u) != dsu.find(edge.v)) { // If adding this edge doesn't form a cycle
            mst.push_back(edge);
            dsu.unite(edge.u, edge.v);
            edges_in_mst++;
            if (edges_in_mst == V - 1) // MST has V-1 edges
                break;
        }
    }
    return mst;
}