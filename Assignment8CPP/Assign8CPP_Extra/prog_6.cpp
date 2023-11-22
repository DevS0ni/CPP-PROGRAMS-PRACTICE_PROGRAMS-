#include <iostream>
#include <cstring>
#include <cctype>

class MyString {
private:
    char str[100];

public:
    void input() {
        std::cout << "Enter a string: ";
        std::cin.getline(str, 100);
    }

    void reverse() {
        std::reverse(str, str + strlen(str));
    }

    void toUpper() {
        for (int i = 0; str[i]; i++) {
            str[i] = toupper(str[i]);
        }
    }

    void toLower() {
        for (int i = 0; str[i]; i++) {
            str[i] = tolower(str[i]);
        }
    }

    void printLength() {
        std::cout << "Length of the string: " << strlen(str) << "\n";
    }

    void replace() {
        char oldChar, newChar;
        std::cout << "Enter character to replace: ";
        std::cin >> oldChar;
        std::cout << "Enter new character: ";
        std::cin >> newChar;

        for (int i = 0; str[i]; i++) {
            if (str[i] == oldChar) {
                str[i] = newChar;
            }
        }
    }

    void findCharacter() {
        char searchChar;
        std::cout << "Enter character to find: ";
        std::cin >> searchChar;

        if (strchr(str, searchChar) != nullptr) {
            std::cout << "Character found in the string.\n";
        } else {
            std::cout << "Character not found in the string.\n";
        }
    }

    void display() {
        std::cout << "Modified string: " << str << "\n";
    }
};

int main() {
    MyString strObj;
    int choice;

    do {
        std::cout << "\nMENU\n";
        std::cout << "------------------------\n";
        std::cout << "1. Reverse the String\n";
        std::cout << "2. Convert the String to uppercase\n";
        std::cout << "3. Convert the String to lowercase\n";
        std::cout << "4. Print the Length of the String\n";
        std::cout << "5. Replace the String\n";
        std::cout << "6. Find the String Character\n";
        std::cout << "7. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore();  // Clear the newline character left in the buffer

        switch (choice) {
            case 1:
                strObj.input();
                strObj.reverse();
                strObj.display();
                break;

            case 2:
                strObj.input();
                strObj.toUpper();
                strObj.display();
                break;

            case 3:
                strObj.input();
                strObj.toLower();
                strObj.display();
                break;

            case 4:
                strObj.input();
                strObj.printLength();
                break;

            case 5:
                strObj.input();
                strObj.replace();
                strObj.display();
                break;

            case 6:
                strObj.input();
                strObj.findCharacter();
                break;

            case 7:
                std::cout << "Exiting program.\n";
                break;

            default:
                std::cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 7);

    return 0;
}
