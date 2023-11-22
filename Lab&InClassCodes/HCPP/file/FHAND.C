/*
	Name of program	:	fhandwv.c
	Description		:	To find vowel into the string
	Author			:	HitenKachhia
	Date			:	22th nov 2008
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	int c;
	clrscr();
	fp=fopen("e:\\CHAR.txt","r");

	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
	getch();
}
