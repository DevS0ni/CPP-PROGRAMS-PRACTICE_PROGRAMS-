// Write a C++ program to write number 1 to 100 in a data file NOTES.TXT. 

#include <iostream>
#include <fstream>

int main() {
    std::ofstream outFile("NOTES.TXT");

    if (!outFile) {
        std::cerr << "Error opening file for writing.\n";
        return 1;
    }

    for (int i = 1; i <= 100; ++i) {
        outFile << i << "\n";
    }

    std::cout << "Numbers 1 to 100 written to NOTES.TXT successfully.\n";

    outFile.close();
    return 0;
}
