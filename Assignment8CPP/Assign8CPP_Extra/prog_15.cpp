#include <iostream>
#include <string>

// Base class
class Publication {
protected:
    std::string title;
    float price;

public:
    // Function to get data from the user
    virtual void getData() {
        std::cout << "Enter title: ";
        std::getline(std::cin, title);

        std::cout << "Enter price: $";
        std::cin >> price;
        std::cin.ignore(); // Ignore the newline character left in the input buffer
    }

    // Function to display data
    virtual void putData() const {
        std::cout << "Title: " << title << "\n";
        std::cout << "Price: $" << price << "\n";
    }
};

// Derived class for books
class Book : public Publication {
private:
    int pageCount;

public:
    // Function to get data from the user
    void getData() override {
        Publication::getData(); // Call base class function
        std::cout << "Enter page count: ";
        std::cin >> pageCount;
        std::cin.ignore(); // Ignore the newline character left in the input buffer
    }

    // Function to display data
    void putData() const override {
        Publication::putData(); // Call base class function
        std::cout << "Page Count: " << pageCount << "\n";
    }
};

// Derived class for tapes
class Tape : public Publication {
private:
    float playingTime;

public:
    // Function to get data from the user
    void getData() override {
        Publication::getData(); // Call base class function
        std::cout << "Enter playing time (in minutes): ";
        std::cin >> playingTime;
        std::cin.ignore(); // Ignore the newline character left in the input buffer
    }

    // Function to display data
    void putData() const override {
        Publication::putData(); // Call base class function
        std::cout << "Playing Time: " << playingTime << " minutes\n";
    }
};

int main() {
    // Creating instances of Book and Tape
    Book book;
    Tape tape;

    // Getting data from the user
    std::cout << "Enter data for the book:\n";
    book.getData();

    std::cout << "\nEnter data for the tape:\n";
    tape.getData();

    // Displaying data
    std::cout << "\nBook Details:\n";
    book.putData();

    std::cout << "\nTape Details:\n";
    tape.putData();

    return 0;
}
