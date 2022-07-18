// [7.] C program to calculate factorial of a number.

#include<iostream>  // Declaration of the standard input output stream header file.
using namespace std;  // Declaration of the standard namespace.
int main()  // Main or startup function.
{
	int i,n,fact=1;  // Declaration of the variables.
	cout<<"Enter any number = ";  // Prompting the user to enter a number of which we want to find the factorial.
	cin>>n;  // Inputing the value of the number to the variable.
	
	cout<<n<<" !"<<" = "; 
	for(i=n;i>=1;i--)  // Initializing the for loop in the program.
	{
		cout<<i;  // Printing numbers which undergoes factorial multiplication.
		if(i!=1)
		{
			cout<<" * ";	// Logic to print '*' upto 1, while factorising. For example, n! = n * (n - 1) * (n - 2) * .... * 3 * 2 * 1. 
  		}	
  		fact*=i;  // Logic for factorisation
	}
	cout<<" = "<<fact;  // Printing the final answer, after the calculation of the factorisation.
	return 0;  // Returning the value of 0, after the execution of the main function.
}
