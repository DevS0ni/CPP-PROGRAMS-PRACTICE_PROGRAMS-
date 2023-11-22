// Theory

// Q-1. Define constructor and destructor with a small example. What the constructor and
// Destructor will do actually?

/*
   Answer: In C++, a constructor is a special member function that gets called automatically when an object is created.
   Its job is to initialize the object's data members or perform any setup needed for the object. A destructor, on the other hand,
   is called automatically when an object is destroyed, and its purpose is to clean up resources or perform final tasks before
   the object is removed from memory.

   Example:
*/

#include <iostream>
using namespace std;

class MyClass {
public:
    // Constructor
    MyClass() {
        cout << "Constructor called!" << endl;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called!" << endl;
    }
};

int main() {
    MyClass obj; // Constructor gets called automatically when the object is created
    // Destructor will be called automatically when the object goes out of scope or when delete is used (for dynamic objects)
    return 0;
}

// Q-2. What is the difference between a constructor and a function?

/*
   Answer: The main differences between a constructor and a function are:
   1. Invocation: Constructors are automatically called when an object is created, while functions need to be explicitly called
      using their names.
   2. Return type: Constructors don't have a return type, not even void, whereas functions specify their return type.
   3. Purpose: Constructors are primarily used for initializing the object's state, while functions perform specific tasks or
      computations.

   Practical Questions

   Q-1. Create a C++ class for representing the point with x and y coordinates. Provide member functions to read and print
        the point object, adding two point objects and necessary constructors.
*/

#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    // Default constructor
    Point() {
        x = 0;
        y = 0;
    }

    // Parameterized constructor
    Point(int xCoord, int yCoord) {
        x = xCoord;
        y = yCoord;
    }

    // Member function to read the point
    void readPoint() {
        cout << "Enter x-coordinate: ";
        cin >> x;
        cout << "Enter y-coordinate: ";
        cin >> y;
    }

    // Member function to print the point
    void printPoint() {
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }

    // Member function to add two points
    Point addPoints(const Point& p) {
        Point result;
        result.x = x + p.x;
        result.y = y + p.y;
        return result;
    }
};

int main() {
    Point p1, p2, sum;
    p1.readPoint();
    p2.readPoint();

    sum = p1.addPoints(p2);

    cout << "Point 1: ";
    p1.printPoint();

    cout << "Point 2: ";
    p2.printPoint();

    cout << "Sum of Points: ";
    sum.printPoint();

    return 0;
}

// Q-2. Write a C++ program with a class having three integer data members.
// Provide the member function along with other functions and constructors to test whether given three numbers form a
// Pythagorean triplet, i.e., x^2 + y^2 = z^2.
*/

#include <iostream>
#include <cmath>
using namespace std;

class TripletChecker {
private:
    int x, y, z;

public:
    // Default constructor
    TripletChecker() {
        x = 0;
        y = 0;
        z = 0;
    }

    // Parameterized constructor
    TripletChecker(int a, int b, int c) {
        x = a;
        y = b;
        z = c;
    }

    // Member function to check if it's a Pythagorean triplet
    bool isPythagoreanTriplet() {
        return (pow(x, 2) + pow(y, 2) == pow(z, 2));
    }
};

int main() {
    int a, b, c;
    cout << "Enter three numbers (separated by spaces): ";
    cin >> a >> b >> c;

    TripletChecker triplet(a, b, c);

    if (triplet.isPythagoreanTriplet()) {
        cout << "Yes, it's a Pythagorean triplet!" << endl;
    } else {
        cout << "No, it's not a Pythagorean triplet." << endl;
    }

    return 0;
}
