#include <iostream>
using namespace std;

class Graph {
    static const int MAX_NODES = 10; // Maximum nodes for the example
    int numNodes;
    int adjMatrix[MAX_NODES][MAX_NODES]; // Adjacency matrix

public:
    Graph(int nodes) : numNodes(nodes) {
        // Initialize the adjacency matrix with 0s (no edges)
        for (int i = 0; i < numNodes; ++i) {
            for (int j = 0; j < numNodes; ++j) {
                adjMatrix[i][j] = 0;
            }
        }
    }

    // Function to add an edge to the adjacency matrix
    void addEdge(int src, int dest) {
        adjMatrix[src][dest] = 1;
    }

    // Warshall's Algorithm to compute transitive closure
    void warshall() {
        for (int k = 0; k < numNodes; ++k) {
            for (int i = 0; i < numNodes; ++i) {
                for (int j = 0; j < numNodes; ++j) {
                    adjMatrix[i][j] = adjMatrix[i][j] || (adjMatrix[i][k] && adjMatrix[k][j]);
                }
            }
        }
    }

    // Check if the graph contains a cycle
    bool hasCycle() {
        for (int i = 0; i < numNodes; ++i) {
            if (adjMatrix[i][i] == 1) {
                return true;  // A cycle exists if a vertex has a path to itself
            }
        }
        return false;
    }

    // Function to print if the graph has a cycle
    void printResult() {
        if (hasCycle()) {
            cout << "The graph has a cycle (No)." << endl;
        } else {
            cout << "The graph does not have a cycle (Yes)." << endl;
        }
    }

    // Display the adjacency matrix
    void displayMatrix() {
        for (int i = 0; i < numNodes; ++i) {
            for (int j = 0; j < numNodes; ++j) {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int nodes = 4;
    Graph graph(nodes);

    // Adding directed edges
    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(2, 3);
    graph.addEdge(3, 1);

    // Display the initial adjacency matrix
    cout << "Initial Adjacency Matrix:\n";
    graph.displayMatrix();

    // Apply Warshall's algorithm
    graph.warshall();

    // Display the transitive closure matrix
    cout << "Transitive Closure Matrix:\n";
    graph.displayMatrix();

    // Check and print if the graph has a cycle
    graph.printResult();

    return 0;
}
