//Hierarchical inheritance
#include <iostream.h>
#include <conio.h>

class student
{	public:
	int sno;
	int age;
	student(int no,int a)
	{
	 sno=no;
	 age=a;
	}
	void display()
	{
		cout<<"Studene Information"<<endl;
		cout<<"\t Number   = ";
		cout<<sno<<endl;
		cout<<"\t Age      = ";
		cout<<age<<endl;
	}
};

class Exam : public student
{
	public:
	int m1,m2;

	Exam(int n1,int n2,int no,int age) : student(no,age)

	{
		m1=n1;
		m2=n2;
	}
	void display()
	{
		cout<<"Marks"<<endl;
		cout<<"\n\t Subject1 = ";
		cout<<m1<<endl;
		cout<<"\n\t Subject2 = ";
		cout<<m2<<endl;
	}
};

class sports
{
	public:
	char name[15];

	sports(char snm[15])
	{
		for(int i=0;i<15;i++)
		name[i]=snm[i];
	}
		void display(void)
	{
		 cout<<"Playing"<<name<<endl;
	}
};
class result : public Exam,public sports
{
	public :
	int total;
	int score;

	result(int no,int age,int m1,int m2,char name[15]) : Exam(m1,m2,no,age),sports(name)
	{
	 }

	void display()
	{

	student::display();
	Exam::display();

	total=m1+m2;

	cout <<"\t total = "<<total<<endl;

	sports::display();

	score=100;
	cout <<"Score = "<<score;
	}
};

int main()
{
clrscr();

	result r1(1,22,45,54,"Cricket");
	r1.display();
	getch();

return 0;
}