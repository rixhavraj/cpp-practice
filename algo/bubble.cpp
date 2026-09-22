#include <iostream>
#include <vector>
#include <utility>

void bubbleSort(std::vector<int>&arr){
    int n = arr.size();
    bool swapped;

    for(int i=0; i<n-1; ++i){
        swapped = false;

        for(int j=0; j<n-i-1; ++j){
            if(arr[j]>arr[j+1]){
                std::swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
}

void printArray(const std::vector<int>& arr){
            for(int num : arr){
                std::cout<<num<<" ";
            }
            std::cout <<"\n";
        }

        int main(){
            std::vector<int> data = {22, 34, 25, 99, 69, 88, 90};
            std::cout<<"Original array...\n";
            printArray(data);
            bubbleSort(data);
            std::cout<<"sorted Array:  ";
            printArray(data);
            return 0;
        }


/*Step-by-Step Explanation
1. The Core Logic (Adjacent Comparison)
The algorithm starts at the beginning of the array and compares the first two elements (arr[j] and arr[j+1]). If the left element is larger than the right element, they swap positions. It then moves to the next pair (arr[1] and arr[2]), repeating this until it reaches the end of the unsorted portion.
2. The Inner Loop (j < n - i - 1)
• Why - 1? Because we check arr[j + 1], we must stop one element before the end to avoid an "out of bounds" index error.
• Why - i? After the first pass (i = 0), the single largest element is guaranteed to be at the very last index. After the second pass (i = 1), the second largest element is in the second-to-last position. The - i optimization avoids re-checking these already sorted elements at the end of the array.
3. The Outer Loop (i < n - 1)
The outer loop tracks the number of passes. For an array of size n, we need at most n-1 passes to sort the entire list because once n-1 elements are correctly placed, the last remaining element must automatically be in its correct spot.
4. The Early-Exit Optimization (swapped flag)
In a standard bubble sort, the algorithm will execute all passes even if the array becomes fully sorted early on. By adding a swapped boolean tracking variable, we check if any elements changed places during a complete pass. If swapped remains false, it means the array is already perfectly sorted, and we can break out of the loop early.
Complexity Analysis
• Time Complexity:
	• Worst and Average Case: O(n²) — Occurs when the array is in reverse order or completely random. Every element has to be compared with every other element.
	• Best Case: O(n) — Occurs when the array is already sorted. The inner loop runs once, notices no swaps happened due to our optimization flag, and terminates.
• Space Complexity: O(1) (Auxiliary) — Bubble sort is an in-place algorithm. It modifies the original array directly and only requires a tiny amount of extra memory for temporary variables (like the swapped flag)