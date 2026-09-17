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