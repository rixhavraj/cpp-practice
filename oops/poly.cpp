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

//Under the Hood: The VTableWhen a class contains a virtual function, the compiler generates a hidden array of pointers called a Virtual Table (VTable). Every object of that class receives a pointer called vptr pointing to this table. At runtime, the application looks up the vptr to fetch and execute the exact function implementation belonging to the active object