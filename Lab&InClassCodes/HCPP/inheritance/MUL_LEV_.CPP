#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class base
{
	private :
			int bno;
	public :
	base()
	{
	cout <<"\n\n\t\tBase class constructor : ";
	}
	void basefub()
	{
	cout<<"\n\n\t\tBase class function :";
	}
};

class derive : public base
{
	private:
			int no;
	public :
	derive()
	{
	cout<<"\n\n\t\tderive class constructor : ";
	}
	void derfun()
	{
	cout<<"\n\n\t\tderive clas function : ";
	}
};

void main()
{
	clrscr();
	base b;
	b.basefub();

	derive d1;
	d1.derfun();
	   getch();
}