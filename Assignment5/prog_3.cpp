// [3.] TO COUNT NUMBER OF WORDS IN STRING.

#include<iostream>
#include<string.h>

using namespace std;
int main()
{
	char s[1000];
	int ind,count=0;
	
	cout<<"Enter String : ";
	gets(s);
	
	for(ind=0;s[ind]!='\0';ind++)
	{
		if(s[ind]==' ')
		{
			count++;
		}
		
		else
		{
			
		}
		
	}
	
	cout<<"Number Of Words = "<<count+1;
		
	return 0;
}
