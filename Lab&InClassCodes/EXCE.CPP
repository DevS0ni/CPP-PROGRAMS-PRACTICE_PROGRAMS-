#include<iostream.h>
#include<conio.h>

void main()
{
	int a,b;
	clrscr();
	cout<<"Enter a value of A & B:";
	cin>>a;
	cin>>b;
	int x;
	x=a-b;

	try
	{
	  if(x!=0)
		 {
		 cout<<"Result is:"<<x<<"\n";
		}
	  else//there is an exc...
	   {
		throw(x);//throw an object
	 }
	  }

	 catch(int x)
	 {
		 cout<<"Exception catch:x="<<x<<"\n";
	 }
	 cout<<"end";
	 getch();
       }



