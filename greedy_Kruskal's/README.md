# Kruskal's Algorithm using Greedy Method (C Implementation)

This repository contains a C program that implements **Kruskal’s Algorithm** for finding the **Minimum Spanning Tree (MST)** of a connected, undirected and weighted graph using the **Greedy method**.

## 🧠 Algorithm Overview

**Kruskal’s Algorithm** follows the greedy approach by sorting all edges in ascending order of their weight and selecting the smallest weight edge that doesn’t form a cycle until we have `V-1` edges in the MST.

### Steps:
1. Sort all edges based on weight.
2. Initialize a parent and rank array for union-find.
3. Iterate over edges and add the edge to MST if it doesn’t form a cycle.
4. Use **Union-Find** with **path compression** and **union by rank** for efficiency.

## 💻 Features

- Efficient MST construction using Union-Find.
- Edge structure and graph modular design.
- Sorts edges using `qsort`.
- Example included in the main function.


