#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

#define V 4  // Number of cities

int tsp(int graph[V][V], bool visited[V], int currPos, int count, int cost, int start, int* minCost) {
    if (count == V && graph[currPos][start]) {
        int totalCost = cost + graph[currPos][start];
        if (totalCost < *minCost)
            *minCost = totalCost;
        return *minCost;
    }

    for (int i = 0; i < V; i++) {
        if (!visited[i] && graph[currPos][i]) {
            visited[i] = true;
            tsp(graph, visited, i, count + 1, cost + graph[currPos][i], start, minCost);
            visited[i] = false; // backtrack
        }
    }

    return *minCost;
}

int main() {
    int graph[V][V] = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    bool visited[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    visited[0] = true;
    int minCost = INT_MAX;

    int result = tsp(graph, visited, 0, 1, 0, 0, &minCost);

    printf("Minimum cost of visiting all cities: %d\n", result);
    return 0;
}
