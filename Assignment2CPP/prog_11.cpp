/* [11.] ANY CHARACTER IS ENTERED BY THE USER;
		 WRITE A PROGRAM TO DETERMINE WHETHER THE CHARACTER IS :-
		 -CAPITAL LETTER.
		 -SMALL CASE LETTER.
		 -DIGIT.
		 -SPECIAL SYMBOL.
	     [WITH THE HELP OF ASCII VALUES ASSIGNED TO EACH CHARACTER.]      
		  CHARACTERS                   ASCII VALUES
		    A-Z                          65-90
			a-z                          97-122
			0-9                          48-57
		    special-symbols            0-47,58-64,91-96,123-127.     */
		    
#include<iostream>
using namespace std;
int main()
{
	int i;
	char ch;
	
	cout<<"Enter any character : ";
	cin>>ch;
	
	if(ch>=65 && ch<=90)
	{
		cout<<ch<<" is a capital letter";
	}
    
	else if(ch>=97 && ch<=122)
	{
		cout<<ch<<" is a small letter";
	}
	
	else if(ch>=48 && ch<=57)
	{
		cout<<ch<<" is a digit letter";
	}
	
	else
	{
		cout<<ch<<" is a special symbol";
	}
	
	return 0;
}
	     
	     

		 
