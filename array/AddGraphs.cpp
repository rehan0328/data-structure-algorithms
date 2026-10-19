#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 5; // 5 vertices(0 through 4)
// The values sitting inside each node (circle)
    vector<int> nodeValues = {10, 20, 30, 40, 50};
// Adjacency list: This is how code represents "lines/edges" connecting nodes.
// adj[i] contains a list of all nodes connected to node i by an edge.
    vector<vector<int>> adj(n);
// --- ADDING EDGES (The lines connecting the circles) ---
// Line between Node 0 and Node 1
    adj[0].push_back(1);
    adj[1].push_back(0);
// Line between Node 1 and Node 2
    adj[1].push_back(2);
    adj[2].push_back(1);
// Line between Node 2 and Node 3
    adj[2].push_back(3);
    adj[3].push_back(2);
// Line between Node 3 and Node 4
    adj[3].push_back(4);
    adj[4].push_back(3);
// --- TRAVERSING THE GRAPH USING EDGES TO FIND THE SUM ---
    vector<bool> visited(n, false);
    vector<int> queue;
// Start at Node 0
    queue.push_back(0);
    visited[0] = true;
    int head = 0;
    int totalSum = 0;
    while (head < queue.size()) {
        int curr = queue[head++];
        totalSum += nodeValues[curr]; // Add the current node's value
        // Look at every edge leading out from this node (its neighbors)
        for (int neighbor : adj[curr]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                queue.push_back(neighbor); // Walk along the edge to the next node
            }
        }
    }
   cout << "Sum of all nodes in the graph: " << totalSum << endl;
    return 0;
}