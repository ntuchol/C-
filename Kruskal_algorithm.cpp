#include <vector>
#include <algorithm> 

struct Edge {
    int u, v, weight;
    Edge(int u, int v, int weight) : u(u), v(v), weight(weight) {}
    bool operator<(const Edge& other) const {
        return weight < other.weight;
    }
};

struct DisjointSet {
    std::vector<int> parent;
    DisjointSet(int n) {
        parent.resize(n + 1);
        for (int i = 0; i <= n; ++i) {
            parent[i] = i;
        }
    }

    int find(int i) {
        if (parent[i] == i)
            return i;
        return parent[i] = find(parent[i]);
    }

    void unite(int i, int j) {
        int root_i = find(i);
        int root_j = find(j);
        if (root_i != root_j) {
            parent[root_i] = root_j;
        }
    }
};

int kruskalMST(int V, std::vector<Edge>& edges) {
    std::sort(edges.begin(), edges.end()); 
    DisjointSet ds(V);
    int mst_weight = 0;
    int edges_count = 0;

    for (const auto& edge : edges) {
        if (ds.find(edge.u) != ds.find(edge.v)) { 
            ds.unite(edge.u, edge.v);
            mst_weight += edge.weight;
            edges_count++;
            mst_edges.push_back(edge); 
        }
    }
    return mst_weight;
}
