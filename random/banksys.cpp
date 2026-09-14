#include <iostream>
#include <random>
#include <ctime>
#include <fstream>
#include <string> 
using namespace std;




class bank_account{
    public:
    string name;
    int accountNumber;
    float balance;
    int password;

    bank_account(){
        name = " ";
        accountNumber=0;
        balance = 0.0;
        password = 0;
    }

    bank_account( string name, int accountNumber, float balance, int password){
        this->name=name;
        this->accountNumber=accountNumber;
        this->balance=balance;
        this->password = password;

    };

    void store_details(){
        ofstream file("bank_details.txt", ios ::app);
    if(file.is_open()){
        file<<name<<"," <<accountNumber<<"," <<balance<<"," <<password<<","<<endl;
        file.close();
        cout<<"Data saved";
    }else{
        cout<<"unable to open file...\n";
    }
    }

  
   void creataccount(){
    cout<<"Enter your name: " ;
    cin>>name;
    cout<<"Enter account number : ";
    cin>>accountNumber;
    cout<<"Enter initial balance : ";
    cin>>balance;
    cout<<"Make a 3 Digit password for login: ";
    cin>>password;
    cout<<endl;
    //captcha filling

    int usercapt;
    int capt=captcha();
    cout<<"captcha: "<<captcha();
    cout<<"\ncaptcha: ";
    cin>>usercapt;
    if(capt==usercapt){
    cout<<"Congratulations your account created successfully";
    cout<<endl;
    cout<<"Your account details\n";
    details();}
    else{cout<<"invalid captcha!!!";
    }
    
    store_details();
    
   }

    // function for captcha generation
    
    
    int captcha (){
        for(int i=0; i<10;i++){
            mt19937 gen(time(0));
            uniform_int_distribution<>dis(100,999);
            return dis(gen);
        }
    };


    void deposit(){
        int searchaccno;
        double amount;
        int pass;
        int cap;

        cout<<"Enter your Credentials\n";
        cout<<"Password:";
        cin>>pass;
        cout<<endl;
        if(pass==password){
            cout<<"enter the account_no for deposit : ";
            cin>>searchaccno;
            if(searchaccno == accountNumber){
                cout<<"enter the deposit amount : ";
                cin>>amount;
                cout<<"Captcha:"<<captcha();
                int capt = captcha();
                cout<<endl;
                cout<<"Enter:";
                cin>>cap;
                if(cap==capt){
                    balance+=amount;
                    cout<<amount<<" rupeess is deposited successfully\n";
                    details();
                    store_details();
                }else{
                    cout<<"invalid captcha";
                };

            }else{
                cout<<"\nYou entered wrong account number!!!";
                cout<<endl;
            }
        }else cout<<"Wrong password";
    };

    void withdraw(){
        int searchno;
        double amount;

        cout<<"Enter your Credentials\n";
        cout<<"Password:";
        cin>>password;
        cout<<"Enter the account number for withdrawal : ";
        cin>>searchno;
        if(searchno == accountNumber){
            cout<<"Enter the withdrawal amount : ";
            cin>> amount;
            if(amount>balance){
                cout<<"insufficient balance...! \nYour balance is "<<balance;
            }else{
             balance-=amount;
                cout<<"withdrawal successfull...\n";
                details();
                store_details();
            }
        }else{
            cout<<"\ninvalid account number!!!";
        }
    }

    

    // void getaccountNumber(){
    //     cout<<accountNumber<<" ";
    // }

    // void setaccountNumber(float aN){
    //     accountNumber=aN;
    // }
    
    void details(){
        cout<<"Account holder name:"<<name<<"\nAccount number:"<<accountNumber<<"\nBank Balance:"<<balance<<endl;
    };
};

int main(){

    int info;
    bank_account choose;

    do{
    cout<<endl;
    cout<<"1 FOR CREATE BANK ACCOUNT\n";
    cout<<"2 FOR DEPOSIT\n";
    cout<<"3 FOR WITHRAW\n";
    cout<<"4 FOR VIEW DETAILS\n";
    cout<<"5 FOR EXIT : \n";
    cout<<"Enter any Entery : ";
    cin>>info;

    if(info == 1){
         cout<<"creat your bank account\n";
        choose.creataccount();
    };

    if(info==2){
        choose.deposit();
    }
    if(info==3){
        choose.withdraw();
    };
     if(info==4){
        choose.details();
    }


    }while(info!= 5);

    cout<<info;



    cout<<"\nThanks for visiting us...\nGood day\n";

    return 0;


}
    




    // s1.setaccountNumber(8888.0);
  









   /* int a;
    cout<<"enter the number for loop = ";
    cin>>a;
    for(int i=1; i<=a; i++){
        cout<<endl;
        for(int j=1; j<=i; j++)
        cout<<i <<" ";
    }

    while(a>0){
        for(int i=0; i<a; i++){
            cout<<endl;
            for(int j=0; j<i; j++){
                cout<<i <<" ";
            }
        }
        }
        }

        */