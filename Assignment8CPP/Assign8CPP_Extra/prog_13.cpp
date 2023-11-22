#include <iostream>
#include <iomanip>

class Student {
private:
    std::string name;
    int rollNo;
    int marks[10];
    int sexCode;
    float totalMarks;
    float percentage;
    std::string result;
    std::string awardClass;

public:
    // Function to read student data
    void readStudentData() {
        std::cout << "Enter Student Name: ";
        std::getline(std::cin, name);

        std::cout << "Enter Roll No.: ";
        std::cin >> rollNo;

        std::cout << "Enter Marks for BCA201 to BCA210:\n";
        for (int i = 0; i < 10; ++i) {
            std::cout << "Enter Marks for Subject " << (i + 1) << ": ";
            std::cin >> marks[i];
        }

        std::cout << "Enter Sex Code (1 for Male, 2 for Female): ";
        std::cin >> sexCode;
    }

    // Function to calculate total marks and percentage
    void calculateResult() {
        totalMarks = 0;
        for (int i = 0; i < 10; ++i) {
            totalMarks += marks[i];
        }

        percentage = (totalMarks / 1000) * 100;

        if (percentage >= 70) {
            result = "PASS";
            awardClass = "DISTINCTION";
        } else if (percentage >= 60) {
            result = "PASS";
            awardClass = "FIRST";
        } else if (percentage >= 48) {
            result = "PASS";
            awardClass = "SECOND";
        } else {
            result = "FAIL";
            awardClass = "";
        }
    }

    // Function to display student mark sheet
    void displayMarkSheet() const {
        std::cout << std::setw(10) << rollNo
                  << std::setw(20) << name
                  << std::setw(8) << marks[0]
                  << std::setw(8) << marks[1]
                  << std::setw(8) << marks[2]
                  << std::setw(8) << marks[3]
                  << std::setw(8) << marks[4]
                  << std::setw(8) << marks[5]
                  << std::setw(8) << totalMarks
                  << std::setw(8) << std::setprecision(2) << std::fixed << percentage
                  << std::setw(10) << result
                  << std::setw(10) << awardClass
                  << "\n";
    }

    // Getter function for sex code
    int getSexCode() const {
        return sexCode;
    }

    // Function to check if the student passed
    bool isPass() const {
        return result == "PASS";
    }
};

int main() {
    int N;
    std::cout << "Enter the number of students: ";
    std::cin >> N;

    std::vector<Student> students(N);

    int passMaleCount = 0;
    int passFemaleCount = 0;

    std::cout << "Enter details for each student:\n";
    for (int i = 0; i < N; ++i) {
        students[i].readStudentData();
        students[i].calculateResult();
        students[i].displayMarkSheet();

        // Count pass students by gender
        if (students[i].isPass()) {
            if (students[i].getSexCode() == 1) {
                passMaleCount++;
            } else if (students[i].getSexCode() == 2) {
                passFemaleCount++;
            }
        }
    }

    std::cout << "\nTotal Pass Students:\n";
    std::cout << "Male: " << passMaleCount << "\n";
    std::cout << "Female: " << passFemaleCount << "\n";
    std::cout << "Total: " << passMaleCount + passFemaleCount << "\n";

    return 0;
}
