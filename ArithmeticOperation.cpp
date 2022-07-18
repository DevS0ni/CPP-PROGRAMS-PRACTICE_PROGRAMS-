// [8.] PROGRAM FOR ARITHMETIC OPERATION. (+,-,/,*,%)

#include<iostream>  // Declaration of the standard input output stream for the program.
using namespace std;  // Declaration of the standard namespace for the program.
int main()  // Main or startup function for the program.
{
	int num1,num2;  // Declaration of the variables.
	
	cout<<"Enter number 1 : ";  // Prompting the user
	cin>>num1;
	
	cout<<"Enter number 2 : ";
	cin>>num2;
	
	cout<<"\n\nARITHMETIC-OPERATIONS :-\n";
	
	cout<<"ADDITION = "<<num1+num2<<endl;
	cout<<"SUBTRACTION = "<<num1-num2<<endl;
	cout<<"DIVISION = "<<num1/num2<<endl;
	cout<<"MULTIPLICATION = "<<num1*num2<<endl;
	cout<<"MODULUS = "<<num1%num2;
	
	return 0;
}
