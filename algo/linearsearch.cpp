#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const std::vector<int>& arr, int target){
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    std::vector<int> numbers = {12,23,44,3,0,90,66};
    int target=0;
    cout<<"Enter the target: \n";
    cin>>target;
    
    int result =linearSearch(numbers, target);
    if(result != -1){
        cout<<"Element fount at index: "<<result+1<< endl;
    }else{

        cout<<"Element not found: "<<endl;
    }
    return 0;

}

/*
Linear search (also known as sequential search) is a basic algorithm that finds a target value within a list or array by checking each element one by one, from the first to the last, until a match is found or the end of the collection is reached.  It is a brute-force approach that does not require the data to be sorted, making it ideal for small datasets, unsorted lists, or linked lists where random access is not efficient. 

The algorithm works by iterating through the data structure sequentially:

Best Case: The target is the first element, resulting in O(1) time complexity. 
Worst Case: The target is the last element or not present, requiring O(n) comparisons where n is the number of elements. 
Space Complexity: It requires O(1) extra space, as it only needs a variable to track the current index.
While less efficient than binary search for large, sorted datasets, linear search is preferred when data is unsorted or when the overhead of sorting is not justified by the search frequency. It simply compares each item to the target value, returning the index of the first match or a failure indicator (like -1) if no match exists. 
*/