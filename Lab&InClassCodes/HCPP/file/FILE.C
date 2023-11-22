#include<stdio.h>
#include<string.h>
void main()
{
	FILE *fp;//decl. with poiter
	int i;
	char str[80];
	clrscr();
	printf("enter a string:");
	scanf("%[^\n]",str);

	fp=fopen("f:\\CHAR.TXT","w");//w wirte mode //fopen open file

	for(i=0;i<strlen(str);++i)
	{
		putc(str[i],fp);   //puts the char on to the file
		}
		fclose(fp);

	  getch();
		  }