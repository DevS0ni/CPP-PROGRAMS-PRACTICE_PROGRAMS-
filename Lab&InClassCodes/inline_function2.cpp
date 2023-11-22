// inline function and class - obejct 
#include<iostream>
using namespace std;
class Demo
{
	int a,b,c;
	
	public:
			
		void get();
		void add();
};
inline void Demo:: get()
{
	cout<<"Enetr A Value: ";
	cin>>a;
	
	cout<<"Enetr B Value: ";
	cin>>b;
}
inline void Demo :: add()
{
	c=a+b;
	cout<<"Add: "<<c;
}
int main()
{
	Demo d1;
	d1.get();
	d1.add();
	
	return 0;
}
