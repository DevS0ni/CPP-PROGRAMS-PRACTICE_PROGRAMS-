#include<stdio.h>
#include<conio.h>
#include<iostream.h>

class date
{
   private:
	int dd,mm,yy;
   public:
	date()
	  {
	     cout<<"\n\n\t\tEnter the Date : ";
	     cin>>dd;
	     cout<<"\n\n\t\tEnter the Month: ";
	     cin>>mm;
	     cout<<"\n\n\t\tEnter the Year : ";
	     cin>>yy;

	  }

	date(int d, int m, int y)
	  {
	     dd=d;
	     mm=m;
	     yy=y;
	  }

	void show()
	{
	     cout<<"\n\n\t\tThe date is :";
	}

};

void main()
{
	clrscr();

	date d;
	d.show();
	date id(16,10,2008);
	id.show();
	getch();
}
