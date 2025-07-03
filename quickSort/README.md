# Quick Sort in C

This repository contains a simple and well-documented implementation of the **Quick Sort** algorithm using the C programming language. Quick Sort is a highly efficient, in-place, divide-and-conquer sorting algorithm widely used in practice.

## 🔧 Features

- Written in clean, standard C
- Fast and efficient for large datasets
- In-place sorting (no extra memory for copying arrays)
- Suitable for learning and academic purposes
- Contains meaningful comments for easy understanding

## 📌 Algorithm Overview

**Quick Sort** works by:
1. Selecting a 'pivot' element from the array.
2. Partitioning the other elements into two sub-arrays:
   - Elements less than the pivot
   - Elements greater than the pivot
3. Recursively applying the above steps to the sub-arrays.

**Time Complexity:**
- Worst Case: O(n²) *(rare - when pivot is poorly chosen)*
- Average Case: O(n log n)
- Best Case: O(n log n)

**Space Complexity:** O(log n) (due to recursive stack calls)



