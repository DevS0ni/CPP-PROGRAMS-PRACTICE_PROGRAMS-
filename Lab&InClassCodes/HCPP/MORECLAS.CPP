#include<iostream.h>
#include<conio.h>
class student
{
	int rollno;
	char name[20];

	public:
	void getdata()
	{
		cout<<"\nenter the Rollno:";
		cin>>rollno;
		cout<<"\n enter the Name:";
		cin>>name;
	 }
	 void display()
	 {
		cout<<"\n"<<rollno<<"\t"<<name;
	 }
};

class marks

{
			public:
			int c,cpp;
			void getdata()
			{
			  cout<<"\nenter the marks of  c  :";
			cin>>c;
			cout<<"\n enter the marks of cpp  :";
			cin>>cpp;
			}
			void display()
			{
				cout<<"\n"<<c<<"\t"<<cpp;
			}
};

class result
{
			   int sum[10];

			   public:
			   void total(marks t[10]);
};

void result :: total(marks t[10])
{

	int i;
      for(i=0;i<3;i++)
	{
	 sum[i]=t[i].c+t[i].cpp;
	 }
      for(i=0;i<3;i++)
	{
		cout<<"\nTotal="<<sum[i];
	}
  }



void main()
{
	  student s[10];
		int i;
	  clrscr();
	   for(i=0;i<3;i++)
	   {
			s[i].getdata();
	   }
	   for(i=0;i<3;i++)
	   {

			s[i].display();
	  }

	marks m[10];

		for(i=0;i<3;i++)
	   {
			m[i].getdata();
		}
	   for(i=0;i<3;i++)
	   {

		   m[i].display();
	  }

	  result r;
	  r.total(m);
	  getch();
 }