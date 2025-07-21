dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

#include <iostream>
#include <vector>
#include <algorithm> // For std::min

const int INF = 1e9; // A large value representing infinity

void floydWarshall(std::vector<std::vector<int>>& graph) {
    int V = graph.size();

    // Initialize distance matrix
    std::vector<std::vector<int>> dist = graph;

    // Apply the algorithm
    for (int k = 0; k < V; ++k) { // Intermediate vertex
        for (int i = 0; i < V; ++i) { // Source vertex
            for (int j = 0; j < V; ++j) { // Destination vertex
                // Check for overflow before addition
                if (dist[i][k] != INF && dist[k][j] != INF) {
                    dist[i][j] = std::min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    // Print the shortest path distances
    std::cout << "Shortest path distances between all pairs of vertices:\n";
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

    return 0;
}