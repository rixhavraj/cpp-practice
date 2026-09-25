#include <iostream>


// Base class
class Vehicle {
public:
    std::string brand = "Ford";
    void honk() {
        std::cout << "Tuut, tuut!\n";
    }
};

// Derived class inheriting from Vehicle
class Car : public Vehicle {
public:
    std::string model = "Mustang";
};

int main() {
    Car myCar;
    myCar.honk(); // Inherited method
    std::cout << myCar.brand + " " + myCar.model; // Inherited and own attributes
    return 0;
}   

/*
Inheritance is a core Object-Oriented Programming (OOP) mechanism that allows a subclass (child) to acquire the attributes and methods of a superclass (parent), promoting code reusability and hierarchical organization. 
*/