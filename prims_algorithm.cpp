#include <iostream>
#include <vector>
#include <queue>
#include <limits> // For numeric_limits

const int INF = std::numeric_limits<int>::max();

// Structure to represent an edge
struct Edge {
    int to;
    int weight;
};

// Custom comparator for priority queue (min-heap)
struct ComparePair {
    bool operator()(const std::pair<int, int>& a, const std::pair<int, int>& b) {
        return a.first > b.first; // Min-heap based on weight
    }
};

void primMST(int V, const std::vector<std::vector<Edge>>& adj) {
    std::vector<int> key(V, INF);
    std::vector<int> parent(V, -1);
    std::vector<bool> inMST(V, false);
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, ComparePair> pq;

    // Start with vertex 0
    key[0] = 0;
    pq.push({0, 0}); // {weight, vertex}

    for (int count = 0; count < V; ++count) {
        int u = pq.top().second;
        pq.pop();

        if (inMST[u]) continue; // Already processed

        inMST[u] = true;

        for (const Edge& edge : adj[u]) {
            int v = edge.to;
            int weight = edge.weight;

            if (!inMST[v] && weight < key[v]) {
                key[v] = weight;
                parent[v] = u;
                pq.push({key[v], v});
            }
        }
    }

    // Print the MST edges
    std::cout << "Edges of MST:\n";
    for (int i = 1; i < V; ++i) {
        if (parent[i] != -1) { // Check if a parent exists
            std::cout << parent[i] << " - " << i << " : " << key[i] << "\n";
        }
    }
}

int main() {
    int V = 5; // Number of vertices
    std::vector<std::vector<Edge>> adj(V);

    // Example graph (adjacency list)
    adj[0].push_back({1, 2});
    adj[0].push_back({3, 6});

    adj[1].push_back({0, 2});
    adj[1].push_back({2, 3});
    adj[1].push_back({3, 8});
    adj[1].push_back({4, 5});

    adj[2].push_back({1, 3});
    adj[2].push_back({4, 7});

    adj[3].push_back({0, 6});
    adj[3].push_back({1, 8});
    adj[3].push_back({4, 9});

    adj[4].push_back({1, 5});
    adj[4].push_back({2, 7});
    adj[4].push_back({3, 9});

    primMST(V, adj);

    return 0;
}