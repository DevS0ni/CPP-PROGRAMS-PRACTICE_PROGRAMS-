#include <iostream>
#include <cmath>

// Inline function for calculating the area of a rectangle
inline double Rectangle(double length, double width) {
    return length * width;
}

// Inline function for calculating the area of a square
inline double Square(double side) {
    return side * side;
}

// Inline function for calculating the area of a circle
inline double Circle(double radius) {
    return 3.14159 * radius * radius;
}

// Inline function for calculating the volume of a cube
inline double Cube(double side) {
    return std::pow(side, 3);
}

int main() {
    int choice;
    double length, width, side, radius;

    do {
        // Display menu
        std::cout << "\nMenu:\n"
                  << "1. Rectangle\n"
                  << "2. Square\n"
                  << "3. Circle\n"
                  << "4. Cube\n"
                  << "5. Exit\n"
                  << "Enter your choice: ";

        std::cin >> choice;

        switch (choice) {
            case 1:
                // Rectangle
                std::cout << "Enter length and width of rectangle: ";
                std::cin >> length >> width;
                std::cout << "Area of Rectangle: " << Rectangle(length, width) << std::endl;
                break;

            case 2:
                // Square
                std::cout << "Enter side of square: ";
                std::cin >> side;
                std::cout << "Area of Square: " << Square(side) << std::endl;
                break;

            case 3:
                // Circle
                std::cout << "Enter radius of circle: ";
                std::cin >> radius;
                std::cout << "Area of Circle: " << Circle(radius) << std::endl;
                break;

            case 4:
                // Cube
                std::cout << "Enter side of cube: ";
                std::cin >> side;
                std::cout << "Volume of Cube: " << Cube(side) << std::endl;
                break;

            case 5:
                // Exit
                std::cout << "Exiting the program.\n";
                break;

            default:
                std::cout << "Invalid choice. Please enter a valid option.\n";
        }

    } while (choice != 5);

    return 0;
}
