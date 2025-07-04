# N-Queens Problem using Backtracking in C

This repository contains the **C implementation of the N-Queens problem** using the **backtracking algorithm**.

---

## 🧠 Problem Statement

Place N queens on an N×N chessboard such that **no two queens threaten each other**.

Queens can attack along:
- The same **row**
- The same **column**
- The same **diagonal**

---

## 🔍 Algorithm Used

**Backtracking**:
- Try placing a queen one column at a time.
- For each column, try every row and check if it's safe to place the queen.
- If placing the queen leads to a solution, continue; otherwise, backtrack and try a different row.

---

## 📌 Features

- Solve the problem for any board size `N` (default is 8).
- Displays **all possible solutions**.
- Clean and readable board output with `Q` for queens and `.` for empty spots.
- Can be extended to count total solutions.

---



