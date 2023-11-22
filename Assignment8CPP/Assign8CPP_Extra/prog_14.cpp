#include <iostream>
#include <iomanip>

class Account {
protected:
    int accountNumber;
    std::string customerName;
    std::string accountType;
    double balance;

public:
    // Constructor
    Account(int accNumber, const std::string& custName, const std::string& accType, double initialBalance)
        : accountNumber(accNumber), customerName(custName), accountType(accType), balance(initialBalance) {}

    // Function to accept deposit and update the balance
    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposit of $" << amount << " successful. Updated balance: $" << balance << "\n";
    }

    // Function to display the balance
    void displayBalance() const {
        std::cout << "Account Number: " << accountNumber << "\n";
        std::cout << "Customer Name: " << customerName << "\n";
        std::cout << "Account Type: " << accountType << "\n";
        std::cout << "Current Balance: $" << balance << "\n";
    }

    // Virtual function to compute and deposit interest (to be overridden by derived classes)
    virtual void computeAndDepositInterest() {}

    // Virtual function to permit withdrawal and update the balance (to be overridden by derived classes)
    virtual void withdraw(double amount) {}

    // Virtual function to check for minimum balance and impose penalty if necessary (to be overridden by derived classes)
    virtual void checkMinimumBalance() {}
};

class SavingsAccount : public Account {
public:
    // Constructor
    SavingsAccount(int accNumber, const std::string& custName, double initialBalance)
        : Account(accNumber, custName, "Saving Account", initialBalance) {}

    // Function to compute and deposit interest
    void computeAndDepositInterest() override {
        double interest = balance * 0.10;
        balance += interest;
        std::cout << "Interest of $" << interest << " deposited. Updated balance: $" << balance << "\n";
    }

    // Function to withdraw from savings account
    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal of $" << amount << " successful. Updated balance: $" << balance << "\n";
        } else {
            std::cout << "Insufficient funds for withdrawal.\n";
        }
    }

    // Function to check for minimum balance in savings account
    void checkMinimumBalance() override {
        if (balance < 1000) {
            double penalty = balance * 0.05;
            balance -= penalty;
            std::cout << "Minimum balance not maintained. Penalty of $" << penalty << " imposed. Updated balance: $" << balance << "\n";
        }
    }
};

class CurrentAccount : public Account {
private:
    double minimumBalance;

public:
    // Constructor
    CurrentAccount(int accNumber, const std::string& custName, double initialBalance, double minBalance)
        : Account(accNumber, custName, "Current Account", initialBalance), minimumBalance(minBalance) {}

    // Function to withdraw from current account
    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal of $" << amount << " successful. Updated balance: $" << balance << "\n";
        } else {
            std::cout << "Insufficient funds for withdrawal.\n";
        }
    }

    // Function to check for minimum balance in current account
    void checkMinimumBalance() override {
        if (balance < minimumBalance) {
            double penalty = balance * 0.10;
            balance -= penalty;
            std::cout << "Minimum balance not maintained. Penalty of $" << penalty << " imposed. Updated balance: $" << balance << "\n";
        }
    }
};

int main() {
    // Creating objects of derived classes
    SavingsAccount savingsAccount(101, "John Doe", 1500);
    CurrentAccount currentAccount(102, "Jane Smith", 2000, 500);

    // Performing operations on savings account
    savingsAccount.computeAndDepositInterest();
    savingsAccount.displayBalance();
    savingsAccount.withdraw(200);
    savingsAccount.checkMinimumBalance();

    // Performing operations on current account
    currentAccount.displayBalance();
    currentAccount.withdraw(800);
    currentAccount.checkMinimumBalance();

    return 0;
}
