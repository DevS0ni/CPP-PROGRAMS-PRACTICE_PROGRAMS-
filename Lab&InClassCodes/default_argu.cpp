// default argument
#include<iostream>
using namespace std;
class A
{
	public:
	
		void sum(int a=10,int b=10) // argument
		{
			cout<<"Add: "<<a+b<<endl;
		}
};
int main()
{
	A a;
	a.sum();
	a.sum(100);
	a.sum(100,100);
	
	return 0;
}
