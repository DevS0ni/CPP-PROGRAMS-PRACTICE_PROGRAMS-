#include <iostream>
using namespace std;

// Theory:

// Q-1. Explain 3 keywords of exception handling in details.
/*
   Answer:
   - try: The try block is used to enclose a section of code where an exception might occur. If an exception occurs
     inside the try block, it is caught and handled by the corresponding catch block.

   - catch: The catch block is used to catch and handle exceptions. It specifies the type of exception it can catch.
     When an exception occurs in the try block, the catch block with a matching exception type is executed.

   - throw: The throw statement is used to manually throw an exception. It can be used to signal that a specific
     exceptional condition has occurred. The thrown exception is then caught and handled by the catch block.

   Example:
   try {
       // code that might throw an exception
   } catch (ExceptionType1 ex1) {
       // handle ExceptionType1
   } catch (ExceptionType2 ex2) {
       // handle ExceptionType2
   } catch (...) {
       // handle other types of exceptions
   }
*/

// Practical:

// Q-1. Simple program which throws a divide by zero error.
void divideByZero() {
    int numerator = 10;
    int denominator = 0;

    // Attempting to divide by zero
    if (denominator == 0) {
        throw runtime_error("Divide by zero error.");
    }

    int result = numerator / denominator;
    cout << "Result: " << result << endl;
}

// Q-2. Throwing an exception from a function outside the try block.
void throwError() {
    throw logic_error("This exception is thrown outside the try block.");
}

int main() {
    try {
        // Q-1. Simple program which throws a divide by zero error.
        divideByZero();
    } catch (runtime_error &ex) {
        cerr << "Caught Exception: " << ex.what() << endl;
    }

    try {
        // Q-2. Throwing an exception from a function outside the try block.
        throwError();
    } catch (logic_error &ex) {
        cerr << "Caught Exception: " << ex.what() << endl;
    }

    return 0;
}
