//#include <mysql.h>
#include <iostream>
#include <vector>

using namespace std;
int main(){
vector<int>nums{3,2,4};
int target=7;
int sum=0;
for( int i=0; i<nums.size(); i++){
    for(int j=i+1; j<nums.size(); j++){
        sum = nums[i] + nums[j];
        if(sum==target){
            cout<<nums[i] <<" "<<nums[j]<<" = ";
            cout<<target;
        }
    }
}
return 0 ;}