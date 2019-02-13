# Selection-Sort

The smallest element is selected from the unsorted array and swapped with the leftmost element, and that element becomes a part of the sorted array. This process continues moving unsorted array boundary by one element to the right.

## Practice Exercise 7

Write a program that implements a selection sort. When given an array with n elements, selection_sort must do the following:

* Search the array to find the largest (use the function that find the index of the largest element),
* Then swap the element at the last posistion of the array.
* Call itself recursively to sort the first n-1 element of the array.

In the main function, initialize an int array, and display the sorted array.
