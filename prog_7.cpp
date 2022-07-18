// [7.] Program to check that entered year is leap year or not.

#include<iostream>
using namespace std;
int main()
{
	int year;
	
	cout<<"Enter any year = ";
	cin>>year;
	
	if((year%4)==0)
	{
		cout<<"The entered year is a leap year !!";
	}
	else 
	{
		cout<<"The entered year is not a leap year !!";
	}
	
	return 0;
}
