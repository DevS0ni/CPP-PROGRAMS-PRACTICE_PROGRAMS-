/*
	- function overloading
		- only one class but same function and different argument
		
		- simple function = return function
		- argument function = return with argument
*/
#include<iostream>
using namespace std;
class Demo
{
	public:
		
		void print()
		{
			cout<<"Function Overloading"<<endl;
		}
		
		/* - error
		int print()
		{
			
		}*/
		
		void print(int no)
		{
			cout<<"No: "<<no<<endl;
		}
		
		int print(int no1,int no2)
		{
			return no1+no2;
		}
		
		char print(char letter)
		{
			return letter;
		}
		
};
int main()
{
	Demo d;
	d.print();
	d.print(101);
	cout<<"Add: "<<d.print(10,10)<<endl;
	cout<<"Letter: "<<d.print('A');
	
	return 0;
}
