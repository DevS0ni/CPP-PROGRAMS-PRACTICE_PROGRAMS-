#include<iostream.h>
#include<conio.h>
class Abc
{
	   public:
	   int a;
	    void data(int x)
	   {
		  a=x;
	   }
	   void show()
	   {
	      cout<<"\n\t The value is="<<a;
	   }
};
class Abc1:public Abc
{

	   public:
	   int b,sum;
	   void data1(int y,int x)
	   {
		  data(x);
		  b=y;
	   }
	   void show1()
	   {
			 sum=a+b;

			 show();
			 cout<<"\n\t The value1 is="<<b;
			 cout<<"\n\t The sum is="<<sum;
	   }
};
class Abc2
{
	   public:
	   int c;
	   void data2(int z)
	   {
		  c=z;
	   }
	   void show2()
	   {
			 cout<<"\n\t The value2 is="<<c;
	   }
};
class Exa:public Abc1,public Abc2
{
	   int r,sum1;
	   public:
	   void data3(int d,int a,int b,int c)
	   {
		  r=d;
		  data1(a,b);
		  data2(c);
	   }
	   void show3()
	   {
			 show1();
			 show2();
			 sum1=a*b*c*r;
			 cout<<"\n\t The Last value is="<<r;
			 cout<<"\n The sum1 is="<<sum1;
	   }
};

void main()
{
	 int a,b,c,r;

	 Exa e;
	 clrscr();
	 cout<<"\n\t Passing value:";
	 e.data3(10,10,10,10);
	 e.show3();
	 getch();
}