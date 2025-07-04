#include <stdio.h>
#include <stdlib.h>

// Structure to represent an edge
struct Edge {
    int src, dest, weight;
};

// Structure to represent a graph
struct Graph {
    int V, E;
    struct Edge* edge;
};

// Create a graph with V vertices and E edges
struct Graph* createGraph(int V, int E) {
    struct Graph* graph = (struct Graph*) malloc(sizeof(struct Graph));
    graph->V = V;
    graph->E = E;
    graph->edge = (struct Edge*) malloc(E * sizeof(struct Edge));
    return graph;
}

// Find set of an element i (with path compression)
int find(int parent[], int i) {
    if (parent[i] != i)
        parent[i] = find(parent, parent[i]);
    return parent[i];
}

// Union of two sets x and y (using union by rank)
void Union(int parent[], int rank[], int x, int y) {
    int xroot = find(parent, x);
    int yroot = find(parent, y);

    if (rank[xroot] < rank[yroot])
        parent[xroot] = yroot;
    else if (rank[xroot] > rank[yroot])
        parent[yroot] = xroot;
    else {
        parent[yroot] = xroot;
        rank[xroot]++;
    }
}

// Compare two edges according to their weights
int compareEdges(const void* a, const void* b) {
    struct Edge* e1 = (struct Edge*)a;
    struct Edge* e2 = (struct Edge*)b;
    return e1->weight > e2->weight;
}

// Kruskal's Algorithm
void KruskalMST(struct Graph* graph) {
    int V = graph->V;
    struct Edge result[V]; // Store result MST
    int e = 0, i = 0;

    qsort(graph->edge, graph->E, sizeof(graph->edge[0]), compareEdges);

    int* parent = (int*) malloc(V * sizeof(int));
    int* rank = (int*) malloc(V * sizeof(int));

    for (int v = 0; v < V; ++v) {
        parent[v] = v;
        rank[v] = 0;
    }

    while (e < V - 1 && i < graph->E) {
        struct Edge next_edge = graph->edge[i++];

        int x = find(parent, next_edge.src);
        int y = find(parent, next_edge.dest);

        if (x != y) {
            result[e++] = next_edge;
            Union(parent, rank, x, y);
        }
    }

    printf("Edges in the Minimum Spanning Tree (MST):\n");
    int minimumCost = 0;
    for (i = 0; i < e; ++i) {
        printf("%d -- %d == %d\n", result[i].src, result[i].dest, result[i].weight);
        minimumCost += result[i].weight;
    }
    printf("Minimum Cost of MST: %d\n", minimumCost);

    free(parent);
    free(rank);
}

// Driver Code
int main() {
    int V = 4; // Number of vertices
    int E = 5; // Number of edges
    struct Graph* graph = createGraph(V, E);

    // Example graph
    graph->edge[0] = (struct Edge){0, 1, 10};
    graph->edge[1] = (struct Edge){0, 2, 6};
    graph->edge[2] = (struct Edge){0, 3, 5};
    graph->edge[3] = (struct Edge){1, 3, 15};
    graph->edge[4] = (struct Edge){2, 3, 4};

    KruskalMST(graph);

    free(graph->edge);
    free(graph);
    return 0;
}
