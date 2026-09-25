#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);
        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}   

/*
Quick Sort
This algorithm selects a pivot element and partitions the array so that elements smaller than the pivot are on the left and larger ones on the right.  It then recursively sorts the sub-arrays. While its average time complexity is O(n log n), it can degrade to O(n²) in worst-case scenarios, though it sorts in-place with O(log n) stack space
*/