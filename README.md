MergeSort:
Mergesort was pioneered by von Neumann in 1945.Mergesort is a divide and conquer algorithm. The given array is broken up into subarrays of the smallest possible size. The subarrays are 
compared to those adjacent to them, then sorted and  merged. The merging process is repeated until there is only one array left. It has a 
time complexity of O(nlogn) for both the worst case and average case.

Quick Sort:
The algorithm of QuickSort is as follows:
1.A pivot, which is an element from the array, is picked. 
2.The array is sorted such that the elements less than the pivot are placed before the pivot and those more than the pivot are placed 
after it.
3. The above steps are recursed with smaller pivots
Quick sort is not a stable sort, so the relative positions of equal elements are not maintained
The average performance is O(nlogn)

Counting Sort:
In Counting sort, the frequencies of distinct elements of the array to be sorted is counted and stored in an auxiliary array, by mapping 
its value as an index of the auxiliary array. The frequencies are then cummulated, and the elements are displayed by decreasing the cummulative
frequency, starting from the highest element, once for each time it appears
The time complexity is O(n+K) where K is the maximum element of the array


