// inline function
#include<iostream>
using namespace std;
class A
{
	public:
		
		void display();  // function declr
};
void A :: display()
{
	cout<<"Hello";
}
int main()
{
	A a1;
	a1.display();
	return 0;
}
