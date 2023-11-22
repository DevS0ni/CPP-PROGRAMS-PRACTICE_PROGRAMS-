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

class derive1 : public derive
{
	private:
	int d1no;
	public :
	derive1()
	{
	cout<<"\n\n\t\tderive1 class constructor : ";
	}
	void der1fun()
	{
	cout<<"\n\n\t\tderive1 clas function : ";
	}
};

void main()
{
	clrscr();
	base b;
	//b.bfun();
       //d1.basefun();
	derive d;
	d.derfun();
	derive d1;
       d1.derfun();
       getch();
}