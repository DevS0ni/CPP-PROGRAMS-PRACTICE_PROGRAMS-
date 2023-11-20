#include <iostream>
#include <string>

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
    Bank bank1;
    bank1.readInfo();
    bank1.displayInfo();

    return 0;
}
