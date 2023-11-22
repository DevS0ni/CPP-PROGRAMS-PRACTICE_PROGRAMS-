#include<conio.h>
#include<iostream.h>
void adnum(int no1, int no2)
{
	int ans;
	ans = no1+no2;
	cout <<"\n\n\t\tThe addition is :"<<ans;
}
void adnum(int no1, int no2, int no3)
{
	int ans;
	ans = no1+no2+no3;
	cout <<"\n\n\t\tThe addition is :"<<ans;
}
void adnum()
{
	int no1,no2;
	cout <<"\n\n\t\tThe addition is :"<<no1+no2;
}
void main()
{
	clrscr();
	adnum(16,26);
	adnum(2,3,4);
	adnum(23,45);

   //	adnum();

	getch();
}