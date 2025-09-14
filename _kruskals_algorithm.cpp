#include <iostream>
#include <vector>
#include <algorithm>

struct Edge {
    int src, dest, weight;
};

bool compareEdges(const Edge& a, const Edge& b) {
    return a.weight < b.weight;
}

class DSU {
    std::vector<int> parent;
    std::vector<int> rank; 

public:
    DSU(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; ++i) {
            parent[i] = i; 
        }
    }

    int find(int i) {
        if (parent[i] == i)
            return i;
        return parent[i] = find(parent[i]);
    }

    void unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX != rootY) {
            if (rank[rootX] < rank[rootY]) {
                parent[rootX] = rootY;
            } else if (rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
            } else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }
};

int kruskalMST(int V, std::vector<Edge>& edges) {
    std::sort(edges.begin(), edges.end(), compareEdges);

    DSU dsu(V);
    int mstWeight = 0;
    int edgesCount = 0;

    for (const auto& edge : edges) {
        int u = edge.src;
        int v = edge.dest;
        int weight = edge.weight;

        if (dsu.find(u) != dsu.find(v)) {
            dsu.unite(u, v);
            mstWeight += weight;
            edgesCount++;
            if (edgesCount == V - 1) {
                break;
            }
        }
    }
    return mstWeight;
}

int main() {
    int V = 4; 
    std::vector<Edge> edges = {
        {0, 1, 10},
        {1, 3, 15},
        {2, 3, 4},
        {2, 0, 6},
        {0, 3, 5}
    };

    int minCost = kruskalMST(V, edges);
    std::cout << "Minimum Spanning Tree Cost: " << minCost << std::endl; // Expected output: 19

    return 0;
}
