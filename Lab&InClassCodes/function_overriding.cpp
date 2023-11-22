/*
	- Function Overriding
		- 2 class but same function name and same argument
*/
#include<iostream>
using namespace std;
class A
{
	public:
		
		void print()
		{
			cout<<"Class A is Base Class";
		}
		
		void sum(int a,int b)
		{
			cout<<"Add: "<<a+b;
		}
};
class B : public A
{
	public:
		
		void print()
		{
			cout<<"Class B is Derived Class"<<endl;
		}
		
		void sum(int a,int b)
		{
			cout<<"Mul: "<<a*b;
		}
};
int main()
{
	B b1;
	b1.print();
	b1.sum(10,45);
	
	return 0;
}
