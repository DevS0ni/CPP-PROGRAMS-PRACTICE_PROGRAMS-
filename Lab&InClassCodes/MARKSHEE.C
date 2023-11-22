#include<stdio.h>
#include<conio.h>
void main()
{
	 int Roll_no;
	 char name;
	 float sub1,sub2,sub3,sub4,sub5,sub6,sub7,total,par;
		clrscr();
		printf("Enter a roll_no:");
		scanf("%d",&Roll_no);
		printf("\nEnter a student Name:");
		scanf("%c",&name);


		printf("\nsub1=");
		scanf("%f",&sub1);
		printf("\nsub2=");
		scanf("%f",&sub2);
		printf("\nsub3=");
		scanf("%f",&sub3);
		printf("\nsub4=");
		scanf("%f",&sub4);
		printf("\nsub5=");
		scanf("%f",&sub5);
		printf("\nsub6=");
		scanf("%f",&sub6);
		printf("\nsub7=");
		scanf("%f",&sub7);

		total= sub1+sub2+sub3+sub4+sub5+sub6+sub7;
		par=(total*100)/700;

		printf("\nTotal=%f",total);
		printf("\nParsantag=%f",par);


		if(par>=70 && par<=80)
		{
		 printf("distiction");
		 }
		 else if(par>=60 && par<=70)
		 {
		 printf("\nA grade");
		 }
		 else if(par>=50 && par<=60)
		 {
		 printf("\nB grade");
		 }
		 else if(par>=36 && par<=50)
		 {
		 printf("\nC grade");
		 }
		 else
		 {
		 printf("\nFail");
		 }



		getch();
}