#include <iostream>

int main() {
    float arr[3][3] = {
        {-50.5},
        {500.1, 70.7},
        {100.9, 0.5, 20.2}
    };

    // Display array elements
    std::cout << "2-D Array Elements:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }

    // Display array length
    std::cout << "\nArray Length: " << sizeof(arr) / sizeof(float) << std::endl;

    return 0;
}
