// [10.] TO CHECK WHETHER THE ENTERED NUMBER IS POSITIVE OR NEGATIVE. [USING TERNARY OPERATOR '()?:']..

#include<iostream>  // Declaration of the standard input output stream header file for the C++ program.
//#include<stdio.h> (for C Programming.....)
using namespace std;  // Declaration of the standard namespace for the C++ program.
int main()  // Main or Start up Program for the C++ program.
{
	int num;  // Declaration of the variables.
	
	cout<<"Enter any integer = ";  // Prompting the user, to indicate a number, which will be validated ( if it's positive or negative ? )
	cin>>num;  // Inputing the value of the integer to the variable assigned.
	
	num>0? cout<<"The entered number is positive.." : cout<<"The entered number is negative..";  // Ternary operator which validates the condition and prints the statement, according to the condition fulfilled.
 // num>0? printf("The entered number is positive..") : printf("The entered number is negative.."); (for C Programming....)
	return 0;  // Returning the integer value 0, after the completion of the Main Function.
}
