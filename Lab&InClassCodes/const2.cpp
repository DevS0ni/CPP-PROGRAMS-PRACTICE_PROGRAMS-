/*
	- Parameterized constructor
		- pass argument but different type of arguemnt pass (datatype)
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
		
		A(int no) // arg - 1 - datatype - int
		{
			cout<<"No1: "<<no<<endl;
		}	
		
		A(char letter) // arg - 1 - datatype - char
		{
			cout<<"Letter: "<<letter<<endl;
		}
		
		A(int a,int b) // arg - 2 - datatype - int - int
		{
			cout<<"Add: "<<a+b<<endl;
		}
		
		A(char name[10],float amt) // arg - 2 - datatype - char - float
		{
			cout<<"Name1: "<<name<<endl;
			cout<<"Amouunt1: "<<amt<<endl;
		}
		
		A(float amt,char name[10]) // arg - 2 - datatype - float - char 
		{
			cout<<"Amouunt2: "<<amt<<endl;
			cout<<"Name2: "<<name<<endl;
		}
};
int main()
{
	A();
	A(123);
	A('A');
	A(10,10);
	A("JAY",1520.20);
	A(142.02,"YASH");
	return 0;
}
