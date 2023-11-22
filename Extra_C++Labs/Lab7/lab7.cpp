#include <iostream>
using namespace std;

// Q-1. What is pure virtual function?
/*
   Answer: A pure virtual function in C++ is a virtual function that is declared in a base class but has no implementation
   in that class. It is declared using the "= 0" syntax. Classes containing pure virtual functions are termed abstract classes,
   and they cannot be instantiated. Pure virtual functions must be overridden by derived classes to become concrete classes.
*/

// Q-2. What is Abstract class?
/*
   Answer: An abstract class in C++ is a class that contains one or more pure virtual functions. Abstract classes are designed to
   be base classes and cannot be instantiated on their own. They serve as interfaces, providing a blueprint for derived classes
   to implement the pure virtual functions. Abstract classes may also contain concrete functions with implementations.
*/

// Practical

// Q-1. The base class, number, contains an integer called val, the function setval(), and the
// pure virtual function show(). The derived classes hextype, dectype, and octtype inherit
// number and redefine show() so that it outputs the value of val in each respective
// number base (that is, hexadecimal, decimal, or octal).
class Number {
protected:
    int val;

public:
    void setVal(int value) {
        val = value;
    }

    // Pure virtual function
    virtual void show() const = 0;
};

class HexType : public Number {
public:
    // Override show() for hexadecimal representation
    void show() const override {
        cout << "Hexadecimal: 0x" << hex << val << endl;
    }
};

class DecType : public Number {
public:
    // Override show() for decimal representation
    void show() const override {
        cout << "Decimal: " << dec << val << endl;
    }
};

class OctType : public Number {
public:
    // Override show() for octal representation
    void show() const override {
        cout << "Octal: 0" << oct << val << endl;
    }
};

int main() {
    HexType hexObj;
    DecType decObj;
    OctType octObj;

    // Set values for each object
    hexObj.setVal(255);
    decObj.setVal(255);
    octObj.setVal(255);

    // Show values using overridden show() function
    hexObj.show();
    decObj.show();
    octObj.show();

    return 0;
}
