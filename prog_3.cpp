// [3.] C program to print all even numbers from 1 to n.

#include<iostream>
using namespace std;
int main()
{
	int i,num,even_no;
	cout<<"Enter any number = ";
	cin>>num;
	
	for(i=0;i<num;i++)
	{
		even_no=(2*i);
		cout<<even_no<<"\t";
	}
	return 0;
}
