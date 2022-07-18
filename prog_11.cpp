// [10.] TO CHECK WHETHER THE ENTERED NUMBER IS EVEN OR ODD. [USING TERNARY OPERATOR ' ()?: ']..

#include<iostream> // Declaration of the standard input/ output stream header file for the C++ program.
// #include<stdio.h> (for C Programming.....)
using namespace std;  // Declaration of the standard namespace for the C++ program.
int main()  // Main or Start-up function of the program.
{
	int num; // Declaration of the variables in the program.
	
	cout<<"Enter any number = "; // Prompting the user to enter a number, in order to validate if the number is even or odd !? 
	cin>>num;  // Accepting the input, from the user.
	
	(num%2)==0? cout<<"The entered number is even.." : cout<<"The entered number is odd..";  // The application of the ternary operator to validate, if the number passed by the user is even or odd ? 
 // (num%2)==0? printf("The entered number is positive..") : printf("The entered number is negative.."); (for C Programming....)
	return 0;  // Returning the integer value 0, to the system, after the execution of the main function in the program.
}
