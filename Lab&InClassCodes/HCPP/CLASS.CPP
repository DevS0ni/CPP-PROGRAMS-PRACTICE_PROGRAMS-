#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class temp
{
	public:
	int no;
	void init()
	{
	no=4;
	cout<<"\n\n\t\tThe first number is  :"<<no;
	}
	void fun()
	{
	no=10;
	cout<<"\n\n\t\tThe second number is :"<<no;
	}
};

void main()
{
	clrscr();
	temp t;
	temp t1;
	t.init();
	t1.init();
	t.fun();
	t1.fun();
	getch();
}