// [10.] TO CHECK WHETHER THE ENTERED NUMBER IS POSITIVE OR NEGATIVE. [USING TERNARY OPERATOR '()?:']..

#include<iostream>
//#include<stdio.h> (for C Programming.....)
using namespace std;
int main()
{
	int num;
	
	cout<<"Enter any integer = ";
	cin>>num;
	
	num>0? cout<<"The entered number is positive.." : cout<<"The entered number is negative..";
 // num>0? printf("The entered number is positive..") : printf("The entered number is negative.."); (for C Programming....)
	return 0;
}
