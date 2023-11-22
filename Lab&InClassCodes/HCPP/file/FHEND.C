/*
	Name of program	:	fhend.c
	Description		:	To use file hendling
	Author			:	Hiten Kachhia
	Date			:	22th nov 2008
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0;
	char ch[50],str;
	FILE *fp;
	clrscr();
	printf("\n\t\tEnter any string	:");
	gets(ch);
	flushall();
	fp=fopen("c:\\c\\cprg.txt","w+");
	while(ch[i])
	{
		putc(ch[i],fp);
		i++;
	}
       //	fclose(fp);
       //	fp=fopen("c:\\c\\cprg.txt","r");
       rewind(fp);
	while((str=getc(fp))!=EOF)
	{
		printf("%c",str);
	}
	fclose(fp);
	getch();
}