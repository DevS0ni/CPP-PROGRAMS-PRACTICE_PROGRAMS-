#include<iostream.h>
#include<conio.h>
class code
{
	int id;
	public:
	code(){}//default constructor
	code(int a)
	{
		id=a;
	}
	code(code &x)//copy constructor
	{
		id=x.id;
	}
	void display()
	{
		cout<<id;
	}
};
int main()
{
	clrscr();
	code A(100);
	code B(A);
	code C(B);
	code D(C);
	D=A;
	cout<<"\n id of A:";A.display();
	cout<<"\n id of B:";B.display();
	cout<<"\n id of C:";C.display();
	cout<<"\n id of D:";D.display();
	getch();
	return 0;
}
