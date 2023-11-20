
#include <iostream>

class ArithmeticOperation {
private:
    int num1, num2;
    char operation;

public:
    void getdata() {
        std::cout << "Enter your choice (+,-,*,/, 0 for exit): ";
        std::cin >> operation;

        if (operation == '0') {
            return;
        }

        std::cout << "Enter first number: ";
        std::cin >> num1;
        std::cout << "Enter second number: ";
        std::cin >> num2;
    }

    void calculate() {
        switch (operation) {
            case '+':
                std::cout << "Sum of " << num1 << " and " << num2 << " is " << num1 + num2 << "." << std::endl;
                break;
            case '-':
                std::cout << "Difference of " << num1 << " and " << num2 << " is " << num1 - num2 << "." << std::endl;
                break;
            case '*':
                std::cout << "Product of " << num1 << " and " << num2 << " is " << num1 * num2 << "." << std::endl;
                break;
            case '/':
                if (num2 != 0) {
                    std::cout << "Quotient of " << num1 << " and " << num2 << " is " << static_cast<double>(num1) / num2
                              << "." << std::endl;
                } else {
                    std::cout << "Cannot divide by zero!" << std::endl;
                }
                break;
            default:
                std::cout << "Invalid operation!" << std::endl;
        }
    }
};

int main() {
    ArithmeticOperation arithmeticOp;

    do {
        arithmeticOp.getdata();
        arithmeticOp.calculate();
    } while (arithmeticOp.getOperation() != '0');

    return 0;
}
