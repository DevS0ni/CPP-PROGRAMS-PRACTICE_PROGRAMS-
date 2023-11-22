/*
	- Hierarchical inheritance
	
	class A
	{
	};
	class B : public A
	{
	};
	class C : public A
	{
	};
	class D : public A
	{
	};
	
	- only one base class and multipal derived class
*/
#include<iostream>
using namespace std;
class A
{	
	public:
		
			int a;
	
	void put_data()
	{
		cout<<"Enetr A Value: ";
		cin>>a;
	}
};
class B : public A
{
	public:
		
		void power()
		{
			cout<<"Power "<<a<<": "<<a*a<<endl;
		}
};
class C : public A
{
	public:
		
		void square()
		{
			cout<<"Square: "<<a*a;
		}
};
int main()
{
	B b1;
	b1.put_data();
	b1.power();
	
	C c1;
	c1.put_data();
	c1.square();
	
	return 0;
}
