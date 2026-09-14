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