// [7.] C program to calculate factorial of a number.

#include<iostream>
using namespace std;
int main()
{
	int i,n,fact=1;
	cout<<"Enter any number = ";
	cin>>n;
	
	cout<<n<<" !"<<" = ";
	for(i=n;i>=1;i--)
	{
		cout<<i;
		if(i!=1)
		{
			cout<<" * ";	
  		}	
  		fact*=i;
	}
	cout<<" = "<<fact;
	return 0;
}
