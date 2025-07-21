#include <iostream>
#include <vector>
#include <algorithm> // For std::min

const int INF = 1e9; // Represents infinity for unreachable paths

void floydWarshall(std::vector<std::vector<int>>& graph) {
    int V = graph.size();
    std::vector<std::vector<int>> dist = graph; // Initialize distance matrix with input graph

    // Add all vertices one by one to the set of intermediate vertices
    for (int k = 0; k < V; ++k) {
        // Pick all vertices as source one by one
        for (int i = 0; i < V; ++i) {
            // Pick all vertices as destination for the above picked source
            for (int j = 0; j < V; ++j) {
                // If vertex k is on the shortest path from i to j, then update the value of dist[i][j]
                if (dist[i][k] != INF && dist[k][j] != INF) { // Avoid overflow with INF
                    dist[i][j] = std::min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    // Print the shortest distance matrix
    std::cout << "Shortest distances between all pairs of vertices:\n";
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            if (dist[i][j] == INF) {
                std::cout << "INF\t";
            } else {
                std::cout << dist[i][j] << "\t";
            }
        }
        std::cout << "\n";
    }
}

int main() {
    // Example graph (adjacency matrix representation)
    // INF represents no direct edge
    std::vector<std::vector<int>> graph = {
        {0, 5, INF, 10},
        {INF, 0, 3, INF},
        {INF, INF, 0, 1},
        {INF, INF, INF, 0}
    };

    floydWarshall(graph);

    re