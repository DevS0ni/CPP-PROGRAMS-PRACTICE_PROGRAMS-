//4. Function with arguments and return value
#include<iostream>
using namespace std;
float swap(int,int);				  // function declaration
float swap(int n1,int n2)         // function defination
{
	int t;
	
	cout<<"\n Before Swapping \n"<<endl;
	cout<<"Value of n1:- "<<n1<<endl;
	cout<<"Value of n2 :- "<<n2<<endl;
	
	t=n1;
	n1=n2;
	n2=t;
	
	cout<<"\n After Swapping \n"<<endl;
	cout<<"Value of n1:- "<<n1<<endl;
	cout<<"Value of n2 :- "<<n2<<endl;
	
	return 1.2;
	
}
int main()
{
	int x,y;
	cout<<"Enter two numbers:- ";
	cin>>x>>y;
		
	swap(x,y);                                // function call
	return 0;
}

