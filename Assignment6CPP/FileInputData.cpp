// Write a C++ program to write number 1 to 100 in a data file NOTES.TXT. 

#include<iostream>  // Declaration of the input output stream header file for the C++ program.
#include<fstream>  // Declaration of the file stream i.e., it has the abilities of both ofstream and ifstream - means it can create files, write information to files, and read information from files.
using namespace std;  // Declaration of the standard namespace for the program.
int main(){  // Main function or Startup function invoke in the program.
	int i;  // Declaration of the variable.
	fstream f("NOTES.TXT");  // This is to create and open the file named - NOTES.TXT
	// f.open("NOTES.TXT");
	f<<"File is Storing !";  // This will be printed in the file.
	f.close();  // This is to close the created file.
	return 0;  // Returning the integer value 0, after the execution of the Main function.
}
