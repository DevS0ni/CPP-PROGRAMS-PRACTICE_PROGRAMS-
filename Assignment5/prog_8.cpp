// [8.] REVERSING A STRING.

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[100];
	
	cout<<"Enter a string : ";
	gets(s);
	
	cout<<"\n\nString : "<<s;
	cout<<"\n\nReverse Order String : "<<strrev(s);
	
	return 0;
}
