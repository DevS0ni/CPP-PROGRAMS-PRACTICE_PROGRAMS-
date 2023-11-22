/*
	class derived-class: access-specifier base-class
	class 		B 		: public 			A
	
	- Single Inheritance
		class A
		{
			class A base class
		};
		class B : public A
		{
			class B derived class
		};
	
	- only one base class
		and only one derived class
	- always derived class create object

*/
#include<iostream>
using namespace std;
class A
{
	public:
		
		void print1()
		{
			cout<<"A Class is Base Class"<<endl;
		}
	
};
class B:public A
{
	public:
		
		void print2()
		{
			cout<<"B Class is Derived Class";
		}
};
int main()
{
	/*A a1;
	a1.print1();	*/
	B b1;
	b1.print1();
	b1.print2();
	return 0;
}
