#include<iostream.h>
#include<conio.h>
class Abc
{
	  public :
	  Abc()
	  {
		   int a,b,ans;
		   cout<<"\n\t Enter the value of a:";
		   cin>>a;
		   cout<<"\n\t Enter the value of b:";
		   cin>>b;
		   ans=a+b;
		   cout<<"\n\t The ans is:"<<ans;
	  }
	  Abc(int a,int b)
	  {
		int ans1=a+b;
		cout<<"\n The ans is="<<ans1;
	  }
	  void show()
	  {
			cout<<"\n\t The First:";
	  }
	  void data(float x,float y)
	  {
		float ans2=x*y;
		cout<<"\n The ans2 is="<<ans2;
	  }
};
void main()
{
	  clrscr();
	  Abc a;
	  Abc a1(10,10);
	 // a1.show();
	  a1.data(50,50);
	  getch();
}