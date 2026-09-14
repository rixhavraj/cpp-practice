// #include <iostream>
// using namespace std;

// class nd{
//     public:
//     int data;
//     nd*next;

//     nd(int val){
//         data = val;
//         val=0;
//     }
// };

// class list{
//     nd*head;
//     nd*tail;
//     public:
//     list(){
//         head=tail=NULL;
//     }

//     void pushfront(int val){
//         nd*newnd=new nd(val);
//         if(head==NULL){
//             head = tail =newnd;
//             return;
//         }else{
//         newnd-> next=head;
//         head = newnd;
//         }
//     }

//     void print(){
//         nd*temp=head;
//         while(temp!=NULL){
//             cout<<temp-> data ;
//             temp=temp->next;}
//             cout<<endl;

//         }
//     };

//     int main(){
//         list ll;
//         ll.pushfront(5);
//         ll.pushfront(88);
//         return 0;
//     }


#include <iostream> 
#include <queue>

using namespace std;

int main(){
    queue<string>animals;

    //push tha data into queue



    


    cout<<"queue: ";
    //print the elements

    while(!animals.empty()){

        //now print the animals

        cout<<animals.front()<<" ";


        //now pop the elements

        animals.pop();
    }
    cout<<endl;

    return 0;

}