/*
	- Multiple inheritances:
		
		class A
		{
		};
		class B
		{
		};
		class C:public A,public B
		{
		};
		
		- one and more base class
		 	and only one derived class 
*/
// array - even add and odd addd
#include<iostream>
using namespace std;
class A
{
	public:
		
		int no1[10],i;
		
		void put_even()
		{
			for(i=0;i<5;i++)
			{
				cout<<"No:["<<i<<"]: ";
				cin>>no1[i];
			}
		}
};
class B
{
	public:
		
		int no2[10],i;
		
		void put_odd()
		{
			for(i=0;i<5;i++)
			{
				cout<<"No["<<i<<"]: ";
				cin>>no2[i];
			}
		}
};
class C : public A,public B
{
	public:
		
		int i,even,odd;
		
		void get_even()
		{
			even=0;
			cout<<"Even No "<<endl;
			for(i=0;i<5;i++)
			{
				if(no1[i]%2==0)
				{
					cout<<no1[i]<<" + ";
					even=even+no1[i];
				}
			}
			cout<<" = "<<even<<endl<<endl;
		}
		
		void get_odd()
		{
			odd=0;
			cout<<"Even No "<<endl;
			for(i=0;i<5;i++)
			{
				if(no2[i]%2!=0)
				{
					cout<<no2[i]<<" + ";
					odd=odd+no2[i];
				}
			}
			cout<<" = "<<odd<<endl;
		}
};
int main()
{
	C c1;
	cout<<"Enetr No1 Value: "<<endl;
	c1.put_even();
	c1.get_even();
	
	cout<<"Enetr No2 Value: "<<endl;
	c1.put_odd();
	c1.get_odd();
	
	return 0;
}
