#include <iostream>
#include <fstream>
using namespace std;

// Theory:

// Q-1. Define File.
/*
   Answer: A file is a collection of related information stored on a secondary storage device, such as a hard disk,
   SSD, or USB drive. Files can contain various types of data, such as text, images, audio, video, etc.
*/

// Q-2. Draw the architecture for file stream operations.
/*
   Answer:
   The architecture for file stream operations involves three main classes:
   - ofstream (derived from ostream): Output file stream, used for writing data to files.
   - ifstream (derived from istream): Input file stream, used for reading data from files.
   - fstream (derived from iostream): General file stream, supports both input and output file operations.
*/

// Q-3. Define The Following:
// a) Fstream Base: fstream is a C++ standard library class that represents a file stream and provides both
//    input and output operations.
// b) Ifstream: Ifstream is a class derived from istream, used for reading data from files.
// c) Ofstream: Ofstream is a class derived from ostream, used for writing data to files.
// d) Fstream: Fstream is a class derived from iostream, providing both input and output file stream operations.

// Q-4. Which functions are used for reading a character and also for writing a character.
/*
   Answer: For reading a character, get() and getline() functions are commonly used.
           For writing a character, put() and write() functions are commonly used.
*/

// Practical:

// Q-1. Write a program in which create a file named "Data.txt" and write three words: India, Pakistan, and Sri-Lanka.
void writeFile() {
    ofstream file("Data.txt");

    if (file.is_open()) {
        file << "India\n";
        file << "Pakistan\n";
        file << "Sri-Lanka\n";
        file.close();
        cout << "File created and data written successfully.\n";
    } else {
        cerr << "Unable to open the file.\n";
    }
}

// Q-2. Write a program to accept the file name and display its content on the output screen.
void displayFileContent(const string &fileName) {
    ifstream file(fileName);

    if (file.is_open()) {
        cout << "Content of the file \"" << fileName << "\":\n";
        char ch;
        while (file.get(ch)) {
            cout << ch;
        }
        file.close();
    } else {
        cerr << "Unable to open the file.\n";
    }
}

int main() {
    // Q-1. Write a program to create a file named "Data.txt" and write three words.
    writeFile();

    // Q-2. Write a program to accept the file name and display its content.
    string fileName;
    cout << "Enter the file name: ";
    cin >> fileName;
    displayFileContent(fileName);

    return 0;
}
