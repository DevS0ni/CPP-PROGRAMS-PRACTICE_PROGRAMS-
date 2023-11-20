#include <iostream>
#include <string>

class Employee {
private:
    int employeeNo;
    std::string employeeName;
    std::string employeeID;
    double employeeSalary;

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
    }

    void displayInfo() const {
        std::cout << "Employee Number: " << employeeNo << std::endl;
        std::cout << "Employee Name: " << employeeName << std::endl;
        std::cout << "Employee ID: " << employeeID << std::endl;
        std::cout << "Employee Salary: $" << employeeSalary << std::endl;
    }
};

int main() {
    Employee employee1;
    employee1.readInfo();
    employee1.displayInfo();

    return 0;
}
