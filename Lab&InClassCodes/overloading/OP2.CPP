#include<iostream.h>
#include<conio.h>
// Assigment opt
class Ope
{
	private:
	int no;
	public:
	Ope()
	{
		no=0;
	}
	void disp()
	{
		cout<<"\n The No is="<<no;
	}
	//operator as class
	Ope operator++()
	{
		Ope temp;
		no++;
		temp.no=no;
		return temp;
	}
};
void main()
{
	clrscr();
	Ope e1,e2;
	e1.disp();
	e2.disp();
	e1++;
	e1.disp();
	e2=++e1;
	e1.disp();
	e2.disp();
	getch();
}
