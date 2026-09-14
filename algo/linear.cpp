#include <iostream>
using namespace std;
int main(){
    int n;
    int target;
    long startTime;
    int a[]={1,3,55,6,9,0};
    int b[]={19,30,505,06,79,00};
    int x=6;

    cout<<"Enter the number you want to search = ";
    cin>>target;
    bool found;
    for(int i = 0; i<=5; i++){
        if(target== i[a]){
            cout<<target<<" found at index number "<<i<<endl;
            found=true;
        }
    }
    if(!found){
        cout<<"not found"<<endl;
    }

    cout<<a+1<<endl;
    cout<<a<<endl;
    cout<<**(&a)<<endl;
    cout<<x<<endl;
    cout<<(a[0])<<endl;
    cout<<sizeof(a)<<endl;

    cout<<b+1<<endl;
    cout<<b<<endl;
    cout<<**(&b)<<endl;
    cout<<x<<endl;
    cout<<(b[0])<<endl;
    cout<<sizeof(b)<<endl;
}
