// multiple inheritance



#include <iostream.h>
#include <conio.h>

class A
{
	public: int x;

	void set(int n)
	{
		x=n;
	}

	void display()
	{
		cout<<"a";
	}

};

class B
{
	public:	int y;

	void display()
	{
		cout<<"b";
	}
	void set(int n)
	{
		y=n;
	}

};

class C : public A, public B
{
	public:
	void display(void)
	{
		A::set(15);
		B::set(15);
		 cout<<"\n\t\t"<<x <<"+"<<y<<"="<<x+y;
	}

};

int main()
{
clrscr();

	C c1;
	c1.display();
getch();
return 0;
}