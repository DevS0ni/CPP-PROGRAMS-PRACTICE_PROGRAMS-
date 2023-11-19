#include <iostream>
#include <cstring>

// 1. Function to find the length of a string
int findLength(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        ++length;
    }
    return length;
}

// 2. Function to display a string from backward
void displayBackward(const char* str) {
    int length = findLength(str);
    for (int i = length - 1; i >= 0; --i) {
        std::cout << str[i];
    }
    std::cout << std::endl;
}

// 3. Function to count the number of words in a string
int countWords(const char* str) {
    int wordCount = 0;
    bool inWord = false;

    for (int i = 0; str[i] != '\0'; ++i) {
        if (std::isspace(str[i])) {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            ++wordCount;
        }
    }

    return wordCount;
}

// 4. Function to concatenate two strings
void concatenateStrings(char* dest, const char* src) {
    strcat(dest, src);
}

// 5. Function to compare two strings for exact equality
bool areStringsEqual(const char* str1, const char* str2) {
    return strcmp(str1, str2) == 0;
}

// 6. Function to check if a string is palindrome
bool isPalindrome(const char* str) {
    int length = findLength(str);
    for (int i = 0; i < length / 2; ++i) {
        if (str[i] != str[length - 1 - i]) {
            return false;
        }
    }
    return true;
}

// 7. Function to find a substring within a string and display its starting position
int findSubstring(const char* str, const char* sub) {
    const char* position = strstr(str, sub);
    if (position != nullptr) {
        return position - str;
    } else {
        return -1; // Substring not found
    }
}

// 8. Function to reverse a string
void reverseString(char* str) {
    int length = findLength(str);
    for (int i = 0; i < length / 2; ++i) {
        std::swap(str[i], str[length - 1 - i]);
    }
}

// 9. Function to convert a string to lowercase
void toLowerCase(char* str) {
    int length = findLength(str);
    for (int i = 0; i < length; ++i) {
        str[i] = std::tolower(str[i]);
    }
}

// 10. Function to convert a string to uppercase
void toUpperCase(char* str) {
    int length = findLength(str);
    for (int i = 0; i < length; ++i) {
        str[i] = std::toupper(str[i]);
    }
}

int main() {
    // Test cases
    const char* myString = "Hello, World!";
    char concatString[50] = "Concatenated: ";

    std::cout << "Length of string: " << findLength(myString) << std::endl;

    std::cout << "String from backward: ";
    displayBackward(myString);

    std::cout << "Number of words in string: " << countWords(myString) << std::endl;

    concatenateStrings(concatString, myString);
    std::cout << concatString << std::endl;

    const char* string1 = "Hello";
    const char* string2 = "Hello";
    if (areStringsEqual(string1, string2)) {
        std::cout << "The strings are exactly equal." << std::endl;
    } else {
        std::cout << "The strings are not equal." << std::endl;
    }

    const char* palindromeString = "madam";
    if (isPalindrome(palindromeString)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    const char* mainString = "Hello, World!";
    const char* substring = "World";
    int position = findSubstring(mainString, substring);
    if (position != -1) {
        std::cout << "Substring found at position: " << position << std::endl;
    } else {
        std::cout << "Substring not found." << std::endl;
    }

    char reverseThis[] = "Reverse Me!";
    reverseString(reverseThis);
    std::cout << "Reversed string: " << reverseThis << std::endl;

    char convertToLower[] = "Convert Me to Lowercase!";
    toLowerCase(convertToLower);
    std::cout << "Lowercase string: " << convertToLower << std::endl;

    char convertToUpper[] = "Convert Me to Uppercase!";
    toUpperCase(convertToUpper);
    std::cout << "Uppercase string: " << convertToUpper << std::endl;

    return 0;
}

