// [1.] Any integer is input by the user. Write a program to find out whether it is an odd number or even number. 
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter your desired number = ";
	cin>>num;
	
	if((n%2)==0)
	{
		if(n==0)
		{
			cout<<"The entered number is zero";
		}
		else
		{
			cout<<"The entered number is even";
		}
	}
	else 
	{
		cout<<"The entered number is odd";
	}
	return 0;
}
