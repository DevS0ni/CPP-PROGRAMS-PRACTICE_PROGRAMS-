#include <iostream>
#include <algorithm>

class myarray {
private:
    int arr[100];
    int size;

public:
    void input() {
        std::cout << "Enter the size of the array: ";
        std::cin >> size;

        std::cout << "Enter elements of the array: ";
        for (int i = 0; i < size; ++i) {
            std::cin >> arr[i];
        }
    }

    void sort_asc() {
        std::sort(arr, arr + size);
    }

    void sort_desc() {
        std::sort(arr, arr + size, std::greater<int>());
    }

    void sort_search(int element) {
        auto it = std::find(arr, arr + size, element);

        if (it != arr + size) {
            std::cout << "Element found in the array.\n";
        } else {
            std::cout << "Element not found in the array.\n";
        }
    }

    void display() {
        std::cout << "Sorted array: ";
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << "\n";
    }
};

int main() {
    myarray arrObj;
    int choice, element;

    do {
        std::cout << "\nMENU\n";
        std::cout << "------------------------\n";
        std::cout << "1. Sort Ascending\n";
        std::cout << "2. Sort Descending\n";
        std::cout << "3. Search Element\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                arrObj.input();
                arrObj.sort_asc();
                arrObj.display();
                break;

            case 2:
                arrObj.input();
                arrObj.sort_desc();
                arrObj.display();
                break;

            case 3:
                arrObj.input();
                std::cout << "Enter element to search: ";
                std::cin >> element;
                arrObj.sort_search(element);
                break;

            case 4:
                std::cout << "Exiting program.\n";
                break;

            default:
                std::cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
