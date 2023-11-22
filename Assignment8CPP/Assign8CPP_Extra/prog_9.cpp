#include <iostream>

class PayrollSystem {
private:
    float basicSalary;
    std::string region;

public:
    void inputDetails() {
        std::cout << "Enter basic salary: ";
        std::cin >> basicSalary;

        std::cout << "Enter region (Baroda, Ahmedabad, Surat, Bhavnagar): ";
        std::cin >> region;
    }

    void calculateHRA() {
        float hraPercentage;

        if (basicSalary <= 2000) {
            hraPercentage = 0.12;
        } else if (basicSalary > 2000 && basicSalary <= 5000) {
            hraPercentage = 0.105;
        } else if (basicSalary > 5000 && basicSalary <= 7500) {
            hraPercentage = 0.075;
        } else {
            hraPercentage = 0; // No HRA for basic salary above 7500
        }

        float hra = hraPercentage * basicSalary;
        std::cout << "HRA: " << hra << "\n";
    }

    void calculateDA() {
        float daPercentage = 0.18;
        float da = daPercentage * basicSalary;
        std::cout << "DA: " << da << "\n";
    }

    void calculatePF() {
        float pfPercentage = 0.12;
        float pf = pfPercentage * (basicSalary + calculateDA());
        std::cout << "PF: " << pf << "\n";
    }

    void calculateGrossSalary() {
        float grossSalary = basicSalary + calculateHRA() + calculateDA();
        std::cout << "Gross Salary: " << grossSalary << "\n";
    }

    void calculateNetSalary() {
        float netSalary = calculateGrossSalary() - calculatePF();
        std::cout << "Net Salary: " << netSalary << "\n";
    }
};

int main() {
    PayrollSystem employee;
    employee.inputDetails();
    employee.calculateGrossSalary();
    employee.calculateNetSalary();

    return 0;
}
