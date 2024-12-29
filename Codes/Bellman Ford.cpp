#include <iostream>
#include <vector>
#include <climits> // For INT_MAX
using namespace std;

// Structure to represent an edge in the graph
struct Edge {
    int u, v, weight;
};

// Function to print the shortest path from the source
void printDistances(const vector<int> &dist, int V) {
    cout << "Vertex Distance from Source\n";
    for (int i = 0; i < V; i++) {
        if (dist[i] == INT_MAX) {
            cout << i << "\t\t" << "INF" << endl;
        } else {
            cout << i << "\t\t" << dist[i] << endl;
        }
    }
}

// Bellman-Ford algorithm to find the shortest path
bool bellmanFord(const vector<Edge> &edges, int V, int source) {
    // Initialize distances from source to all other vertices as INFINITE
    vector<int> dist(V, INT_MAX);
    dist[source] = 0;

    // Relax all edges V-1 times
    for (int i = 1; i <= V - 1; i++) {
        for (const auto &edge : edges) {
            int u = edge.u;
            int v = edge.v;
            int weight = edge.weight;

            // Relaxation step: update the distance if a shorter path is found
            if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
            }
        }
    }

    // Check for negative-weight cycles by iterating once more
    for (const auto &edge : edges) {
        int u = edge.u;
        int v = edge.v;
        int weight = edge.weight;

        // If a shorter path is still found, then a negative-weight cycle exists
        if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) {
            cout << "Graph contains a negative-weight cycle.\n";
            return false;
        }
    }

    // Print the final distances from the source
    printDistances(dist, V);
    return true;
}

int main() {
    int V, E, source;
    cout << "Enter the number of vertices: ";
    cin >> V;
    cout << "Enter the number of edges: ";
    cin >> E;

    vector<Edge> edges(E);

    // Input the edges and their weights
    cout << "Enter the edges (u, v, weight):\n";
    for (int i = 0; i < E; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].weight;
    }

    // Input the source vertex
    cout << "Enter the source vertex: ";
    cin >> source;

    // Run Bellman-Ford algorithm
    if (!bellmanFord(edges, V, source)) {
        cout << "No solution due to negative-weight cycle.\n";
    }

    return 0;
}
