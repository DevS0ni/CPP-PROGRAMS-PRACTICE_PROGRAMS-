// [1.] C program to print all natural numbers from 1 to n.

#include<iostream>
using namespace std;
int main()
{
	int i,num;
	cout<<"Enter any number = ";
	cin>>num;
	
	for(i=1;i<=num;i++)
	{
		cout<<i<<"\t";
	}
	return 0;
}
