# Dijkstra's Algorithm in C (Greedy Method)

This repository contains a clean and simple implementation of **Dijkstra’s Algorithm** in the **C programming language**, using the **Greedy Method**. The algorithm calculates the shortest path from a **single source vertex** to all other vertices in a **weighted graph** with **non-negative edge weights**.

---

## 🚀 What is Dijkstra’s Algorithm?

Dijkstra's Algorithm is a **graph traversal algorithm** used to find the shortest path between nodes in a graph. It uses a greedy strategy by always choosing the vertex with the smallest known distance.

---

## 💡 Key Features

- Implemented in **C**
- Accepts custom **adjacency matrix input**
- Finds shortest distance from source to all vertices
- Uses **Greedy approach**
- Designed for clarity and educational purposes

---

## 📘 Algorithm Steps

1. Initialize all distances as **infinity**, except the source (0).
2. Mark all nodes as **unvisited**.
3. Select the unvisited node with the **smallest distance**.
4. Update the distances to all of its unvisited neighbors.
5. Mark the current node as visited.
6. Repeat steps 3–5 until all nodes are visited.

---



