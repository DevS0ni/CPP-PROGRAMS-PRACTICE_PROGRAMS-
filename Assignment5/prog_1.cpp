// [1.] TO CALCULATE THE LENGTH OF STRING. (WITH SPACE AND WITHOUT SPACE)

#include<iostream>
#include<string.h>

using namespace std;
int main()
{
	char s[10];
	int ind,count=0;
	
	cout<<"Enter String : ";
	gets(s);
	
	for(ind=0;s[ind]!='\0';ind++)
	{
		if(s[ind]!=' ')
		{
			count++;
		}
	}
	
	cout<<"The Length Of String (without space) = "<<count<<endl;
	cout<<"The Length Of String (with space) = "<<strlen(s)<<endl;
	
	return 0;
}
