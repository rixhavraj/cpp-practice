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