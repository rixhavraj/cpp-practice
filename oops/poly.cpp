#include <iostream>
using namespace std;

class Calculator{
    public:
    int add(int a, int b){
        return a+b;
    }
};

int main(){{
    Calculator calc;
    cout<<calc.add(5,10) <<endl;
    cout<<calc.add(5.5, 20) <<endl;
    return 0;
}}

//Polymorphism in C++ is a core Object-Oriented Programming (OOP) concept that translates to "having many forms". It allows a single entity (such as a function or an operator) to behave differently based on the context or the object it is interacting with
