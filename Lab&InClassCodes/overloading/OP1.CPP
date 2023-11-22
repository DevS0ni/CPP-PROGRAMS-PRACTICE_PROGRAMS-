//Overloading Operator
#include<iostream.h>
#include<conio.h>
class Inc
{
	int no;
	public:
	Inc()
	{
		no=0;
	}
	void disp()
	{
		cout<<"\n No="<<no;
	}
	void operator++()
	{
		no++;
	}
};

void main()
{
	clrscr();
	Inc i1,i2;
	i1.disp();
	i2.disp();
	i1++;
	i1.disp();
	++i1;
	i2++;
	++i2;
	i1.disp();
	i2.disp();
	getch();
}
