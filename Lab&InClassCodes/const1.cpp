/*
	- constructor
		- class name and function name same 
		- but no return value(int,char,...) not even use void 
		- not create object
		- class have only create one constructor
	
- 3 type constructor
	- Default constructor
		- not have any argument
	- Parameterized constructor
	- Copy constructor
- Destructor

*/
#include<iostream>
using namespace std;
class A
{
	public:
		
		A()
		{
			cout<<"Default Constructor"<<endl;
		}
		
		/*A()
		{
			cout<<"Hello";
		}*/
		
};
int main()
{
	A();
	return 0;
}
