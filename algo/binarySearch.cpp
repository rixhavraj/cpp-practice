#include <iostream>
using namespace std;

int binarySearch(int arr[],int high, int target){
     int low=0;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==target){
            return mid;
            break;
        }else if(arr[mid]<target){
            low = mid+1;
        }
        else{
            high = mid-1;
        };
    }
    return -1;
};

int main(){
    int arr[]={12, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150,160, 170, 180, 190, 200};
    int high=sizeof(arr)/sizeof(arr[0])-1;
    int target=0;
    while(1){
    cout<<"enter the element: ";
    cin>>target;
    int result = binarySearch(arr,high,target);
    if(result!=-1){
    cout<<result<<" found \n";
    }else cout<<"not found\n";
    }
}

/*
Binary search is an efficient algorithm that locates a target value within a sorted array by repeatedly dividing the search interval in half.  It operates on a divide and conquer strategy, achieving a time complexity of O(log n), which is significantly faster than linear search for large datasets. 

The process begins by comparing the target value to the middle element of the current search space:

If the target matches the middle element, the search terminates and returns the index.
If the target is smaller, the algorithm eliminates the upper half and continues searching the left side.
If the target is larger, it eliminates the lower half and searches the right side. 
This halving process repeats until the target is found or the search space is exhausted. Because it relies on the sorted order of elements to eliminate half of the remaining options in each step, binary search requires the input data to be pre-sorted to function correctly. 
*/