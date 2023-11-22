#include <iostream>
#include <cstring>
using namespace std;

// Q-1 What is operator overloading?

/*
   Answer: Operator overloading is a feature in C++ that allows the same operator to be used with different data types or to
   perform different operations based on the context. It enables the definition of custom behaviors for operators when applied
   to user-defined data types (classes or structures). Operator overloading is achieved by defining functions that implement the
   desired behavior for a specific operator.
*/

// Q-2 Need of operator overloading.

/*
   Answer: The need for operator overloading in C++ arises from the following reasons:

   1. **Intuitive Syntax:** Operator overloading allows objects of user-defined classes to be manipulated using operators in a
      way that is consistent with the syntax of built-in types. This enhances the readability and naturalness of the code.

   2. **Code Reusability:** It provides a mechanism to reuse existing operators for user-defined types. This promotes code
      reusability and reduces the need to define new functions or methods for similar operations.

   3. **Expressiveness:** Operator overloading enables the creation of expressive and concise code, making it easier to
      understand and maintain.

   4. **Simplifies Complex Operations:** For complex mathematical or symbolic operations, overloading operators allows the
      creation of more intuitive and compact representations.

   5. **Integration with Standard Library:** Operator overloading facilitates integration with C++ standard library components
      that rely on operators for their functionality.
*/

// Practical

// Q-1 Construct a class CALENDAR with data members as date, month, and year.
//     Implement constructors, overloaded constructors, and destructors for the same.
//     Write down an overloaded operator ++ that will increment the date by one. Write a
//     function display () to print date, month, and year. Consider all situations.
//     e.g. if the date is 31/7/2005 then the output: tomorrow is 1/8/2005
class Calendar {
private:
    int date, month, year;

public:
    Calendar() : date(1), month(1), year(2000) {}

    Calendar(int d, int m, int y) : date(d), month(m), year(y) {}

    ~Calendar() {
        cout << "Destructor called for date: " << date << "/" << month << "/" << year << endl;
    }

    void operator++() {
        if (date == 31) {
            date = 1;
            if (month == 12) {
                month = 1;
                year++;
            } else {
                month++;
            }
        } else {
            date++;
        }
    }

    void display() const {
        cout << "Date: " << date << "/" << month << "/" << year << endl;
    }
};

// Q-2 Build a class string. Use overloaded operator + to combine two strings.
class MyString {
private:
    char* str;

public:
    MyString(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    MyString operator+(const MyString& other) const {
        char* resultStr = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(resultStr, str);
        strcat(resultStr, other.str);
        MyString result(resultStr);
        delete[] resultStr;
        return result;
    }

    void display() const {
        cout << str << endl;
    }

    ~MyString() {
        delete[] str;
    }
};

// Q-3 Build a class string. Use overloaded operator = to copy one string into another.
class MyString {
private:
    char* str;

public:
    MyString(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    MyString& operator=(const MyString& other) {
        if (this != &other) {
            delete[] str;
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        }
        return *this;
    }

    void display() const {
        cout << str << endl;
    }

    ~MyString() {
        delete[] str;
    }
};

// Q-4 Build a class string. Use overloaded operator == to compare two strings.
class MyString {
private:
    char* str;

public:
    MyString(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    bool operator==(const MyString& other) const {
        return strcmp(str, other.str) == 0;
    }

    void display() const {
        cout << str << endl;
    }

    ~MyString() {
        delete[] str;
    }
};

// Q-5 Construct a class Month with data members as month name. Write down overloaded operator++
//     for the increment the month name by one. Write a member function read() and display() to
//     read a name of the month and print a name of the month.
//     Input:
//         Enter name of a month  : March
//     Output:
//         Next Month name is : April
class Month {
private:
    char name[10];

public:
    Month(const char* n) {
        strcpy(name, n);
    }

    Month operator++() {
        if (strcmp(name, "December") == 0) {
            strcpy(name, "January");
        } else {
            // Incrementing the month
            char* months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
            for (int i = 0; i < 11; i++) {
                if (strcmp(name, months[i]) == 0) {
                    strcpy(name, months[i + 1]);
                    break;
                }
            }
        }
        return *this;
    }

    void read() {
        cout << "Enter name of a month: ";
        cin >> name;
    }

    void display() const {
        cout << "Next Month name is: " << name << endl;
    }
};

int main() {
    // Testing Calendar class
    Calendar today(31, 7, 2005);
    cout << "Today's Date: ";
    today.display();

    ++today; // Operator overloading
    cout << "Tomorrow's Date: ";
    today.display();

    // Testing MyString class
    MyString s1("Hello");
    MyString s2(" World");
    MyString result = s1 + s2; // Operator overloading
    cout << "Concatenated String: ";
    result.display();

    // Testing MyString class assignment
    MyString s3("Original String");
    MyString s4("New String");
    cout << "Before Assignment - s3: ";
    s3.display();
    cout << "Before Assignment - s4: ";
    s4.display();

    s3 = s4; // Operator overloading

    cout << "After Assignment - s3: ";
    s3.display();
    cout << "After Assignment - s4: ";
    s4.display();

    // Testing MyString class comparison
    MyString s5("Hello");
    MyString s6("Hello");
    MyString s7("World");

    if (s5 == s6) // Operator overloading
        cout << "s5 is equal to s6" << endl;
    else
        cout << "s5 is not equal to s6" << endl;

    if (s5 == s7) // Operator overloading
        cout << "s5 is equal to s7" << endl;
    else
        cout << "s5 is not equal to s7" << endl;

    // Testing Month class
    Month currentMonth("March");
    currentMonth.read();
    currentMonth.display();
    ++currentMonth; // Operator overloading
    currentMonth.display();

    return 0;
}
