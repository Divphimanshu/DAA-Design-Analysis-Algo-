#include <stdio.h>
#include <limits.h>

#define V 100  // Maximum number of vertices

// Function to find the vertex with the minimum distance
int minDistance(int dist[], int visited[], int n) {
    int min = INT_MAX, min_index;

    for (int v = 0; v < n; v++)
        if (!visited[v] && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }

    return min_index;
}

// Function to print the shortest distances
void printSolution(int dist[], int n, int src) {
    printf("Vertex\tDistance from Source (%d)\n", src);
    for (int i = 0; i < n; i++)
        printf("%d\t%d\n", i, dist[i]);
}

// Dijkstra's algorithm implementation
void dijkstra(int graph[V][V], int n, int src) {
    int dist[V];      // Output array: shortest distances
    int visited[V];   // visited[i] is true if vertex i is included

    // Initialize distances and visited array
    for (int i = 0; i < n; i++) {
        dist[i] = INT_MAX;
        visited[i] = 0;
    }

    dist[src] = 0;  // Distance of source to itself is 0

    for (int count = 0; count < n - 1; count++) {
        int u = minDistance(dist, visited, n);
        visited[u] = 1;

        // Update distances of adjacent vertices
        for (int v = 0; v < n; v++)
            if (!visited[v] && graph[u][v] && dist[u] != INT_MAX
                && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }

    printSolution(dist, n, src);
}

// Main function
int main() {
    int n, src;
    int graph[V][V];

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix (0 if no edge):\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    printf("Enter source vertex: ");
    scanf("%d", &src);

    dijkstra(graph, n, src);

    return 0;
}
