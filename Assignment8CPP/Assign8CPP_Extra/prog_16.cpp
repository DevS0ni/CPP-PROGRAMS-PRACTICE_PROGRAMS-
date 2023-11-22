#include <iostream>
#include <iomanip>
#include <string>

const int MAX_STUDENTS = 50;

class Student {
private:
    int std_no;
    std::string std_name;
    int std_sub1, std_sub2, std_sub3;
    int total;
    float per;

public:
    // Function to get student number
    int getStudentNumber() const {
        return std_no;
    }

    // Function to get new student entry
    void newStudentEntry() {
        std::cout << "Enter Student Number: ";
        std::cin >> std_no;
        std::cin.ignore(); // Ignore the newline character left in the input buffer

        std::cout << "Enter Student Name: ";
        std::getline(std::cin, std_name);

        std::cout << "Enter Marks for Subject 1: ";
        std::cin >> std_sub1;

        std::cout << "Enter Marks for Subject 2: ";
        std::cin >> std_sub2;

        std::cout << "Enter Marks for Subject 3: ";
        std::cin >> std_sub3;

        // Calculate total and percentage
        total = std_sub1 + std_sub2 + std_sub3;
        per = static_cast<float>(total) / 3.0;
    }

    // Function to calculate student result
    void calculateStudentResult() {
        // Implement your result calculation logic here
        if (per >= 35) {
            std::cout << "Student passed!\n";
        } else {
            std::cout << "Student failed!\n";
        }
    }

    // Function to display formatted mark sheet
    void displayMarkSheet() const {
        std::cout << "\nStudent Number: " << std_no << "\n";
        std::cout << "Student Name: " << std_name << "\n";
        std::cout << "Marks for Subject 1: " << std_sub1 << "\n";
        std::cout << "Marks for Subject 2: " << std_sub2 << "\n";
        std::cout << "Marks for Subject 3: " << std_sub3 << "\n";
        std::cout << "Total Marks: " << total << "\n";
        std::cout << "Percentage: " << std::fixed << std::setprecision(2) << per << "%\n";
    }

    // Function to delete student entry
    void deleteStudentEntry() {
        std_no = 0;
        std_name = "";
        std_sub1 = std_sub2 = std_sub3 = total = 0;
        per = 0.0;
        std::cout << "Student Entry Deleted.\n";
    }

    // Function to modify student info
    void modifyStudentInfo() {
        std::cout << "Enter new Student Name: ";
        std::cin.ignore(); // Clear the newline character left in the input buffer
        std::getline(std::cin, std_name);

        std::cout << "Enter new Marks for Subject 1: ";
        std::cin >> std_sub1;

        std::cout << "Enter new Marks for Subject 2: ";
        std::cin >> std_sub2;

        std::cout << "Enter new Marks for Subject 3: ";
        std::cin >> std_sub3;

        // Recalculate total and percentage
        total = std_sub1 + std_sub2 + std_sub3;
        per = static_cast<float>(total) / 3.0;

        std::cout << "Student Info Modified.\n";
    }
};

int main() {
    Student students[MAX_STUDENTS];
    int choice;

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. New Student Entry\n";
        std::cout << "2. Calculate Student Result\n";
        std::cout << "3. Display Specified Student's Formatted Mark Sheet\n";
        std::cout << "4. Delete Student Entry\n";
        std::cout << "5. Modify Student Info\n";
        std::cout << "6. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                // New Student Entry
                for (int i = 0; i < MAX_STUDENTS; ++i) {
                    if (students[i].getStudentNumber() == 0) {
                        students[i].newStudentEntry();
                        break;
                    }
                }
                break;

            case 2:
                // Calculate Student Result
                int studentNumber;
                std::cout << "Enter Student Number to Calculate Result: ";
                std::cin >> studentNumber;

                for (int i = 0; i < MAX_STUDENTS; ++i) {
                    if (students[i].getStudentNumber() == studentNumber) {
                        students[i].calculateStudentResult();
                        break;
                    }
                }
                break;

            case 3:
                // Display Specified Student's Formatted Mark Sheet
                int displayStudentNumber;
                std::cout << "Enter Student Number to Display Mark Sheet: ";
                std::cin >> displayStudentNumber;

                for (int i = 0; i < MAX_STUDENTS; ++i) {
                    if (students[i].getStudentNumber() == displayStudentNumber) {
                        students[i].displayMarkSheet();
                        break;
                    }
                }
                break;

            case 4:
                // Delete Student Entry
                int deleteStudentNumber;
                std::cout << "Enter Student Number to Delete: ";
                std::cin >> deleteStudentNumber;

                for (int i = 0; i < MAX_STUDENTS; ++i) {
                    if (students[i].getStudentNumber() == deleteStudentNumber) {
                        students[i].deleteStudentEntry();
                        break;
                    }
                }
                break;

            case 5:
                // Modify Student Info
                int modifyStudentNumber;
                std::cout << "Enter Student Number to Modify: ";
                std::cin >> modifyStudentNumber;

                for (int i = 0; i < MAX_STUDENTS; ++i) {
                    if (students[i].getStudentNumber() == modifyStudentNumber) {
                        students[i].modifyStudentInfo();
                        break;
                    }
                }
                break;

            case 6:
                std::cout << "Exiting the program.\n";
                break;

            default:
                std::cout << "Invalid choice. Please enter a valid choice.\n";
        }
    } while (choice != 6);

    return 0;
}
