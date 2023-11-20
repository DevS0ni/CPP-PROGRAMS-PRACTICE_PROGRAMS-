// [9.] TO PRINT STRING IN UPPERCASE.

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[100];
	
	cout<<"Enter String : ";
	gets(s);
	
	cout<<"\nString : "<<s;
	cout<<"\nString in Uppercase : "<<strupr(s);
	
	return 0;
}
