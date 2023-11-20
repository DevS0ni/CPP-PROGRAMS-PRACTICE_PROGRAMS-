// [4.] TO CONCATENATE ONE STRING TO ANOTHER.

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s1[100],s2[100];
	
	cout<<"Enter String1 : ";
	gets(s1);
	
	cout<<"Enter String2 : ";
	gets(s2);
	
	cout<<"\n\nString1 : "<<s1;
	cout<<"\nString2 : "<<s2;

	cout<<"\n\nCONCATENATE TWO STRINGS : "<<strcat(s1,s2);
	
	return 0;
}
