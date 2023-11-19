#include <iostream>
#include <iomanip>

// Function to print the addition of two numbers using a 2D array
void printAddition(int a[1][2], int b[1][2]) {
    int result[1][2];

    // Perform addition
    for (int i = 0; i < 1; ++i) {
        for (int j = 0; j < 2; ++j) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print the result
    std::cout << "Addition of two numbers using a 2D array:" << std::endl;
    for (int i = 0; i < 1; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Function to calculate the grade based on average marks
char calculateGrade(float average) {
    if (average < 40) {
        return 'F';  // Fail
    } else if (average < 60) {
        return 'C';  // Second Class
    } else if (average < 75) {
        return 'B';  // First Class
    } else {
        return 'A';  // Distinction
    }
}

int main() {
    // Part 1: Print addition of two numbers using a 2D array
    int matrix1[1][2] = {{5, 8}};
    int matrix2[1][2] = {{3, 2}};
    printAddition(matrix1, matrix2);

    // Part 2: Print marks of five subjects using a one-dimensional array
    int marks[5] = {75, 82, 60, 45, 90};  // Sample marks for five subjects

    std::cout << "\nMarks of five subjects:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Subject " << (i + 1) << ": " << marks[i] << std::endl;
    }

    // Part 3: Calculate and print the grade based on the average marks
    float totalMarks = 0;
    for (int i = 0; i < 5; ++i) {
        totalMarks += marks[i];
    }

    float averageMarks = totalMarks / 5;

    // Part 4: Display the grade
    char grade = calculateGrade(averageMarks);

    // Part 5: Print the student mark sheet
    std::cout << "\nStudent Mark Sheet:" << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << "Average Marks: " << std::fixed << std::setprecision(2) << averageMarks << std::endl;
    std::cout << "Grade: " << grade << std::endl;

    // Part 6: Print a two-dimensional array
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    std::cout << "\nTwo-dimensional array:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
