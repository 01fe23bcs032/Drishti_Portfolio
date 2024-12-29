#include <iostream>
#include <vector>
#include <limits.h> // For INT_MAX
using namespace std;

// Function to find the vertex with the minimum key value that is not included in the MST yet
int minKey(vector<int> &key, vector<bool> &mstSet, int V) {
    int min = INT_MAX, minIndex;

    for (int v = 0; v < V; v++) {
        if (!mstSet[v] && key[v] < min) {
            min = key[v], minIndex = v;
        }
    }

    return minIndex;
}

// Function to print the constructed MST
void printMST(vector<int> &parent, vector<vector<int>> &graph, int V) {
    cout << "Edge \tWeight\n";
    for (int i = 1; i < V; i++) {
        cout << parent[i] << " - " << i << "\t" << graph[i][parent[i]] << " \n";
    }
}

// Prim's Algorithm to construct and print MST for a graph represented using adjacency matrix
void primMST(vector<vector<int>> &graph, int V) {
    // Array to store constructed MST
    vector<int> parent(V);

    // Key values used to pick the minimum weight edge
    vector<int> key(V, INT_MAX);

    // To represent the set of vertices not yet included in MST
    vector<bool> mstSet(V, false);

    // Initialize the key value of the first vertex (arbitrary) to 0
    key[0] = 0;
    parent[0] = -1; // First node is always the root of MST

    // The MST will have V vertices
    for (int count = 0; count < V - 1; count++) {
        // Pick the minimum key vertex not yet included in MST
        int u = minKey(key, mstSet, V);

        // Add the picked vertex to the MST set
        mstSet[u] = true;

        // Update key value and parent index of the adjacent vertices of the picked vertex
        for (int v = 0; v < V; v++) {
            // graph[u][v] is the weight of the edge u-v
            // key[v] is the minimum weight edge connecting v
            // mstSet[v] is false if v is not yet included in MST
            if (graph[u][v] && !mstSet[v] && graph[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }

    // Print the MST
    printMST(parent, graph, V);
}

int main() {
    int V;
    cout << "Enter the number of vertices: ";
    cin >> V;

    // Input adjacency matrix for the graph
    vector<vector<int>> graph(V, vector<int>(V));

    cout << "Enter the adjacency matrix of the graph:\n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cin >> graph[i][j];
        }
    }

    // Run Prim's algorithm
    primMST(graph, V);

    return 0;
}
