#include <iostream>
#include <string>

class Employee {
private:
    int employeeNumber;
    std::string name;
    double basicSalary;

public:
    void readInfo() {
        std::cout << "Enter Employee Number: ";
        std::cin >> employeeNumber;
        std::cin.ignore();
        std::cout << "Enter Employee Name: ";
        std::getline(std::cin, name);
        std::cout << "Enter Basic Salary: ";
        std::cin >> basicSalary;
    }

    void calculateNetSalary() {
        const double MA = 100.0;
        const double HRA = 300.0;
        const double DA = 0.4 * basicSalary;
        const double IT = 0.12 * basicSalary;
        const double PF = 0.1 * basicSalary;

        double netSalary = basicSalary + HRA + DA - (PF + IT);

        std::cout << "\nEmployee Number: " << employeeNumber << std::endl;
        std::cout << "Employee Name: " << name << std::endl;
        std::cout << "Net Salary: $" << netSalary << std::endl;
    }
};

int main() {
    int numEmployees;
    std::cout << "Enter the number of employees: ";
    std::cin >> numEmployees;

    Employee* employees = new Employee[numEmployees];

    for (int i = 0; i < numEmployees; ++i) {
        std::cout << "\nEnter details for Employee " << i + 1 << ":" << std::endl;
        employees[i].readInfo();
    }

    std::cout << "\nNet Salaries:" << std::endl;
    for (int i = 0; i < numEmployees; ++i) {
        employees[i].calculateNetSalary();
    }

    delete[] employees;

    return 0;
}
