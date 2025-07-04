# Complexity and Analysis of BFS Graph Implementation

This document provides a detailed analysis of the **Breadth-First Search (BFS)** algorithm applied on a graph, including notation, time complexity, and space complexity considerations.

---

## 1. Notations Used

| Symbol | Meaning                               |
|--------|-------------------------------------|
| V      | Number of vertices (nodes) in graph |
| E      | Number of edges in the graph         |
| O()    | Big-O notation (upper bound)         |

---

## 2. Time Complexity

- **Adjacency List Representation:**

  BFS visits each vertex and explores all adjacent edges exactly once.

  - Visiting all vertices: **O(V)**
  - Exploring all edges from vertices: **O(E)**

  **Total Time Complexity:**  
  \[
  O(V + E)
  \]

- **Explanation:**  
  Each vertex is enqueued and dequeued once, and every edge in the adjacency list is traversed exactly once during the BFS traversal.

---

## 3. Space Complexity

- **Data Structures Used:**
  - Adjacency list to store the graph:  
    Space proportional to **O(V + E)** because each vertex stores a list of its neighbors.
  - Queue for BFS traversal:  
    Maximum size can be **O(V)** in the worst case.
  - Visited array to mark visited vertices:  
    Uses **O(V)** space.

- **Total Space Complexity:**  
  \[
  O(V + E)
  \]

---

## 4. Summary Table

| Operation         | Time Complexity | Space Complexity |
|-------------------|-----------------|------------------|
| BFS Traversal     | O(V + E)        | O(V + E)         |
| Graph Construction| O(V + E)        | O(V + E)         |

---

## 5. Practical Considerations

- BFS is efficient for **sparse graphs**, where \( E \) is much less than \( V^2 \).
- For **dense graphs** (close to complete graphs), adjacency matrix representation may be used but leads to \( O(V^2) \) complexity.
- BFS is typically used to find the shortest path in **unweighted graphs**.

---

## 6. References

- *Introduction to Algorithms*, Cormen et al.
- GeeksforGeeks: [Breadth First Search or BFS for a Graph](https://www.geeksforgeeks.org/breadth-first-search-or-bfs-for-a-graph/)
- Wikipedia: [Breadth-first search](https://en.wikipedia.org/wiki/Breadth-first_search)

---

## Author

Div.prakash Himanshu  
CSE Student | Data Structures & Algorithms Enthusiast

---

Happy Coding! 🚀
