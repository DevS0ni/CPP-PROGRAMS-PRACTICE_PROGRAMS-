#include<iostream.h>
#include<conio.h>
class simple
{
	int a;
	public:
	  void getdata()
	  {
		cout<<"\nenter a value of a:";
		cin>>a;
		}
		void display()
		{
		cout<<"\n"<<"a="<<a;
		}
	   friend void max(simple,simple);
	   };
void max(simple t1,simple t2)
{
		if(t1.a>t2.a)
		cout<<"\na s is largest";
		else
		cout<<"\na s1 is largest";
	}
void main()
{
 simple s,s1;
 clrscr();
 s.getdata();
 s.display();

 s1.getdata();
 s1.display();
 max(s,s1);
 getch();
 }