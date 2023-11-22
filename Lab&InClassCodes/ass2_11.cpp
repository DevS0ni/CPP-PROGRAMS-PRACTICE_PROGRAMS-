#include<iostream>
using namespace std;
int main()
{
	char ch;
	
	cout<<"Enter Character:- ";
	cin>>ch;
	
	if(ch>=65 && ch<=90)   //ch>='A' && ch<='Z'
	{
		cout<<ch<<" is Capital letter";
	}
	else if(ch>=97 && ch<=122)  //ch>='a' && ch<='z'
	{
		cout<<ch<<" is small letter";
	}
	else if(ch>=48 && ch<=57)  // ch>='0' && ch<='9'
	{
		cout<<ch<<" is digit";
	}
	else
	{
		cout<<ch<<" is speical symbol";
	}
	return 0;
}
