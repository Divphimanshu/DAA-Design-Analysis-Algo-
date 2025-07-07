# Sudoku Solver in C

## Description

This project implements a Sudoku puzzle solver using the backtracking algorithm in C.  
It takes a partially filled 9x9 Sudoku board and fills in the empty cells such that each row, column, and 3x3 subgrid contains all digits from 1 to 9 exactly once.

---

## Features

- Uses recursive backtracking to find a valid solution
- Checks row, column, and 3x3 subgrid constraints for validity
- Prints the Sudoku board before and after solving
- Nicely formatted output with grid lines

---

## How to Compile and Run

1. Save the code in a file named `sudoku_solver.c`.

2. Open terminal/command prompt and compile using:

   ```bash
   gcc -o sudoku_solver sudoku_solver.c
3 ./sudoku_solver
