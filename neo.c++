#include <iostream>
using namespace std;
int main() {
    int r1, c1, r2, c2;
    cout<<"enter number of rows for 1st matrics = ";
    cin>>r1;
    cout<<"\n enter number of columns for 1nd matrics = ";
    cin>>c1;
    cout<<"\n enter number of rows for 2nd matrics = ";
    cin>>r2;
    cout<<"\n enter number of colunms for 2nd matrics = ";
    cin>>c2;

    //check matrics multiplication possible or not

    if(c1!= r2){
        cout<<"\nMatrics multiplication not possible";
        }

        int A[r1][c1], B[r2][c2];
        int result[r1][c2]={0};

        cout<<"Enter the elements for 1st matrics\n";
        for(int i=0; i<r1; i++){
            cout<<endl;
            for(int j=0; j<c1; j++){
                cin>>A[i][j];
                cout<<A[i][j];
            }
        }

        cout<<"\nEnter the elements for 2nd matrics\n";
        for(int i=0; i<r2; i++){
            cout<<endl;
            for(int j=0; j<c2; j++){
                cin>>B[i][j];
                cout<<B[i][j];
            }
        }

        //multiplication logic

        for(int i=0; i<r1; i++){
            for(int j=0; j<c2; j++){
                for(int k=0; k<c1; k++){
                    result[i][j]+= A[i][k]*B[k][j];
                }
            }
        }

        //print the result

        cout<<"\nThe result of matrics multiplication is...\n ";
        for(int i=0; i<r1; i++){
            cout<<endl;
            for(int j=0; j<c2; j++){
                cout<<result[i][j]<<"";

            }
        }


    return 0;
}