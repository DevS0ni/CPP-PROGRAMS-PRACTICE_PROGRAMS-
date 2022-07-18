// [1.] C++ program to print all natural numbers from 1 to n.

#include<iostream> // Declaration of the standard input output stream header file for the C++ program.
using namespace std;  // Declaration of the standard namespace for the C++ program.
int main()  // Main or start-up function for the program.
{
	int i,num;  // Declaration of the variables.
	cout<<"Enter any number = ";  // Prompting the user to mention the number, upto which the iteration of the loop should be implemented.
	cin>>num;  // Taking a number as an input from the user, upto which the iteration of the loop should be implemented (the range upto which we want the printing of natural numbers.
	
	for(i=1;i<=num;i++)  // Implementation of the for loop.
	{
		cout<<i<<"\t";  // Outputing the desired range of natural numbers.
	}
	return 0;  // Returning an integer value 0, after the end of the main function.
}
