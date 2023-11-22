#include <iostream>
using namespace std;

// Q-1. Explain Generic function. List out the use of that.
/*
   Answer: A generic function, often implemented using templates in C++, is a function that can work with different
   types of data. It allows you to write a function once and use it with various data types without duplicating code.
   The main benefit is code reusability and flexibility.

   Use of Generic Functions:
   - Code Reusability: Write a function once and use it with different data types.
   - Flexibility: Handle various data types without rewriting code.
   - Maintenance: Changes made to the generic function affect all instances.

   Example: A generic swap function that can swap values of different data types.
*/

// Generic Swap Function
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

// Q-2. Explain Generic class.
/*
   Answer: A generic class, implemented using templates in C++, is a class that can work with different data types.
   It allows you to create a class template with placeholder types, and then instantiate the class with specific data
   types as needed. Similar to generic functions, generic classes provide code reusability and flexibility.

   Example: A generic Pair class that can hold a pair of values of any data type.
*/

// Generic Pair Class
template <typename T1, typename T2>
class Pair {
public:
    T1 first;
    T2 second;

    Pair(T1 f, T2 s) : first(f), second(s) {}
};

int main() {
    // Example of Generic Swap Function
    int intA = 5, intB = 10;
    swapValues(intA, intB);
    cout << "Swapped Integers: " << intA << " " << intB << endl;

    double doubleA = 3.14, doubleB = 6.28;
    swapValues(doubleA, doubleB);
    cout << "Swapped Doubles: " << doubleA << " " << doubleB << endl;

    // Example of Generic Pair Class
    Pair<int, double> pair1(1, 3.14);
    Pair<char, string> pair2('A', "Hello");

    cout << "Pair 1: " << pair1.first << " " << pair1.second << endl;
    cout << "Pair 2: " << pair2.first << " " << pair2.second << endl;

    return 0;
}
