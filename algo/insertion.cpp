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