#include <iostream>

class Shape {
protected:
    double side1;
    double side2;

public:
    void get_data() {
        std::cout << "Enter Side 1: ";
        std::cin >> side1;

        std::cout << "Enter Side 2: ";
        std::cin >> side2;
    }

    virtual void display_area() {
        std::cout << "Area: ";
    }
};

class Triangle : public Shape {
public:
    void display_area() override {
        Shape::display_area();
        double area = 0.5 * side1 * side2;
        std::cout << area << std::endl;
    }
};

class Rectangle : public Shape {
public:
    void display_area() override {
        Shape::display_area();
        double area = side1 * side2;
        std::cout << area << std::endl;
    }
};

int main() {
    Triangle triangle;
    Rectangle rectangle;

    std::cout << "Enter Triangle Data:\n";
    triangle.get_data();
    triangle.display_area();

    std::cout << "\nEnter Rectangle Data:\n";
    rectangle.get_data();
    rectangle.display_area();

    return 0;
}
