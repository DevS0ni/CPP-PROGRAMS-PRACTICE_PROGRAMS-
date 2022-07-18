// [10.] TO CHECK WHETHER THE ENTERED NUMBER IS EVEN OR ODD. [USING TERNARY OPERATOR ' ()?: ']..

#include<iostream>
// #include<stdio.h> (for C Programming.....)
using namespace std;
int main()
{
	int num;
	
	cout<<"Enter any number = ";
	cin>>num;
	
	(num%2)==0? cout<<"The entered number is even.." : cout<<"The entered number is odd..";
 // (num%2)==0? printf("The entered number is positive..") : printf("The entered number is negative.."); (for C Programming....)
	return 0;
}
