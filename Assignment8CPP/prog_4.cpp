#include <iostream>
#include <string>

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

int main() {
    Product product1;
    product1.readInfo();
    product1.displayInfo();

    return 0;
}
