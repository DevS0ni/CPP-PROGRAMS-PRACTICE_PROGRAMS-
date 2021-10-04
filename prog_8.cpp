// [8.] C program to count number of digits in an integer.

#include<iostream>
using namespace std;
int main()
{
	int i,count=0;
	cout<<"Enter number = ";
	cin>>i;
	do
	{
		i/=10;
		count++;
	}while(i!=0);
	
	cout<<count;
	return 0;
}
