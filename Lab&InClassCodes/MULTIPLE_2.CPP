// multiple inheritance
//Hetal
//3-12-2004


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
	public:	void display(void)
	{
		A::set(5);
		B::set(15);
		 cout<<x << "+"<<y<<"="<<x+y;
	}

};

int main()
{
clrscr();

	C c1;
//	c1.A::set(5);
 //	c1.B::set(10);

	c1.display();

       //c1.A::display();
	//c1.B::display();


getch();
return 0;
}