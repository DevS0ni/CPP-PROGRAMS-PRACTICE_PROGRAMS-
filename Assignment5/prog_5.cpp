// [5.] TO COMPARE TWO STRINGS IF THEY ARE SAME OR NOT.

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s1[100],s2[100];
	
	cout<<"Enter String 1 : ";
	gets(s1);
	
	cout<<"Enter String 2 : ";
	gets(s2);
	
	if(strcmp(s1,s2)==0)
	{
		cout<<"Two strings are same......";
	}
	
	else
	{
		cout<<"Two strings are not same......";
	}
	
	return 0;
}
