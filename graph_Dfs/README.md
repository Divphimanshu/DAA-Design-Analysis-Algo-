# Graph BFS Traversal in C

This repository contains a C program implementing **Breadth-First Search (BFS)** traversal on a graph using an adjacency list representation. It includes basic graph operations such as adding edges, displaying the graph, and performing BFS traversal from a given starting vertex.

---

## Overview

- Graph represented with **adjacency lists**
- Supports **undirected graphs**
- Basic operations: add edges, display graph
- BFS traversal using a queue
- Written in plain C for learning and educational purposes

---

## What is BFS?

**Breadth-First Search (BFS)** is a graph traversal algorithm that explores vertices layer-wise starting from a source vertex. It visits all neighbors at the current depth before moving to the next level.

**Applications:**
- Finding shortest path in unweighted graphs
- Crawlers and network broadcasting
- Social network analysis
- Level-order traversal of trees/graphs

---

## BFS Algorithm

**Input:** Graph `G` with vertices and edges, and a starting vertex `S`.

**Output:** Traversal order of vertices reachable from `S`.

### Steps:

1. Create a queue and enqueue the starting vertex `S`.
2. Mark the starting vertex `S` as visited.
3. While the queue is not empty:
   - Dequeue a vertex `v` from the queue.
   - Process `v` (e.g., print or store it).
   - For every adjacent vertex `u` of `v`:
     - If `u` is not visited:
       - Mark `u` as visited.
       - Enqueue `u`.
4. Repeat until all reachable vertices are visited.

---

