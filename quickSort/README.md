📌 Definition:

Quick Sort is a highly efficient Divide and Conquer sorting algorithm. It works by selecting a pivot element, then partitioning the array such that:

Elements less than the pivot go to the left.

Elements greater than the pivot go to the right.

It then recursively sorts the subarrays.



🧠 How It Works:

Choose a pivot (commonly the last element).

Partition the array around the pivot:

Elements less than pivot on left

Elements greater on right

Recursively apply Quick Sort on left and right subarrays.


✅ Time & Space Complexity:

Best & Average Case: O(n log n)

Worst Case: O(n²) – when the pivot is smallest/largest repeatedly

Space: O(log n) for recursion stack (in-place sorting)

Not Stable



