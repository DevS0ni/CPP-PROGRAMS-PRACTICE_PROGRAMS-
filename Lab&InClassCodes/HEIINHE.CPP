//Multiple Inhe
#include<iostream.h>
#include<conio.h>
class Exa
{
		public:
			Exa()
			{
				int a=10,b=20,ans;
				cout<<"\n\t The first value is="<<a;
				cout<<"\n\t The second value is="<<b;
				ans=a+b;
				cout<<"\n\t The Ans is="<<ans;
			}
			void show()
			{
				 cout<<"\n\t The super class:";
			}
};
class Exa1
{
	   public :
	   Exa1()
	   {
				int a1=10,b1=20,ans1;
				cout<<"\n\t The first1 value is="<<a1;
				cout<<"\n\t The second1 value is="<<b1;
				ans1=a1*b1;
				cout<<"\n\t The Ans1 is="<<ans1;

	  }
	  void show1()
	  {
				 cout<<"\n\t The child class:";
	  }

};
class Exa2:public Exa,public Exa1
{
		  public :
		Exa2()
		{
				int a2=100,b2=20,ans2;
				cout<<"\n\t The first2 value is="<<a2;
				cout<<"\n\t The second2 value is="<<b2;
				ans2=a2-b2;
				cout<<"\n\t The Ans2 is="<<ans2;
		}
		void show2()
		{
				 cout<<"\n\t The child1 class:";
		}

};
void main()
{

	  clrscr();
	 /* Exa1 e;
	  e.show();
	  e.show1();*/
	  cout<<"\n\n\t The Second class:";
	  Exa2 e1;
	  cout<<"\n\n\n\t The Firest Class:";
	  e1.show();
	  cout<<"\n\n\n\t The Second Class:";
	  e1.show1();
	  cout<<"\n\n\n\t The Third class:";
	  e1.show2();
	  getch();
}