// program to print number of days in a month using switch case
#include<iostream>
using namespace std;
int main()
{
	char m;
	cout<<"enter month:- ";
	cin>>m;
	
	switch(m)
	{
		case 'j' :
		case 'm' :
		case 'M' :
		case 'J':
		case 'a':
		case 'o':
		case 'd':
			cout<<"This month have 31 days";
			break;
		case 'A':
		case 'u':
		case 's':
		case 'n':
			cout<<"This month have 30 days";
			break;
		case 'f':
			cout<<"This month have 28 or 29 days";
			break;
		default:
			cout<<"Invalid Choice!...";
			break;
	}
	return 0;
}
