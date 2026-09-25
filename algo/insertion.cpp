#include <iostream>
using namespace std;

// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {
    // Start from the second element (index 1) 
    // as the first element is considered already sorted
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // The element to be positioned
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than 'key'
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // Shift element to the right
            j = j - 1;           // Move left
        }
        
        // Insert the key into its correct sorted position
        arr[j + 1] = key;
    }
}

// Utility function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    // Call the sorting function
    insertionSort(arr, n);

    cout << "Sorted array:   ";
    printArray(arr, n);

    return 0;
}


/*
Insertion sort is a simple, in-place, and stable comparison-based sorting algorithm that builds a sorted array one element at a time, similar to sorting a hand of playing cards.  It divides the input into a sorted subarray (initially just the first element) and an unsorted subarray, iteratively taking the next element from the unsorted part and inserting it into its correct position within the sorted part. 

The algorithm works by comparing the current element (key) with the elements in the sorted subarray from right to left. If a sorted element is larger than the key, it is shifted one position to the right to make space. This shifting continues until an element smaller than or equal to the key is found, at which point the key is inserted into the resulting gap. This process repeats for each element in the unsorted portion until the entire array is sorted. 

Key Characteristics and Complexity:

Time Complexity: The best-case time complexity is 
O(n) when the input is already sorted or nearly sorted.  The average and worst-case time complexities are 
O(n 
2
 ), occurring when the input is in reverse order.
Space Complexity: It is an in-place algorithm with 
O(1) auxiliary space, as it sorts the array without requiring additional storage proportional to the input size. 
Stability: Insertion sort is stable, meaning it preserves the relative order of records with equal keys. 
Use Cases: Due to its simplicity and efficiency on small or nearly sorted datasets, it is often used as a subroutine in hybrid sorting algorithms like Quicksort or Mergesort for small subarrays.
*/