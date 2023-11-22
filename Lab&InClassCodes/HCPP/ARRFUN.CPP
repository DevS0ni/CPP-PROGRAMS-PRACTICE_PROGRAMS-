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

void main()
{
		student s[20];
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
  getch();
}



