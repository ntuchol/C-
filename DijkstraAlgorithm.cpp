#include <iostream>
#include <vector>
#include <queue>
#include <limits> // For std::numeric_limits

const int INF = std::numeric_limits<int>::max();

void dijkstra(int source, int num_nodes, const std::vector<std::vector<std::pair<int, int>>>& adj, std::vector<int>& dist) {
    dist.assign(num_nodes, INF);
    dist[source] = 0;

    // Priority queue stores {distance, node} pairs
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq;
    pq.push({0, source});

    while (!pq.empty()) {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        // If a shorter path to u has already been found, skip
        if (d > dist[u]) {
            continue;
        }

        // Explore neighbors
        for (const auto& edge : adj[u]) {
            int v = edge.first;
            int weight = edge.second;

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }
}

int main() {
    int num_nodes = 5;
    std::vector<std::vector<std::pair<int, int>>> adj(num_nodes);

    // Add edges: {destination, weight}
    adj[0].push_back({1, 4});
    adj[0].push_back({2, 1});
    adj[1].push_back({3, 1});
    adj[2].push_back({1, 2});
    adj[2].push_back({3, 5});
    adj[3].push_back({4, 3});

    std::vector<int> distances;
    dijkstra(0, num_nodes, adj, distances);

    std::cout << "Shortest distances from source 0:" << std::endl;
    for (int i = 0; i < num_nodes; ++i) {
        std::cout << "Node " << i << ": " << distances[i] << std::endl;
    }

    return 0;
}