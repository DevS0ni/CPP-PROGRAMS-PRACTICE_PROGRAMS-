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
			int c,cpp;
			public:
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
			   void total();

};

void result :: total()
{

	int i;
	int c,cpp,sum=0;
	for(i=0;i<3;i++)
	{
   sum=c+cpp;
   }
   for(i=0;i<3;i++)
	{
 cout<<"\nTotal="<<sum;
	}
  };



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

	  for(i=0;i<3;i++)
	  {
	  r[i].total(m);
	  }
	  getch();
 }