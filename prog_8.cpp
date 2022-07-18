// [8.] PROGRAM FOR ARITHMETIC OPERATION. (+,-,/,*,%)

#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	
	cout<<"Enter number 1 : ";
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
