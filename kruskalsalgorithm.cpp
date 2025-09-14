#include <vector>
#include <algorithm> 
#include <numeric>   

struct Edge {
    int u, v, weight;
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
        std::iota(parent.begin(), parent.end(), 0); 
        rank.assign(n, 0); 
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

std::vector<Edge> kruskalMST(int V, std::vector<Edge>& edges) {
    std::vector<Edge> mst;
    std::sort(edges.begin(), edges.end(), compareEdges); 

    DSU dsu(V); 

    int edges_in_mst = 0;
    for (const auto& edge : edges) {
        if (dsu.find(edge.u) != dsu.find(edge.v)) { 
            mst.push_back(edge);
            dsu.unite(edge.u, edge.v);
            edges_in_mst++;
            if (edges_in_mst == V - 1) 
                break;
        }
    }
    return mst;
}
