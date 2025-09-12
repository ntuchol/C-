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
        if (v == p) continue; 

        if (visited[v]) {
            low[u] = std::min(low[u], disc[v]); 
        } else {
            findArticulationPointsDFS(v, u);
            low[u] = std::min(low[u], low[v]); 
            if (parent[u] != -1 && low[v] >= disc[u]) {
                isArticulationPoint[u] = true;
            }
            children++;
        }
    }

    if (parent[u] == -1 && children > 1) {
        isArticulationPoint[u] = true;
    }
}

