/*
	NAME OF PROGAM : FIL_HAND
	DESCRIPTION    : TO HANDLE A TEXT FILE
	DATE	       : 28-11'-2003
*/

#include<stdio.h>
#include<fstream.h>
#include<conio.h>

void main()
{
	ofstream outfile;
	outfile.open ("tmp.txt",ios::app);
	char ch;
	int num,i;
	clrscr();
	while(1)
		{
			cin>>ch;
			if(ch=='0')
			   break;
			outfile.put(ch);
		}
       outfile.close();
       ifstream infile;
       infile.open("tmp.txt",ios::in);
       while(infile)
	{
		infile.get(ch);
		cout<<ch;
	}
       outfile.close();
       getch();
}