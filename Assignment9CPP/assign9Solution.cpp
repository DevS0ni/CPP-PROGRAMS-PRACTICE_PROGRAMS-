#include <iostream>
#include <cmath>

// Function Overloading for Area Calculation
inline double area(double base, double height) {
    return 0.5 * base * height;
}

inline double area(double radius) {
    return 3.14159 * radius * radius;
}

// Function Overloading for Minimum Calculation
int min(int a, int b, int c) {
    return (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
}

float min(float a, float b, float c) {
    return (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
}

char min(char a, char b, char c) {
    return (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
}

double min(double a, double b, double c) {
    return (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
}

// Function Overloading for Interest Calculation
double calc_interest(double principal, double rate, double time) {
    return (principal * rate * time) / 100.0;
}

double calc_interest(double principal, double rate, double time, int n) {
    return principal * std::pow(1 + rate / n, n * time) - principal;
}

int main() {
    // Area Calculation
    std::cout << "Area of Triangle: " << area(5.0, 8.0) << std::endl;
    std::cout << "Area of Circle: " << area(3.0) << std::endl;

    // Minimum Calculation
    std::cout << "Minimum of (5, 8, 3): " << min(5, 8, 3) << std::endl;
    std::cout << "Minimum of (3.5, 2.0, 4.7): " << min(3.5f, 2.0f, 4.7f) << std::endl;
    std::cout << "Minimum of ('a', 'z', 'c'): " << min('a', 'z', 'c') << std::endl;
    std::cout << "Minimum of (10.2, 8.6, 15.7): " << min(10.2, 8.6, 15.7) << std::endl;

    // Interest Calculation
    std::cout << "Simple Interest: " << calc_interest(1000.0, 5.0, 2.0) << std::endl;
    std::cout << "Compound Interest: " << calc_interest(1000.0, 5.0, 2.0, 4) << std::endl;

    return 0;
}
