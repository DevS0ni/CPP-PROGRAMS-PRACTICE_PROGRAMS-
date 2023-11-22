// W A P to print given number is odd or even
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n:- ";
	cin>>n;
	
	if(n%2==0)
	{
		if(n==0)
		{
			cout<<n<<" is zero";
		}
		else
		{
			cout<<n<<" is even number";
		}
		
	}
	else
	{
		cout<<n<<" is odd number";
	}
	return 0;
	
}
/*
2,4,6,8,10.....

6%2=0
7%2=1

*/
