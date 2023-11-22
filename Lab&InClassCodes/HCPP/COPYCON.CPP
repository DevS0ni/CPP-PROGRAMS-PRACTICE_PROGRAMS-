// copy constructor

#include<iostream.h>
#include<conio.h>
class simple
{
	int a;
	public:
	simple(int x)
	{
		a=x;
	 }
	  simple(simple &s1)
	  {
		a=s1.a;
		}
	  void display()
	  {
		cout<<"\n a="<<a;
		}
};

void main()
{
	clrscr();
	simple s(20);
	simple s1(s);
	s.display();
	s1.display();
	getch();
}