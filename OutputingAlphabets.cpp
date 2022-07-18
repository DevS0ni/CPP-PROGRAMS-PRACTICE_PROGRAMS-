// [2.] C program to print all alphabets from a to z.

#include<iostream>  // Declaration of the standard input output stream header file for the C++ program.
using namespace std;  // Declaration of the standard namespace for the C++ program.
int main()  // Main or start up function for the program.
{
	char ch;  // Declaration of the variables.
	for(ch='a';ch<='z';ch++)  // Implementation of the for loop.
	{
		cout<<ch<<"\t";  // Outputing the letters from 'a' to 'z' in the alphabetical series.
	}
	return 0;  // Returning the value 0, after the completion of the main function.
}
