// friend class
#include<iostream>
using namespace std;
class A
{
	private:
		int a;
	
	public:
	
		A()
		{
			a=10;		
		}	
		
	friend class B;
};
class B
{
	private:
		int b;
	
	public:
		
		void print(A a1)
		{
			cout<<"A Class Variable a: "<<a1.a;
		}
};
int main()
{
	A a2;
	B b1;
	b1.print(a2);
	return 0;
}
