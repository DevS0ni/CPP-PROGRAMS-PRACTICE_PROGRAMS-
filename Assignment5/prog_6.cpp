// [6.] TO CHECK IF A STRING IS PALINDROME OR NOT.

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s1[100],s2[100];

    printf("Enter a string to check if it's a palindrome : ");
    gets(s1);

    strcpy(s2,s1);  
    strrev(s2);  

    if(strcmp(s1,s2)==0)  
    {
    	cout<<"\n\nThe string is a palindrome.\n";
	}
    
    else
    {
    	cout<<"\n\nThe string isn't a palindrome.\n";
	}
	
    return 0;
}
