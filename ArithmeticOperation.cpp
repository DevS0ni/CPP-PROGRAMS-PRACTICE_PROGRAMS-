// [8.] PROGRAM FOR ARITHMETIC OPERATION. (+,-,/,*,%)

#include<iostream>  // Declaration of the standard input output stream for the program.
using namespace std;  // Declaration of the standard namespace for the program.
int main()  // Main or startup function for the program.
{
	int num1,num2;  // Declaration of the variables.
	
	cout<<"Enter number 1 : ";  // Prompting the user to enter the first operand or number.
	cin>>num1;  // Taking the first operand as an input from the user.
	
	cout<<"Enter number 2 : ";  // Prompting the user to enter the second operand from the user, as a second operand.
	cin>>num2;  // Taking the second operand as an input from the user.
	
	cout<<"\n\nARITHMETIC-OPERATIONS :-\n";  // Displaying the Arithmetic Operation between the two operands entered before in the program.
	
	cout<<"ADDITION = "<<num1+num2<<endl;  // The addition of the two operands.
	cout<<"SUBTRACTION = "<<num1-num2<<endl;  // The substraction of the two operands.
	cout<<"DIVISION = "<<num1/num2<<endl;  // The division of the two operands.
	cout<<"MULTIPLICATION = "<<num1*num2<<endl;  // The multiplication of the two operands.
	cout<<"MODULUS = "<<num1%num2;  // The modulus of the two operands.
	
	return 0;  // Returning the integer value 0, after the execution of the Main function or the program.
} 
