// [1.] Any integer is input by the user. Write a program to find out whether it is an odd number or even number. 

#include<iostream>  // Declaration of the standard input output stream header file.
using namespace std;  // Declaration of standard namespace for the C++ program.
int main()  // Main or Startup function for the C++ program.
{
	int num;  // Declaration of the variable.
	cout<<"Enter your desired number = ";  // Prompt the user to input a number, to validate if it is an odd or an even number.
	cin>>num;  // Taking the input from the user and store it into a variable.
	
	if((n%2)==0)  // Logic to validate if the entered number, is an odd or an even number.
	{
		if(n==0)  // Logic to check if the entered number is even and zero (Special Case).
		{
			cout<<"The entered number is zero";  // Prompting the user, if the number turns out to be zero.
		}
		else
		{
			cout<<"The entered number is even";  // If the number is even, but not zero then this statement will be prompted.
		}
	}
	else 
	{
		cout<<"The entered number is odd";  // If all the cases become false, then the number must be an odd number then this statement will be executed.
	}
	return 0;  // Returning the integer value 0, to the system, after the execution of the Main or Startup program.
}
