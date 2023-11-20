#include <iostream>
#include <string>

class Student {
private:
    int studNumber;
    std::string studName;
    int marks[3];
    int total;
    float avg;

public:
    void readInfo() {
        std::cout << "Enter Student Number: ";
        std::cin >> studNumber;
        std::cin.ignore();
        std::cout << "Enter Student Name: ";
        std::getline(std::cin, studName);
        std::cout << "Enter Marks for 3 Subjects:" << std::endl;
        for (int i = 0; i < 3; ++i) {
            std::cout << "Subject " << i + 1 << ": ";
            std::cin >> marks[i];
        }
        calculateTotalAndAvg();
    }

    void displayInfo() const {
        std::cout << "Student Number: " << studNumber << std::endl;
        std::cout << "Student Name: " << studName << std::endl;
        std::cout << "Marks in 3 Subjects: ";
        for (int i = 0; i < 3; ++i) {
            std::cout << marks[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "Total Marks: " << total << std::endl;
        std::cout << "Average Marks: " << avg << std::endl;
    }

private:
    void calculateTotalAndAvg() {
        total = 0;
        for (int i = 0; i < 3; ++i) {
            total += marks[i];
        }
        avg = static_cast<float>(total) / 3;
    }
};

int main() {
    Student student1;
    student1.readInfo();
    student1.displayInfo();

    return 0;
}
