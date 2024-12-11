#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Edge
{
    int u, v, w;

    bool operator<(const Edge& other) const
    {
        return w < other.w;
    }
};


void unionSets(int arr[], int n, int u, int v) {
    int temp = arr[u];
    for (int i = 0; i < n; i++) {
        if (arr[i] == temp) {
            arr[i] = arr[v];
        }
    }
}


int find(int arr[], int u, int v) {
    if (arr[u] == arr[v]) {
        return 1;
    } else {
        return 0;
    }
}

int kruskal(int n, vector<Edge>& edges)
{
    sort(edges.begin(), edges.end());

    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        arr[i] = i;
    }

    int mstWeight = 0;
    vector<Edge> mstEdges;

    for (size_t i = 0; i < edges.size(); ++i)
    {
        if (find(arr, edges[i].u, edges[i].v) == 0)
        {
            unionSets(arr, n, edges[i].u, edges[i].v);
            mstWeight += edges[i].w;
            mstEdges.push_back(edges[i]);
        }
    }

    cout << "Edges in the MST:\n";
    for (size_t i = 0; i < mstEdges.size(); ++i)
    {
        cout << mstEdges[i].u << " -- " << mstEdges[i].v
             << " (Weight: " << mstEdges[i].w << ")\n";
    }
    return mstWeight;
}

void Dijkstra::short_path(int src)
{
    for(int i=0;i<n;i++)
    {

    }
}

int main()
 {
    int n, m;
    cout << "Enter number of vertices: ";
    cin >> n;
    cout << "Enter number of edges: ";
    cin >> m;

    vector<Edge> edges;
    cout << "Enter the edges (u, v, w):\n";
    for (int i = 0; i < m; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        Edge edge;
        edge.u = u;
        edge.v = v;
        edge.w = w;
        edges.push_back(edge);
    }
    int mstWeight = kruskal(n, edges);
    cout << "Total Weight of MST: " << mstWeight << endl;
    return 0;
}
