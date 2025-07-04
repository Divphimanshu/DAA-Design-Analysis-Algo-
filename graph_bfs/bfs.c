#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_VERTICES 100

// Structure for adjacency list node
struct Node {
    int dest;
    struct Node* next;
};

// Structure for graph
struct Graph {
    int V;
    struct Node* adjList[MAX_VERTICES];
    bool visited[MAX_VERTICES];
};

// Create a new adjacency list node
struct Node* createNode(int dest) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->dest = dest;
    newNode->next = NULL;
    return newNode;
}

// Create a graph with V vertices
struct Graph* createGraph(int V) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->V = V;
    for (int i = 0; i < V; i++) {
        graph->adjList[i] = NULL;
        graph->visited[i] = false;
    }
    return graph;
}

// Add an edge to the graph (undirected)
void addEdge(struct Graph* graph, int src, int dest) {
    struct Node* newNode = createNode(dest);
    newNode->next = graph->adjList[src];
    graph->adjList[src] = newNode;

    // For undirected graph, add the reverse edge too
    newNode = createNode(src);
    newNode->next = graph->adjList[dest];
    graph->adjList[dest] = newNode;
}

// Display the graph
void displayGraph(struct Graph* graph) {
    printf("Graph Adjacency List:\n");
    for (int v = 0; v < graph->V; v++) {
        struct Node* temp = graph->adjList[v];
        printf("Vertex %d:", v);
        while (temp) {
            printf(" -> %d", temp->dest);
            temp = temp->next;
        }
        printf("\n");
    }
}

// BFS traversal from a given source
void bfs(struct Graph* graph, int startVertex) {
    int queue[MAX_VERTICES], front = 0, rear = 0;

    graph->visited[startVertex] = true;
    queue[rear++] = startVertex;

    printf("BFS Traversal starting from vertex %d: ", startVertex);

    while (front < rear) {
        int currentVertex = queue[front++];
        printf("%d ", currentVertex);

        struct Node* temp = graph->adjList[currentVertex];
        while (temp) {
            int adjVertex = temp->dest;
            if (!graph->visited[adjVertex]) {
                graph->visited[adjVertex] = true;
                queue[rear++] = adjVertex;
            }
            temp = temp->next;
        }
    }
    printf("\n");
}

// Main function
int main() {
    int V = 6;  // number of vertices
    struct Graph* graph = createGraph(V);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 4);
    addEdge(graph, 3, 5);
    addEdge(graph, 4, 5);

    displayGraph(graph);

    bfs(graph, 0);  // start BFS from vertex 0

    return 0;
}
