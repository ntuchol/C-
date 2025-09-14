#include <iostream>
#include <vector>
#include <limits> 

struct Edge {
    int source, destination, weight;
};

void bellmanFord(int V, int E, const std::vector<Edge>& edges, int source) {
    std::vector<long long> distance(V, std::numeric_limits<long long>::max());
    std::vector<int> predecessor(V, -1);

    distance[source] = 0;

    for (int i = 0; i < V - 1; ++i) {
        for (const auto& edge : edges) {
            int u = edge.source;
            int v = edge.destination;
            int w = edge.weight;

            if (distance[u] != std::numeric_limits<long long>::max() && distance[u] + w < distance[v]) {
                distance[v] = distance[u] + w;
                predecessor[v] = u;
            }
        }
    }

    for (const auto& edge : edges) {
        int u = edge.source;
        int v = edge.destination;
        int w = edge.weight;

        if (distance[u] != std::numeric_limits<long long>::max() && distance[u] + w < distance[v]) {
            std::cout << "Graph contains negative weight cycle!" << std::endl;
            return;
        }
    }
    std::cout << "Shortest distances from source " << source << ":" << std::endl;
    for (int i = 0; i < V; ++i) {
        if (distance[i] == std::numeric_limits<long long>::max()) {
            std::cout << "Vertex " << i << ": INF" << std::endl;
        } else {
            std::cout << "Vertex " << i << ": " << distance[i] << std::endl;
        }
    }
}

