#include <iostream>
#include <string>

class Student {
private:
    int studNumber;
    std::string studName;
    int marks[3];
    int total;
    float avg;

public:
    void readInfo() {
        std::cout << "Enter Student Number: ";
        std::cin >> studNumber;
        std::cin.ignore();
        std::cout << "Enter Student Name: ";
        std::getline(std::cin, studName);
        std::cout << "Enter Marks for 3 Subjects:" << std::endl;
        for (int i = 0; i < 3; ++i) {
            std::cout << "Subject " << i + 1 << ": ";
            std::cin >> marks[i];
        }
        calculateTotalAndAvg();
    }

    void displayInfo() const {
        std::cout << "Student Number: " << studNumber << std::endl;
        std::cout << "Student Name: " << studName << std::endl;
        std::cout << "Marks in 3 Subjects: ";
        for (int i = 0; i < 3; ++i) {
            std::cout << marks[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "Total Marks: " << total << std::endl;
        std::cout << "Average Marks: " << avg << std::endl;
    }

private:
    void calculateTotalAndAvg() {
        total = 0;
        for (int i = 0; i < 3; ++i) {
            total += marks[i];
        }
        avg = static_cast<float>(total) / 3;
    }
};

class Employee {
private:
    int employeeNo;
    std::string employeeName;
    std::string employeeID;
    double employeeSalary;
    std::string designation;

public:
    void readInfo() {
        std::cout << "Enter Employee Number: ";
        std::cin >> employeeNo;
        std::cin.ignore();
        std::cout << "Enter Employee Name: ";
        std::getline(std::cin, employeeName);
        std::cout << "Enter Employee ID: ";
        std::getline(std::cin, employeeID);
        std::cout << "Enter Employee Salary: ";
        std::cin >> employeeSalary;
        std::cin.ignore();
        std::cout << "Enter Designation: ";
        std::getline(std::cin, designation);
    }

    void displayInfo() const {
        std::cout << "Employee Number: " << employeeNo << std::endl;
        std::cout << "Employee Name: " << employeeName << std::endl;
        std::cout << "Employee ID: " << employeeID << std::endl;
        std::cout << "Employee Salary: $" << employeeSalary << std::endl;
        std::cout << "Designation: " << designation << std::endl;
    }
};

class Library {
private:
    std::string bookName;
    std::string authorName;
    float bookPrice;

public:
    void readInfo() {
        std::cout << "Enter Book Name: ";
        std::getline(std::cin, bookName);
        std::cout << "Enter Author Name: ";
        std::getline(std::cin, authorName);
        std::cout << "Enter Book Price: ";
        std::cin >> bookPrice;
    }

    void displayInfo() const {
        std::cout << "Book Name: " << bookName << std::endl;
        std::cout << "Author Name: " << authorName << std::endl;
        std::cout << "Book Price: $" << bookPrice << std::endl;
    }
};

class Product {
private:
    int productNumber;
    std::string productName;
    float productPrice;
    std::string batchNumber;

public:
    void readInfo() {
        std::cout << "Enter Product Number: ";
        std::cin >> productNumber;
        std::cin.ignore();
        std::cout << "Enter Product Name: ";
        std::getline(std::cin, productName);
        std::cout << "Enter Product Price: ";
        std::cin >> productPrice;
        std::cin.ignore();
        std::cout << "Enter Batch Number: ";
        std::getline(std::cin, batchNumber);
    }

    void displayInfo() const {
        std::cout << "Product Number: " << productNumber << std::endl;
        std::cout << "Product Name: " << productName << std::endl;
        std::cout << "Product Price: $" << productPrice << std::endl;
        std::cout << "Batch Number: " << batchNumber << std::endl;
    }
};

class Bank {
private:
    std::string bankName;
    std::string branchName;
    long long accountNumber;
    std::string accountType;
    std::string holderName;
    int age;
    std::string city;
    std::string gender;

public:
    void readInfo() {
        std::cout << "Enter Bank Name: ";
        std::getline(std::cin, bankName);
        std::cout << "Enter Branch Name: ";
        std::getline(std::cin, branchName);
        std::cout << "Enter Account Number: ";
        std::cin >> accountNumber;
        std::cin.ignore();
        std::cout << "Enter Account Type: ";
        std::getline(std::cin, accountType);
        std::cout << "Enter Holder Name: ";
        std::getline(std::cin, holderName);
        std::cout << "Enter Age: ";
        std::cin >> age;
        std::cin.ignore();
        std::cout << "Enter City: ";
        std::getline(std::cin, city);
        std::cout << "Enter Gender: ";
        std::getline(std::cin, gender);
    }

    void displayInfo() const {
        std::cout << "Bank Name: " << bankName << std::endl;
        std::cout << "Branch Name: " << branchName << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Type: " << accountType << std::endl;
        std::cout << "Holder Name: " << holderName << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "City: " << city << std::endl;
        std::cout << "Gender: " << gender << std::endl;
    }
};

int main() {
    // Example usage of Student class
    Student student1;
    student1.readInfo();
    student1.displayInfo();

    // Example usage of Employee class
    Employee employee1;
    employee1.readInfo();
    employee1.displayInfo();

    // Example usage of Library class
    Library book1;
    book1.readInfo();
    book1.displayInfo();

    // Example usage of Product class
    Product product1;
    product1.readInfo();
    product1.displayInfo();

    // Example usage of Bank class
    Bank bank1;
    bank1.readInfo();
    bank1.displayInfo();

    return 0;
}
