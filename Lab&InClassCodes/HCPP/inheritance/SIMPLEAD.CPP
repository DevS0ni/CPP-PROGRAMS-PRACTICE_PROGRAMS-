#include<iostream.h>
#include<conio.h>
class simple
{
		//int a,b,ans;
		public:
			int a,b,ans;
			void getdata();
			void display();
	  };
 class simple :: void getdata()
	{
			cout<<"enter a value A:";
			cin>>a;
			cout<<"enter a value B:";
			cin>>b;
			ans=a+b;
		}
 class simple :: void display()
 {
		cout<<"\n"<<"A:"<<a;
		cout<<"\n"<<"B:"<<b;
		cout<<"\n"<<"Ans:"<<ans;
	 }

 void main()
 {
		simple s;
		clrscr();
		s.getdata();
		s.display();

		getch();
	}