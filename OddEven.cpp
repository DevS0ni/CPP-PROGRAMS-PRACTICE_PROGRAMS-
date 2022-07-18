// [9.] CHECK WHETHER NUMBER IS ODD OR EVEN.

#include<iostream> // Declaration of the input output stream header file.
using namespace std;  // Declaration of the standard namespace.
int main()  // Main or Startup function of the program.
{
	int num;  // Declaration of variable.
	
	cout<<"Enter Number = ";  // Prompting the user to enter the number, for validating, if it is Odd or Even.
	cin>>num;  // Taking the number as an input from the user.
	
	if((num%2)==0) // Logic to check if the number is Even or not.
	{
		cout<<"The entered number is even.";  // Prompting the user that the number is Even, if it turns out to be an Even Number.
	}
	
	else  // If the entered number is not an Even number then the else block will be executed.
	{
		cout<<"The entered number is odd.";  // Prompting the user that the number is Odd, if it turns out to be an Odd Number.
	}
	return 0;  // Returning the value of the integer value equal to 0, after the execution of the Main function.
} 
