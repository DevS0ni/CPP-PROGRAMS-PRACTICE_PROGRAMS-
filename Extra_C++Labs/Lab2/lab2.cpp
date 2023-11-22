// Q-1. What are the three features of OOP?
/*
   Answer: OOP has three main features:
   1. Encapsulation: This is like putting your code in a box. It hides the internal details and allows
      you to access only what's necessary.
   2. Inheritance: It's like passing down traits. One class can inherit properties and behaviors from
      another class, promoting code reuse.
   3. Polymorphism: It's like having different shapes fit into the same slot. It allows objects of
      different types to be treated as objects of a common base type.
*/

// Q-2. Write down the program structure of C++?
/*
   Answer: The basic structure of a C++ program is as follows:

   #include <iostream>  // Header file for input/output operations
   using namespace std; // Standard namespace

   int main() {
       // Program execution starts here

       // Your code goes here

       return 0; // Indicates successful program execution
   }
*/

// Q-3. What is class and objects in OOP?
/*
   Answer: In OOP, a class is like a blueprint or template for creating objects. It defines the properties
   (attributes) and behaviors (methods) that the objects of the class will have.

   An object is an instance of a class. It's like creating an actual thing from the blueprint. Objects have
   specific values for their attributes and can perform actions defined by the methods of their class.
*/

// Practical Questions

// Q-1. Write a simple C++ program to print Hello.
#include <iostream>
using namespace std;

int main() {
    cout << "Hello" << endl;
    return 0;
}

// Q-2. Declare a class called STUD and display information.
#include <iostream>
using namespace std;

class STUD {
public:
    int rollNumber;
    string name;
    float marks[3];

    void readInformation() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks for 3 Subjects: ";
        for (int i = 0; i < 3; ++i) {
            cin >> marks[i];
        }
    }

    void displayInformation() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: ";
        for (int i = 0; i < 3; ++i) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    STUD student;
    student.readInformation();
    student.displayInformation();
    return 0;
}

// Q-3. Create a class LIBRARY and display information.
#include <iostream>
using namespace std;

class LIBRARY {
public:
    int bookNumber;
    string bookName;
    string author;

    void readInformation() {
        cout << "Enter Book Number: ";
        cin >> bookNumber;
        cout << "Enter Book Name: ";
        cin >> bookName;
        cout << "Enter Author: ";
        cin >> author;
    }

    void displayInformation() {
        cout << "Book Number: " << bookNumber << endl;
        cout << "Book Name: " << bookName << endl;
        cout << "Author: " << author << endl;
    }
};

int main() {
    LIBRARY book;
    book.readInformation();
    book.displayInformation();
    return 0;
}

// Q-4. Write a C++ program with a class named student, having member functions readData() and writeData().
#include <iostream>
using namespace std;

class Student {
public:
    int studID;
    string studName;
    int studPercentage;

    void readData() {
        cout << "Enter Student ID: ";
        cin >> studID;
        cout << "Enter Student Name: ";
        cin >> studName;
        cout << "Enter Student Percentage: ";
        cin >> studPercentage;
    }

    void writeData() {
        cout << "Student ID: " << studID << endl;
        cout << "Student Name: " << studName << endl;
        cout << "Student Percentage: " << studPercentage << "%" << endl;
    }
};

int main() {
    Student studentObj;
    studentObj.readData();
    studentObj.writeData();
    return 0;
}
