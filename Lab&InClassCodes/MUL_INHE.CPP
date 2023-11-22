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

class base1:public base
{
	private :
	int b1no;
	public :
	base1()
	{
	cout<<"\n\n\t\tBase 1 class constructor : ";
	}
	void base1fun()
	{
	cout <<"\n\n\t\tBase class function :";
	}
};

class derive : public base//, public base1
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
	base1 b1;
	b1.basefub();
   //	base1 b1;
	 b1.base1fun();
	derive d1;
	   d1.derfun();
	   d1.basefub();
	   getch();
}