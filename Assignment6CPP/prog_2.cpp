/*
[2.] Write a C++ program, which initializes a string variable to the content "Time
is a great teacher but unfortunately it kills all its pupils. Berlioz" and outputs
the string to the disk file OUT.TXT. you have to include all the header files if
required.
*/
#include <iostream>
#include <fstream>

int main() {
    // Initialize the string variable
    std::string content = "Time is a great teacher but unfortunately it kills all its pupils. Berlioz";

    // Open the file OUT.TXT for writing
    std::ofstream outFile("OUT.TXT");

    // Check if the file is opened successfully
    if (!outFile.is_open()) {
        std::cerr << "Error opening file OUT.TXT for writing.\n";
        return 1; // Return with an error code
    }

    // Write the string content to the file
    outFile << content;

    // Close the file
    outFile.close();

    // Inform the user about the successful write
    std::cout << "String written to OUT.TXT successfully.\n";

    return 0; // Return success
}
