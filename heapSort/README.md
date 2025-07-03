📌 Definition:

  Heap Sort is a comparison-based sorting technique based on a Binary Heap data structure (Max-Heap for ascending sort). It divides the input into a sorted and an unsorted region and shrinks the unsorted region by    extracting the largest element and moving it to the sorted region.


🧠 How It Works:

Build a Max-Heap from the input data.

Swap the root (maximum element) with the last element.

Reduce the heap size by 1.

Heapify the root again.

Repeat steps 2–4 until the heap size becomes 1.


✅ Time & Space Complexity: 

Time: Best, Average, Worst: O(n log n)

Space: O(1) (in-place)Not Stable


