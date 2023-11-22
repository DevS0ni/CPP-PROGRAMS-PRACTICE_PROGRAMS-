/*
		Operator Overload
*/

#include<iostream.h>
#include<stdio.h>
#include<conio.h>

enum boolean {true,false};

class oper
{
	private :
			int num1;
	public  :
			oper()
			{
				num1=0;
			}
			~oper()
			{
				num1=0;
			}
			void input()
			{
				cout<<"\t\tEnter first number:";
				cin>>num1;
				flushall();
			}
			void show()
			{
				cout<<"\t\tAnswer :"<<num1<<endl;
			}
		oper operator+(oper);
		boolean operator==(oper);
};

oper oper ::operator+(oper t2)
	 {
	   oper tem;
	   tem.num1=num1+t2.num1;
	   return(tem);
	 }

boolean oper::operator==(oper t2)
{
       return( (num1==t2.num1)?1:0);
}

void main()
{
	int choice;
	oper obj1,obj2,ans;
	boolean ans1;
	do
	{
		clrscr();
		cout<<"\t\tMENU"<<endl;
		cout<<"\t\t1. Addition"<<endl;
		cout<<"\t\t2. Equality(==)"<<endl;
	       //	cout<<"\t\t3. Multiplication"<<endl;
	       //	cout<<"\t\t4. Division"<<endl;
		cout<<"\t\t5. Exit"<<endl;
		cout<<"\t\tEnter your choice:";
		cin>>choice;
		flushall();
		if(choice==1)
		{
			obj1.input();
			obj2.input();
			ans=obj1+obj2;
			ans.show();
		}
		else
		if(choice==2)
		{
			 obj1.input();
			 obj2.input();
			 ans1=(obj1==obj2);
			 if(ans1==1)
				cout<<"\t\tBoth are equal"<<endl;
			 else
				cout<<"\t\tBoth are unequal"<<endl;
		}
		else
		if(choice==3)
		{
		}
		getch();
	}while(choice!=5);
}