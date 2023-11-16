// [2.] Find the absolute value of a number entered by the user.  

#include<iostream>  // Declaration of the standard input output stream header file.
#include<math.h>  // Declaration of the system library 'math.h'.
using namespace std;  // Declaration of the standard namespace.
int main()  // Main or Startup function of the program.
{
	int num;  // Declaration of the variables for the program.
	cout<<"Enter your desired integer = ";  // Prompting the user to enter the number, for which we need to find the absolute value.
	cin>>num;  // Taking the input of the number from the user.
	
	cout<<"The absolute value of the entered integer = "<<abs(num);  // The logic or statement to find the absolute number of the entered digit.
	
	return 0;  // Returning the integer value 0, to the system, after the execution of the program.
}
