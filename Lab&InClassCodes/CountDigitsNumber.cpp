// [8.] C program to count number of digits in an integer.

#include<iostream>  // Declaration of the standard input/ output stream header file for the C++ program.
using namespace std;  // Declaration of the standard namespace for the C++ program.
int main()  // Main or start-up function of the program.
{
	int i,count=0;  // Declaration of the variables.
	cout<<"Enter number = ";  // Prompting the user a number, of which we want to count the number of digits. 
	cin>>i;  // Inputing the number from the user into the variable 'i'.
	do  // Executing the do - while loop, for the logic.
	{
		i/=10;  // Logic to count the number of digits, from the number input by the user.
		count++;  // Increment of count variable, for counting the number of digits, in the number.
	}while(i!=0);  // Condition for the do - while loop.
	
	cout<<count;  // Printing the total number of digits, in the number, which is input by the user, in the program.
	return 0;  // Returning the integer value 0, to the system, after the execution of the Main function.
}
