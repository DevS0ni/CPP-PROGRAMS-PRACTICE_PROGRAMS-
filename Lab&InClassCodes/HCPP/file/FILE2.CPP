/*
NAME OF PROGRAM : FILE2
DESCRIPTION     : TO READ AND WRITE A FILE USING CONSTRUCTOR
DATE		: 27-05-2003
*/

#include<stdio.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
void main ()
   {
     char ch;
     fstream infile;
     ofstream outfile;
     clrscr();
     outfile.open("e:\\text1.txt",ios::out);
     infile.open("e:\\text.txt",ios::in);
     while(infile)
	{
	  infile.get(ch);
	  outfile.put(ch);
	  cout<<ch;
	}
    infile.close();
    outfile.close();
    getch();
   }