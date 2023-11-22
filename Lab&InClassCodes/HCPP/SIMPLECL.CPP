#include<iostream.h>
#include<conio.h>

class person
{		char name[20];
		   int age;

		public:
		void getdata();
		void display();
	 };

	void person::getdata()
	{
		cout<<"enter a your name:";
		cin>>name;
		cout<<"enter your age:";
		cin>>age;
		}

	 void person::display()
	 {
	cout<<"\nName:"<<name;
	cout<<"\nAge:"<<age;
	 }

	void  main()
	{
	person p;
	clrscr();
	p.getdata();
	p.display();
   getch();
}