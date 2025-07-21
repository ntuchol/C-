#include <iostream>
#include <vector>
#include <queue>
#include <limits.h> // For INT_MAX

// Function to find an augmenting path using BFS
bool bfs(const std::vector<std::vector<int>>& rGraph, int s, int t, std::vector<int>& parent) {
    // ... BFS implementation to find a path and fill parent array ...
}

// Ford-Fulkerson Algorithm
int fordFulkerson(std::vector<std::vector<int>> graph, int s, int t) {
    std::vector<std::vector<int>> rGraph = graph; // Initialize residual graph
    std::vector<int> parent(graph.size());
    int max_flow = 0;

    while (bfs(rGraph, s, t, parent)) {
        int path_flow = INT_MAX;
        // Find bottleneck capacity
        for (int v = t; v != s; v = parent[v]) {
            int u = parent[v];
            path_flow = std::min(path_flow, rGraph[u][v]);
        }

        // Update residual capacities
        for (int v = t; v != s; v = parent[v]) {
            int u = parent[v];
            rGraph[u][v] -= path_flow;
            rGraph[v][u] += path_flow; // Add flow to reverse edge
        }
        max_flow += path_flow;
    }
    return max_flow;
}