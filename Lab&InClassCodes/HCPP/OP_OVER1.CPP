//	Description	: Operator Overloading

#include<iostream.h>
#include<stdio.h>
#include<conio.h>

enum boolean {true,false};

class oper
{
	private :
			int num;
	public  :
			oper()
			{
				num=0;
			}
			~oper()
			{
				num=0;
			}
			void input()
			{
				cout<<"\t\tEnter the data:";
				cin>>num;
				flushall();
			}
			void show()
			{
				cout<<"\t\tAnswer:"<<num<<endl;
			}
			oper operator+(oper);
			oper operator-(oper);
			oper operator/(oper);
			oper operator*(oper);
			boolean operator==(oper);
			void operator--(void);
			oper operator+=(oper);
};

oper oper ::operator+(oper t2)
{
	   oper tem;
	   tem.num=num+t2.num;
	   return(tem);
}

boolean oper ::operator==(oper t2)
{
	   return((num==t2.num)?1:0);
}

oper oper ::operator-(oper t2)
{
	   oper tem;
	   tem.num=num-t2.num;
	   return(tem);
}

oper oper ::operator+=(oper t1)
{
   oper tmp;
   tmp.num= num+=t1.num;
   return(tmp);
}

oper oper ::operator/(oper t2)
{
	   oper tem;
	   tem.num=num/t2.num;
	   return(tem);
}

oper oper ::operator*(oper t2)
{
	   oper tem;
	   tem.num=num*t2.num;
	   return(tem);
}

void oper ::operator--(void)
{
	num--;
};

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
		cout<<"\t\t2. Substraction"<<endl;
		cout<<"\t\t3. Division"<<endl;
		cout<<"\t\t4. Multiplication"<<endl;
		cout<<"\t\t5. Equality(==)"<<endl;
		cout<<"\t\t6. Decrement(--)"<<endl;
		cout<<"\t\t7. Plus increment(+=)"<<endl;
		cout<<"\t\t8. Exit"<<endl;
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
			ans=obj1-obj2;
			ans.show();
		}
		else
		if(choice==3)
		{
			obj1.input();
			obj2.input();
			ans=obj1/obj2;
			ans.show();
		}
		else
		if(choice==4)
		{
			obj1.input();
			obj2.input();
			ans=obj1*obj2;
			ans.show();
		}
		else
		if(choice==5)
		{
			  obj1.input();
			  obj2.input();
			  ans1=(obj1==obj2);

			  if(ans1==1)
				cout<<"BOTH THE DATA ARE EQUAL"<<endl;
			 else
				cout<<"BOTH THE DATA ARE NOT EQUAL"<<endl;
		}
		else
		if(choice==6)
		{
			  obj1.input();
			 --obj1;
			  obj1.show();
		}
		else
		if(choice==7)
		{
			ans.input();
			ans=ans+=ans;
			ans.show();
		}
		getch();
	}while(choice!=8);
}