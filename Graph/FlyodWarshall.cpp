#include <iostream>
#include <climits>  // For using INT_MAX
using namespace std;

const int INF = INT_MAX;  // A constant representing infinity

// Function to implement the Floyd-Warshall algorithm without vectors
void floydWarshall(int graph[][10], int dist[][10], int n) {
    // Initialize the distance matrix from the graph
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (graph[i][j] != 0) {
                dist[i][j] = graph[i][j];  // Set direct edge weights
            }
            if (i == j) {
                dist[i][j] = 0;  // Distance from a vertex to itself is 0
            }
            else if (graph[i][j] == 0) {
                dist[i][j] = INF;  // No direct edge means distance is infinity
            }
        }
    }
    
    // Perform the Floyd-Warshall algorithm
    for (int k = 0; k < n; k++) {  // Consider each vertex as an intermediate vertex
        for (int i = 0; i < n; i++) {  // For each source vertex
            for (int j = 0; j < n; j++) {  // For each destination vertex
                if (dist[i][k] != INF && dist[k][j] != INF) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }
    
    // Output the shortest path matrix
    cout << "Shortest Path Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist[i][j] == INF) {
                cout << "INF ";
            } else {
                cout << dist[i][j] << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n;  // Number of vertices
    cout << "Enter the number of vertices: ";
    cin >> n;
    
    // Adjacency matrix for graph (using a fixed size array)
    int graph[10][10]; // Assume a maximum of 10 vertices for simplicity
    cout << "Enter the adjacency matrix (0 for no edge, positive value for edge weight):" << endl;
    
    // Reading the graph as an adjacency matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }

    // Distance matrix for shortest paths
    int dist[10][10]; // For storing the shortest path distances
    
    // Call Floyd-Warshall to compute shortest paths
    floydWarshall(graph, dist, n);
    
    return 0;
}
