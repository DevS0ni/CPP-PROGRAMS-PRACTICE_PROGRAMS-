/*
[4.] Write a function to count the number of blank present in a text file named
"OUT.TXT"
*/

#include <iostream>
#include <fstream>

int countBlanksInFile(const std::string& fileName) {
    std::ifstream inFile(fileName);

    if (!inFile.is_open()) {
        std::cerr << "Error opening file " << fileName << " for reading.\n";
        return -1; // Return -1 to indicate an error
    }

    int blankCount = 0;
    char ch;

    // Read characters from the file
    while (inFile.get(ch)) {
        if (isspace(ch) && ch != '\n') {
            blankCount++;
        }
    }

    // Close the file
    inFile.close();

    return blankCount;
}

int main() {
    std::string fileName = "OUT.TXT";

    // Call the user-defined function to count blanks
    int blankCount = countBlanksInFile(fileName);

    if (blankCount != -1) {
        std::cout << "Number of blanks in " << fileName << ": " << blankCount << "\n";
    }

    return 0;
}

