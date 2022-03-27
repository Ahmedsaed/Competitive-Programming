# Sorting Algorithms

## Selection Sort

Maintain two parts of the array, sorted and unsorted parts. Starting with the sorted part being empty and the unsorted part being `A[0...N-1]`, repeatedly find the smallest integer in the unsorted part and swap it to the end of the sorted part.

Time complexity: O(N^2)

## Bubble Sort

For each element starting from the first, compare with the adjacent element and swap the two if they are in incorrect order, i.e., `arr[i] > arr[i+1]`. 

Time complexity: O(N^2)

## Insertion Sort

Insertion sort maintains the sorted part of the array at the beginning of the array. For ith element, `arr[0..i-1]` is sorted; we then search for the position where `arr[i]` belongs, insert it at that position, and shift the affected elements to right.

Time complexity: O(N^2)

## Merge Sort

#### Divide and conquer

Merge is a divide and conquer algorithm. The array to be sorted is divided into two halves and each half becomes sorted by recursively splitting into more halves. After the two halves become sorted, they’re merged into a sorted array.

#### Merge sort has two parts:

- Divide - Split the array recursively into two halves until you are left with single elements
- Conquer - Merge the smaller sorted arrays

Time complexity: O(NlogN)

## Quick Sort

#### Divide and conquer

Quick sort is another divide and conquer algorithm, like merge sort. It picks an element and partitions the array around it, then recursively sorts the two partitions.

#### Pivot

To partition, we pick one element as the pivot. There are several ways to do this:

- Take the first element
- Take the last element
- Pick a random element as pivot
- Pick the median as the pivot

After picking the pivot, we need to partition the array into two halves with a pivot in the middle such that the left part only has elements less than the pivot and the right part has elements only greater than the pivot. Then recursively do this for the left and right partition

Worst-case complexity turns out to be O(N^2)

Pick random pivots. The worst case is still O(N^2), but the average case is O(NlogN). 
