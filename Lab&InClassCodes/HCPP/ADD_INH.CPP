#include<stdio.h>
#include<conio.h>
#include<iostream.h>

class tmp
{
	public:
	int x,y,ans;
	tmp()
	{
	x=10;
	y=12;
	}
	void add();
};
void tmp::add()
{
	ans=x+y;
	cout<<"\n\n\t\tThe addition is : "<<ans;
}

void main()
{
	clrscr();
	tmp t;
	t.add();
	getch();
}
