#include <iostream>
using namespace std;

class Rectangle {
private:
    // Private data members (hidden from direct access)
    double length;
    double breadth;

public:
    // Setter to modify length with validation
    void setLength(double l) {
        if (l > 0) length = l;
    }

    // Getter to retrieve length
    double getLength() const {
        return length;
    }

    // Method to calculate area using encapsulated data
    double calculateArea() const {
        return length * breadth;
    }
};

int main() {
    Rectangle rect;
    rect.setLength(10);
    // rect.length = 5; // Error: 'length' is private
    
    cout << "Area: " << rect.calculateArea() << endl;
    return 0;
}   


/*
Encapsulation in C++ is the bundling of data members and member functions into a single unit called a class, using access specifiers to restrict direct access to internal data.  This mechanism ensures data hiding and allows controlled access through public getter and setter methods, protecting the object's state from unauthorized modification. 

To implement encapsulation, declare data members as private and provide public methods to interact with them.  The following example demonstrates a Rectangle class where dimensions are hidden, and access is managed via setLength, getLength, etc.
*/