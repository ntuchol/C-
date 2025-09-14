#include <iostream>
#include <vector>
#include <list>
#include <algorithm> 

class Graph {
private:
    int V; 
    std::list<int>* adj; 

    void DFSUtil(int v, std::vector<bool>& visited) {
        visited[v] = true;
        for (int neighbor : adj[v]) {
            if (!visited[neighbor]) {
                DFSUtil(neighbor, visited);
            }
        }
    }

public:
    Graph(int V) {
        this->V = V;
        adj = new std::list<int>[V];
    }

    ~Graph() {
        delete[] adj;
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u); 
    }

    bool isConnected() {
        std::vector<bool> visited(V, false);
        int i;
        for (i = 0; i < V; i++) {
            if (adj[i].size() > 0)
                break;
        }

        if (i == V) 
            return true;

        DFSUtil(i, visited);

        for (i = 0; i < V; i++) {
            if (visited[i] == false && adj[i].size() > 0)
                return false;
        }
        return true;
    }

    bool hasEulerCircuit() {
        if (!isConnected())
            return false;

        for (int i = 0; i < V; i++) {
            if (adj[i].size() % 2 != 0) 
                return false;
        }
        return true;
    }

    void findEulerCircuit() {
        if (!hasEulerCircuit()) {
            std::cout << "Graph does not have an Euler Circuit." << std::endl;
            return;
        }

        std::vector<int> circuit;
        std::vector<int> current_path;
        int current_vertex = 0; 
        
        for (int i = 0; i < V; ++i) {
            if (!adj[i].empty()) {
                current_vertex = i;
                break;
            }
        }

        current_path.push_back(current_vertex);

        while (!current_path.empty()) {
            if (!adj[current_vertex].empty()) {
                int next_vertex = adj[current_vertex].front();
                adj[current_vertex].pop_front();
                
                for(auto it = adj[next_vertex].begin(); it != adj[next_vertex].end(); ++it) {
                    if (*it == current_vertex) {
                        adj[next_vertex].erase(it);
                        break;
                    }
                }

                current_path.push_back(next_vertex);
                current_vertex = next_vertex;
            } else {
                circuit.push_back(current_vertex);
                current_path.pop_back();
                if (!current_path.empty()) {
                    current_vertex = current_path.back();
                }
            }
        }

        std::reverse(circuit.begin(), circuit.end());
        std::cout << "Euler Circuit: ";
        for (int i = 0; i < circuit.size(); ++i) {
            std::cout << circuit[i] << (i == circuit.size() - 1 ? "" : " -> ");
        }
        std::cout << std::endl;
    }
};

int main() {
    Graph g1(5);
    g1.addEdge(0, 1);
    g1.addEdge(1, 2);
    g1.addEdge(2, 0);
    g1.addEdge(0, 3);
    g1.addEdge(3, 4);
    g1.addEdge(4, 0);
    g1.findEulerCircuit(); 
    
    Graph g2(3);
    g2.addEdge(0, 1);
    g2.addEdge(1, 2);
    g2.findEulerCircuit(); 
    
    return 0;
}
