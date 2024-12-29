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

