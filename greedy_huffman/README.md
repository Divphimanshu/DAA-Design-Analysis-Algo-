# Huffman Coding Using Greedy Method (C Language)

Welcome to the **Huffman Coding** project — an implementation of one of the most fundamental greedy algorithms in data compression using the C programming language.

Huffman Coding is a **lossless data compression algorithm** that assigns **variable-length binary codes** to input characters, such that **more frequent characters are assigned shorter codes**. It uses a **Greedy Strategy** to construct an optimal prefix code.

---

## 🧠 Algorithm: Huffman Coding (Greedy Approach)

### Input:
- A set of characters and their corresponding frequencies.

### Output:
- Optimal binary codes for each character with no ambiguity in decoding.

### Steps:

1. **Create a Min Heap** that contains all characters as leaf nodes. Each node stores a character and its frequency.
2. **Repeat until the heap has only one node:**
   - Extract the two nodes with the lowest frequencies.
   - Create a new internal node with:
     - Frequency = sum of the two nodes' frequencies.
     - Left child = first extracted node.
     - Right child = second extracted node.
   - Insert the new node back into the heap.
3. **Generate Huffman Codes** by traversing the tree:
   - Assign `'0'` when moving to the left child.
   - Assign `'1'` when moving to the right child.
4. **Output** the codes for each character.

---

## 🔧 Features

- Implemented in **C**
- Uses **Min Heap** to simulate priority queue
- Greedy method ensures optimal encoding
- Handles dynamic character-frequency input
- Outputs Huffman codes in binary format
- Clean and readable code with comments

---



