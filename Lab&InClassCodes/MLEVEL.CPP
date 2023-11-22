// multilevel inheritance

#include <iostream.h>
#include <conio.h>

class student
{
	protected:
		 int sno;

	public:
	void set_sno(int n)
	{
		sno=n;
	}
	int get_sno(void)
	{
		return sno;
	}
};

class test : public student
{
	protected:
	 int m1,m2;

	 public:
	void set_marks(int n1,int n2)
	{
		m1=n1;
		m2=n2;
	}
	int get_m1(void)
	{
		return m1;
	}
	int get_m2(void)
	{
		return m2;
	}

};

class result : public test
{
	public:
	int total(void)
	{
		return (m1+m2)/2;
	}

	void getResult(void)
	{
		if (total() < 35)
			cout << "Fail";
		else if (total() >=35 && total() <= 50)
			cout<<"Pass class";
		else if (total() >=51 && total() <= 60)
			cout<<"Second class";
		else if (total() >=61 && total() <= 69)
			cout<<"First class";
		else
			cout<<"First class Distinction";

	}
};

int main()
{
clrscr();

   result r1,r2,r3;
   r1.set_sno(1);
   r1.set_marks(30,20);

   r2.set_sno(2);
   r2.set_marks(45,50);

   r3.set_sno(3);
   r3.set_marks(90,99);

   cout<< "Marks fo the students : :"<<endl;
   cout<<endl;
   cout<<endl;
   cout<< "Number  M1     M2    Total    Result : :"<<endl;
   cout<<r1.get_sno()<<"  "<<r1.get_m1()<<"   "<<r1.get_m2()<<"  "<<r1.total()*2<<"      ";
   r1.getResult();
   cout<<endl;
   cout<<r2.get_sno()<<"  "<<r2.get_m1()<<"   "<<r2.get_m2()<<"  "<<r2.total()*2<<"      ";
   r2.getResult();
   cout<<endl;
   cout<<r3.get_sno()<<"  "<<r3.get_m1()<<"   "<<r3.get_m2()<<"  "<<r3.total()*2<<"      ";
   r3.getResult();



getch();
return 0;
}