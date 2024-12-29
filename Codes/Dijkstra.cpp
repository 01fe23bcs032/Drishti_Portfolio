#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>
using namespace std;

// Define a structure for the edges in the graph
struct Edge {
    int vertex;
    int weight;
};

// Comparator for the priority queue
struct Compare {
    bool operator()(pair<int, int> &a, pair<int, int> &b) {
        return a.second > b.second; // Min-heap based on distance
    }
};

// Dijkstra's Algorithm function
void dijkstra(int V, vector<vector<Edge>> &adjList, int source) {
    // Distance vector, initialized with infinity
    vector<int> dist(V, INT_MAX);

    // Parent vector for path reconstruction
    vector<int> parent(V, -1);
 // Priority queue to select the vertex with the smallest distance
    priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;

    // Set the source distance to 0 and add to the queue
    dist[source] = 0;
    pq.push({source, dist[source]});

    // Set of visited vertices (VT)
    vector<bool> visited(V, false);

    // Process the vertices
    while (!pq.empty()) {
        // Extract the vertex u* with the minimum distance
        int u = pq.top().first;
        pq.pop();

        // If the vertex is already processed, skip it
        if (visited[u]) continue;

        // Mark vertex u* as processed
        visited[u] = true;

        // Traverse through adjacent vertices of u*
        for (auto &edge : adjList[u]) {
            int v = edge.vertex;
            int weight = edge.weight;

            // Relaxation: check if the new distance is smaller
            if (!visited[v] && dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
parent[v] = u; // Update parent for path reconstruction
                pq.push({v, dist[v]});
            }
        }
    }

    // Print the shortest distances from the source
    cout << "Vertex\tDistance from Source\n";
    for (int i = 0; i < V; i++) {
        cout << i << "\t\t" << dist[i] << endl;
    }

    // Optional: Print the paths
    cout << "\nPaths from source:\n";
    for (int i = 0; i < V; i++) {
        if (i != source && dist[i] != INT_MAX) {
            cout << "Path to " << i << ": ";
            int p = i;
            while (p != -1) {
                cout << p << " ";
                p = parent[p];
            }
            cout << endl;
        }
    }
}

int main() {
int V, E, source;

    // Input number of vertices and edges
    cout << "Enter the number of vertices: ";
    cin >> V;
    cout << "Enter the number of edges: ";
    cin >> E;

    // Adjacency list to store graph edges
    vector<vector<Edge>> adjList(V);

    // Input graph edges
    cout << "Enter edges in the format (u v w):\n";
    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adjList[u].push_back({v, w});
        adjList[v].push_back({u, w}); // If undirected graph, include this line
    }

    // Input the source vertex
    cout << "Enter the source vertex: ";
    cin >> source;

    // Run Dijkstra's Algorithm
    dijkstra(V, adjList, source);

    return 0;
}


