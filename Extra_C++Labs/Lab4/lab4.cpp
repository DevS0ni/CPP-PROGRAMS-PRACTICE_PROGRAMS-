
// Theory

// Q-1. What is function overloading? Explain in Details.

/*
   Answer: Function overloading is a feature in C++ that allows a class to have multiple functions with the same name but
   different parameters or a different number of parameters. The compiler distinguishes between these functions based on
   their signature (i.e., the number and types of parameters).

   Function overloading provides flexibility and code reusability by allowing a single function name to represent multiple
   functionalities within the same scope. It is particularly useful when you want to perform similar operations with different
   types of data or a different number of arguments.

   Example:
*/

#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to concatenate two strings
string add(string s1, string s2) {
    return s1 + s2;
}

int main() {
    cout << "Sum of integers: " << add(5, 10) << endl;
    cout << "Concatenated strings: " << add("Hello", " World") << endl;
    return 0;
}

// Q-2. Advantages of function overloading over normal function.

/*
   Answer: The advantages of function overloading over a normal function (with a different name for each version) include:
   1. Function overloading enhances code readability by providing a single name for related operations.
   2. You can reuse the function name for similar operations, reducing the need for different function names.
   3. Overloading allows you to create intuitive function names based on their purpose, making the code more
      self-explanatory.
   4. You can define functions with the same name but different parameter types, allowing flexibility in the types
      of data the function can handle.

   Practical

   Q-1. Write an overloaded function for computing the area of a triangle, circle, and rectangle.
*/

#include <iostream>
#include <cmath>
using namespace std;

// Function to compute the area of a triangle
float computeArea(float base, float height) {
    return 0.5 * base * height;
}

// Function to compute the area of a rectangle
float computeArea(float length, float width) {
    return length * width;
}

// Function to compute the area of a circle
float computeArea(float radius) {
    return 3.14 * pow(radius, 2);
}

int main() {
    float triangleArea = computeArea(5.0, 8.0);
    float rectangleArea = computeArea(4.0, 6.0);
    float circleArea = computeArea(3.0);

    cout << "Area of Triangle: " << triangleArea << endl;
    cout << "Area of Rectangle: " << rectangleArea << endl;
    cout << "Area of Circle: " << circleArea << endl;

    return 0;
}

// Q-2. Create two member functions max() to find out the maximum number among two numbers and three numbers.
// (Overloading concept)

#include <iostream>
using namespace std;

// Function to find the maximum of two numbers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find the maximum of three numbers
int max(int a, int b, int c) {
    return max(max(a, b), c);
}

int main() {
    cout << "Max of 5 and 8: " << max(5, 8) << endl;
    cout << "Max of 2, 7, and 4: " << max(2, 7, 4) << endl;

    return 0;
}
