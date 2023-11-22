//multiple inheritance
#include<iostream.h>
#include<conio.h>
class A
{
	public:
	int stu_no;
	char stu_name[20];
	float m1,m2,m3;

	void input()
	{
		cout<<"Enter Stdent id no=";
		cin>>stu_no;
		cout<<"Enter Student name=";
		cin>>stu_name;
		cout<<"Enter  3 subject marks=";
		cin>>m1>>m2>>m3;
	}
};
class B
{
	public:
	float  m4;

	void marks()
	{
		cout<<"Enter 4 th subject  marks=";
		cin>>m4;

	}
};

class C:public A,public B
{
	public:
	float total,avg;

	void cal()
	{
		total=m1+m2+m3+m4;
		avg=total/4;
	}

	void dis()
	{
		cout<<"Student no="<<stu_no<<endl;
		cout<<"Name="<<stu_name<<endl;
		cout<<"Marks="<<m1<<"  "<<m2<<"  "<<m3<<" "<<m4<<endl;
		cout<<"Total="<<total<<endl;
		cout<<"Per="<<avg;

	}
};
void main()
{
	C c;
	clrscr();
	c.input();
	c.marks();
	c.cal();
	c.dis();
	getch();
}