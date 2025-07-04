# Travelling Salesman Problem (TSP) in C

This repository contains an implementation of the **Travelling Salesman Problem (TSP)** using **recursion and backtracking** in **C**.

---

## 📌 Problem Statement

Given a set of cities and the cost to travel between each pair of cities, the task is to find the **shortest possible route** that visits every city exactly once and returns to the starting city.

---

## ⚙️ Features

- Solves the TSP using **backtracking**.
- Finds the **minimum cost** path covering all cities.
- Modular code with clear logic and recursion.
- Works on small-sized graphs due to factorial time complexity.

---

## 🧠 Algorithm

**Recursive Backtracking**:
- Start from a city.
- Recursively visit all unvisited cities.
- At each step, accumulate cost and keep track of the minimum.
- Backtrack after each recursive call to explore other paths.

