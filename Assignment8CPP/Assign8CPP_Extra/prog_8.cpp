#include <iostream>

class Student {
protected:
    std::string name;
    int rollNumber;

public:
    void input() {
        std::cout << "Enter student name: ";
        std::getline(std::cin, name);

        std::cout << "Enter roll number: ";
        std::cin >> rollNumber;
        std::cin.ignore(); // Clear the newline character left in the buffer
    }
};

class Marksheet : public Student {
private:
    int marksHindi, marksEnglish, marksGujarati, marksMaths, marksScience, marksComputer;

public:
    void inputMarks() {
        std::cout << "Enter marks for Hindi: ";
        std::cin >> marksHindi;

        std::cout << "Enter marks for English: ";
        std::cin >> marksEnglish;

        std::cout << "Enter marks for Gujarati: ";
        std::cin >> marksGujarati;

        std::cout << "Enter marks for Maths: ";
        std::cin >> marksMaths;

        std::cout << "Enter marks for Science: ";
        std::cin >> marksScience;

        std::cout << "Enter marks for Computer: ";
        std::cin >> marksComputer;
    }

    void calculateGrade() {
        float percentage = (marksHindi + marksEnglish + marksGujarati + marksMaths + marksScience + marksComputer) / 6.0;

        std::cout << "Percentage: " << percentage << "%\n";

        if (percentage >= 75) {
            std::cout << "Grade: A\n";
        } else if (percentage >= 68 && percentage < 74) {
            std::cout << "Grade: B\n";
        } else if (percentage >= 60 && percentage < 68) {
            std::cout << "Grade: C\n";
        } else if (percentage >= 50 && percentage < 60) {
            std::cout << "Grade: D\n";
        } else {
            std::cout << "Grade: F\n";
        }
    }
};

int main() {
    Marksheet student;
    student.input();
    student.inputMarks();
    student.calculateGrade();

    return 0;
}
