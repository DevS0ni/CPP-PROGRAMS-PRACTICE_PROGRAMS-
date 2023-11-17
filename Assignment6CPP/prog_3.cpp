/*
[3.] Write a user-defined function in C++ to read the content from a text file
OUT. TXT, count and display the number of alphabets present in it.
*/
#include <iostream>
#include <fstream>
#include <cctype>

int countAlphabetsInFile(const std::string& fileName) {
    std::ifstream inFile(fileName);

    if (!inFile.is_open()) {
        std::cerr << "Error opening file " << fileName << " for reading.\n";
        return -1; // Return -1 to indicate an error
    }

    int alphabetCount = 0;
    char ch;

    // Read characters from the file
    while (inFile.get(ch)) {
        if (isalpha(ch)) {
            alphabetCount++;
        }
    }

    // Close the file
    inFile.close();

    return alphabetCount;
}

int main() {
    std::string fileName = "OUT.TXT";

    // Call the user-defined function to count alphabets
    int alphabetCount = countAlphabetsInFile(fileName);

    if (alphabetCount != -1) {
        std::cout << "Number of alphabets in " << fileName << ": " << alphabetCount << "\n";
    }

    return 0;
}

