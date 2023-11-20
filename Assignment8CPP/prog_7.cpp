#include <iostream>
#include <string>

class Student {
private:
    int rollNo;
    std::string name;
    int marks[6];
    int total;
    float percentage;
    std::string result;

public:
    void readInfo() {
        std::cout << "Enter Roll Number: ";
        std::cin >> rollNo;
        std::cin.ignore();
        std::cout << "Enter Name: ";
        std::getline(std::cin, name);
        std::cout << "Enter Marks for 6 Subjects:" << std::endl;
        for (int i = 0; i < 6; ++i) {
            std::cout << "Subject " << i + 1 << ": ";
            std::cin >> marks[i];
        }
        calculateResult();
    }

    void displayInfo() const {
        std::cout << "Roll Number: " << rollNo << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Marks in 6 Subjects: ";
        for (int i = 0; i < 6; ++i) {
            std::cout << marks[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "Total Marks: " << total << std::endl;
        std::cout << "Percentage: " << percentage << "%" << std::endl;
        std::cout << "Result: " << result << std::endl;
    }

private:
    void calculateResult() {
        total = 0;
        for (int i = 0; i < 6; ++i) {
            total += marks[i];
        }

        percentage = static_cast<float>(total) / 6;

        if (marks[0] >= 40 && marks[1] >= 40 && marks[2] >= 40 && marks[3] >= 40 && marks[4] >= 40 &&
            marks[5] >= 40) {
            result = "PASS";
        } else if (marks[0] >= 40 && marks[1] >= 40 && marks[2] >= 40 && marks[3] >= 40 &&
                   (marks[4] < 40 || marks[5] < 40)) {
            result = "ATKT";
        } else {
            result = "FAIL";
        }
    }
};

int main() {
    int numStudents;
    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;

    Student* students = new Student[numStudents];

    for (int i = 0; i < numStudents; ++i) {
        std::cout << "\nEnter details for Student " << i + 1 << ":" << std::endl;
        students[i].readInfo();
    }

    std::cout << "\nStudent Marksheets:" << std::endl;
    for (int i = 0; i < numStudents; ++i) {
        students[i].displayInfo();
        std::cout << "##############" << std::endl;
    }

    delete[] students;

    return 0;
}
