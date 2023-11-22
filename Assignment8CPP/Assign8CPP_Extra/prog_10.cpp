#include <iostream>
#include <string>

class Bank {
private:
    std::string depositorName;
    int accountNumber;
    std::string accountType;
    float balance;

public:
    // Function to assign initial values
    void assignInitialValues(const std::string& name, int accNumber, const std::string& accType, float initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    // Function to deposit an amount
    void deposit(float amount) {
        balance += amount;
    }

    // Function to withdraw an amount after checking balance
    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal successful. Current balance: " << balance << "\n";
        } else {
            std::cout << "Insufficient balance.\n";
        }
    }

    // Function to display name and balance
    void display() {
        std::cout << "Depositor Name: " << depositorName << "\n";
        std::cout << "Account Balance: " << balance << "\n";
    }
};

int main() {
    Bank myAccount;
    myAccount.assignInitialValues("John Doe", 123456, "Saving", 1000.0);

    myAccount.display();

    myAccount.deposit(500.0);
    myAccount.display();

    myAccount.withdraw(200.0);
    myAccount.display();

    return 0;
}
