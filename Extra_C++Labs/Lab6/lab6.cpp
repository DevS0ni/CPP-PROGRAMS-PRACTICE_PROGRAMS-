#include <iostream>
#include <cstring>
using namespace std;

// Q-1. What is inheritance mean?
/*
   Answer: Inheritance is a fundamental concept in object-oriented programming (OOP) that allows a class (subclass/derived class)
   to inherit properties and behaviors from another class (superclass/base class). The subclass inherits the attributes and
   methods of the superclass, enabling code reuse and the creation of a hierarchy of classes.

   Inheritance promotes code organization, reduces redundancy, and facilitates the creation of a more modular and maintainable
   codebase. It supports the "is-a" relationship, where a subclass is a specialized version of its superclass.
*/

// Q-2. List out different types of inheritance.
/*
   Answer: There are several types of inheritance in C++:

   1. **Single Inheritance:** A subclass inherits from only one superclass.
   2. **Multiple Inheritance:** A subclass inherits from multiple superclasses.
   3. **Multilevel Inheritance:** A class is derived from another derived class, creating a chain of inheritance.
   4. **Hierarchical Inheritance:** Multiple classes are derived from a single base class.
   5. **Hybrid (Virtual) Inheritance:** A combination of multiple and multilevel inheritance using virtual classes.
*/

// Q-3. Why do we use Friend function? Why is it beneficial?
/*
   Answer: Friend functions in C++ are functions that are not members of a class but have access to its private and protected
   members. They are declared with the `friend` keyword. Friend functions are beneficial for the following reasons:

   1. **Access to Private Members:** Friend functions can access private and protected members of a class, allowing external
      functions to work with class internals.

   2. **Enhanced Encapsulation:** Friend functions can be used to provide controlled access to the private members of a class
      without violating encapsulation principles.

   3. **Operator Overloading:** Friend functions are often used for overloading operators when operations involve private data members
      of a class.

   4. **Non-Member Utility Functions:** Friend functions can be standalone functions that are closely related to a class, providing
      utility without being members of the class.

   5. **Flexibility:** Friend functions offer flexibility in designing and implementing functions that are closely associated with
      a class but are not necessarily members of it.
*/

// Q-4. What is Virtual function? Why it is required?
/*
   Answer: A virtual function in C++ is a function declared in a base class and overridden in derived classes. It allows a
   program to achieve runtime polymorphism, enabling the selection of the appropriate function implementation based on the
   type of the object at runtime.

   Characteristics of a virtual function:

   - Declared in a base class with the `virtual` keyword.
   - Overridden in derived classes using the `override` keyword.

   Why virtual functions are required:

   1. **Dynamic Binding:** Virtual functions enable dynamic binding or late binding, where the actual function call is determined
      at runtime based on the type of the object.

   2. **Polymorphism:** Virtual functions support polymorphism, allowing objects of different derived classes to be treated
      uniformly through a common interface.

   3. **Flexibility:** Virtual functions provide a mechanism for creating a base class that can be extended by derived classes,
      allowing for flexibility and extensibility in the design.

   4. **Code Reusability:** Virtual functions facilitate code reuse by allowing the use of a common interface across multiple
      derived classes, reducing redundancy.
*/

// Practical

// Q-1. Define a class called cricket that will describe the following Information.
//      Player name
//      Team name
//      Batting average
//      Using the cricket class, declare an array player with 3 elements and write a program to
//      Read the information about all the 3 players and print a team-wise list containing.
//      names of players with their average
class Cricket {
private:
    char playerName[50];
    char teamName[50];
    float battingAverage;

public:
    void getData() {
        cout << "Enter player name: ";
        cin.ignore(); // Ignore newline character from previous input
        cin.getline(playerName, 50);

        cout << "Enter team name: ";
        cin.getline(teamName, 50);

        cout << "Enter batting average: ";
        cin >> battingAverage;
    }

    void display() const {
        cout << "Player Name: " << playerName << ", Team Name: " << teamName << ", Batting Average: " << battingAverage << endl;
    }
};

int main() {
    // Q-1. Practical
    Cricket players[3];
    for (int i = 0; i < 3; ++i) {
        cout << "Enter details for Player " << i + 1 << ":" << endl;
        players[i].getData();
    }

    cout << "Team-wise list of players with their averages:" << endl;
    for (int i = 0; i < 3; ++i) {
        players[i].display();
    }

    return 0;
}
