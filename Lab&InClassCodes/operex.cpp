//operator
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,ans;
	cout<<"enter two numbers:- ";
	cin>>n1>>n2;
	/*Arithmetic
	ans=n1+n2;
	cout<<"Add :- "<<n1+n2<<endl;
	cout<<"sub :- "<<n1-n2<<endl;
	cout<<"mul :- "<<n1*n2<<endl;
	cout<<"div :- "<<n1/n2<<endl;
	cout<<"mod :- "<<n1%n2<<endl; */
	
	/*Assignment
	n1+=n2;
	cout<<" n1  += "<<n1<<endl;
	n1-=n2;
	cout<<" n1  -= "<<n1<<endl;
	n1*=n2;
	cout<<" n1  *= "<<n1<<endl;
	n1/=n2;
	cout<<" n1  /= "<<n1<<endl;
	n1%=n2;
	cout<<" n1  %= "<<n1<<endl;*/
	
	// unary
	
	++n1;
	cout<<"N1 ++ "<<n1<<endl;
	--n2;
	cout<<"N2 -- "<<n2;
	return 0;	
}
