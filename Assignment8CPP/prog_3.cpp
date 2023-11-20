#include <iostream>
#include <string>

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

int main() {
    Library book1;
    book1.readInfo();
    book1.displayInfo();

    return 0;
}
