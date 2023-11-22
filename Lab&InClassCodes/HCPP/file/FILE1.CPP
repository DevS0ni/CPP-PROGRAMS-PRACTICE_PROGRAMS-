/*
NAME OF PROGRAM : FILE1
DESCRIPTION     : TO READ AND WRITE A FILE USING CONSTRUCTOR
DATE			: 27-05-2003
*/

#include<stdio.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>

void main ()
   {
      int i;
      ofstream outfile("text.txt");
      char str[]="HELLO FRIEND \n HI",ch;
      clrscr();
      for(i=0;i<strlen(str);i++)
	  {
	   outfile.put(str[i]);
	  }
	  outfile.close();
      ifstream infile("text.txt");

      while(infile)
	  {
	  infile.get(ch);
	  cout<<ch;
	  }
	getch();
   }