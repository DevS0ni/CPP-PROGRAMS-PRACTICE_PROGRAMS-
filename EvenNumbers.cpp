// [3.] C program to print all even numbers from 1 to n.

#include<iostream>  // Declaration of the standard input output stream header file, for the C++ program.
using namespace std;  // Declaration of the standard namespace, for the C++ program.
int main()  // Main or start-up program for the program.
{
	int i,num,even_no;  // Declaration of the variables.
	cout<<"Enter any number = ";  // Prompting the user to input any number, to allocate the range upto which the system should output the even numbers.
	cin>>num;  // Inputing the value of the number, from the user.
	
	for(i=0;i<num;i++)  // Declaration of the loop.
	{
		even_no=(2*i);  // Logic to find the even number from the natural numbers.
		cout<<even_no<<"\t";  // Printing the desired even numbers.
	}
	return 0;  // Returning the integer value 0, after the execution of the main function.
}
