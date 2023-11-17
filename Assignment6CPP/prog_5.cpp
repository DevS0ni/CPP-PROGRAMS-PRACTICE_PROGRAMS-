/*
[5.] Write a function to count number of words in a text file named "OUT.TXT"
*/

#include <iostream>
#include <fstream>
#include <sstream>

int countWordsInFile(const std::string& fileName) {
    std::ifstream inFile(fileName);

    if (!inFile.is_open()) {
        std::cerr << "Error opening file " << fileName << " for reading.\n";
        return -1; // Return -1 to indicate an error
    }

    int wordCount = 0;
    std::string word;

    // Read words from the file
    while (inFile >> word) {
        wordCount++;
    }

    // Close the file
    inFile.close();

    return wordCount;
}

int main() {
    std::string fileName = "OUT.TXT";

    // Call the user-defined function to count words
    int wordCount = countWordsInFile(fileName);

    if (wordCount != -1) {
        std::cout << "Number of words in " << fileName << ": " << wordCount << "\n";
    }

    return 0;
}



