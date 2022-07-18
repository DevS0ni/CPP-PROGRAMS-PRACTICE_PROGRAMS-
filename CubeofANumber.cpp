// [7.] TO PRINT CUBE OF A GIVEN NUMBER. [i.e INPUT=2, OUTPUT=8 (2*2*2)].

#include<iostream>  // Declaration of the standard input output stream header file.
using namespace std;  // Declaration of the standard namespace for the program.
int main(). // Main or Start - Up function for the program.
{
	float num,cube;  // Declaration of the variables.
	
	cout<<"Enter a number : ";  // Inputing the user to enter a number, of which we need to find the cube.
	cin>>num;  // Taking as an input, that number entered by the user.
	
	cube=num*num*num;  // Logic - to find the cube of the given OR assigned number.
	
	cout<<"The cube of entered number = "<<cube;  // Displaying the final answer of the cube.
	
	return 0;  // Returning the integer value 0, after the end of the Main function execution.
}
