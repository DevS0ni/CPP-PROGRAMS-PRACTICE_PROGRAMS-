//string
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s1[50],s2[50];

	cout<<"Enter 1st string:- ";
	gets(s1);
	cout<<"Enter 2nd string:- ";
	gets(s2);
	
	if(strcmp(s1,s2)==0)
	{
		cout<<"Both string have same value"<<endl;
	}
	else
	{
		cout<<"Both string have not same value"<<endl;
	}
	//strcat(s1,s2);
	//strcpy(s1,s2);
	
	/*cout<<"String1:- "<<s1<<endl;
	cout<<"String2 :- "<<s2<<endl;*/

	return 0;
}
