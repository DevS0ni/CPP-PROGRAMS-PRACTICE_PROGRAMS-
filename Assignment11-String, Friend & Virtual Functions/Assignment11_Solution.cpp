#include <iostream>
#include <cstring>

// String Operations
void performStringOperations() {
    const char* str1 = "Hello";
    const char* str2 = "World";

    // strcat: Concatenate str2 to str1
    char concatenatedStr[50];
    strcpy(concatenatedStr, str1);
    strcat(concatenatedStr, str2);
    std::cout << "Concatenated String: " << concatenatedStr << std::endl;

    // strlen: Length of str1
    std::cout << "Length of str1: " << strlen(str1) << std::endl;

    // strcmp: Compare str1 and str2
    int compareResult = strcmp(str1, str2);
    if (compareResult == 0) {
        std::cout << "Strings are equal." << std::endl;
    } else {
        std::cout << "Strings are not equal." << std::endl;
    }
}

// Friend Functions (for addition, subtraction, multiplication, division)
class Calculator {
public:
    friend double add(double a, double b);
    friend double subtract(double a, double b);
    friend double multiply(double a, double b);
    friend double divide(double a, double b);
};

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cerr << "Error: Division by zero." << std::endl;
        return 0;
    }
}

// Virtual Function and Virtual Class
class Shape {
public:
    virtual void displayMessage() {
        std::cout << "This is a Shape." << std::endl;
    }
};

class Circle : public Shape {
public:
    void displayMessage() override {
        std::cout << "This is a Circle." << std::endl;
    }
};

int main() {
    // String Operations
    std::cout << "----- String Operations -----\n";
    performStringOperations();

    // Friend Functions
    std::cout << "\n----- Friend Functions -----\n";
    double num1 = 10.5;
    double num2 = 5.2;
    std::cout << "Addition: " << add(num1, num2) << std::endl;
    std::cout << "Subtraction: " << subtract(num1, num2) << std::endl;
    std::cout << "Multiplication: " << multiply(num1, num2) << std::endl;
    std::cout << "Division: " << divide(num1, num2) << std::endl;

    // Virtual Function and Virtual Class
    std::cout << "\n----- Virtual Function and Virtual Class -----\n";
    Shape* shapePtr = new Circle();
    shapePtr->displayMessage();

    delete shapePtr;

    return 0;
}
