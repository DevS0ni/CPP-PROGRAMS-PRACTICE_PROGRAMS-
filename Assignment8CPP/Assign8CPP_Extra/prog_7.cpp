#include <iostream>
#include <cctype>

class CharStringOperations {
private:
    char str[100];

public:
    void input() {
        std::cout << "Enter a character string: ";
        std::cin.getline(str, 100);
    }

    int countWords() {
        int count = 0;
        bool inWord = false;

        for (int i = 0; str[i]; ++i) {
            if (std::isalpha(str[i]) && !inWord) {
                inWord = true;
                ++count;
            } else if (!std::isalpha(str[i]) && inWord) {
                inWord = false;
            }
        }

        return count;
    }

    int countUpperCase() {
        int count = 0;

        for (int i = 0; str[i]; ++i) {
            if (std::isupper(str[i])) {
                ++count;
            }
        }

        return count;
    }

    int countLowerCase() {
        int count = 0;

        for (int i = 0; str[i]; ++i) {
            if (std::islower(str[i])) {
                ++count;
            }
        }

        return count;
    }

    int countBlanks() {
        int count = 0;

        for (int i = 0; str[i]; ++i) {
            if (std::isspace(str[i])) {
                ++count;
            }
        }

        return count;
    }

    void displayResults() {
        std::cout << "Total no. of words: " << countWords() << "\n";
        std::cout << "Total no. of upper case letters: " << countUpperCase() << "\n";
        std::cout << "Total no. of lower case letters: " << countLowerCase() << "\n";
        std::cout << "Total no. of blanks: " << countBlanks() << "\n";
    }
};

int main() {
    CharStringOperations charStringObj;
    charStringObj.input();
    charStringObj.displayResults();

    return 0;
}
