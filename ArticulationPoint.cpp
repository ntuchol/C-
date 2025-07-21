#include <vector>
#include <algorithm>

std::vector<int> adj[/* MAX_VERTICES */];
int disc[/* MAX_VERTICES */];
int low[/* MAX_VERTICES */];
bool visited[/* MAX_VERTICES */];
bool isArticulationPoint[/* MAX_VERTICES */];
int parent[/* MAX_VERTICES */];
int timer;

void findArticulationPointsDFS(int u, int p = -1) {
    visited[u] = true;
    disc[u] = low[u] = timer++;
    parent[u] = p;

    int children = 0;
    for (int v : adj[u]) {
        if (v == p) continue; // Skip parent

        if (visited[v]) {
            low[u] = std::min(low[u], disc[v]); // Back-edge
        } else {
            findArticulationPointsDFS(v, u);
            low[u] = std::min(low[u], low[v]); // Update low based on child's low

            // Articulation point conditions
            if (parent[u] != -1 && low[v] >= disc[u]) {
                isArticulationPoint[u] = true;
            }
            children++;
        }
    }

    // Root node condition
    if (parent[u] == -1 && children > 1) {
        isArticulationPoint[u] = true;
    }
}

// In main or a wrapper function:
// Initialize arrays, build adjacency list
// Call findArticulationPointsDFS for all unvisited nodes to handle disconnected graphs
// For example:
// for (int i = 0; i < V; ++i) {
//     if (!visited[i]) {
//         findArticulationPointsDFS(i);
//     }
// }