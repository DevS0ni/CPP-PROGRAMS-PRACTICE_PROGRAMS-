// [2.] TO DISPLAY STRING FROM BACKWARD.

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[100];
	
	cout<<"Enter String : ";
	gets(s);
	
	cout<<"\n\nString : "<<s;
	
	cout<<"\n\nReverse Order of String : "<<strrev(s);
	
	return 0;
}
