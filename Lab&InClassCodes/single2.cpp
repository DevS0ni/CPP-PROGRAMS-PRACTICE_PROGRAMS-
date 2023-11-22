#include<iostream>
using namespace std;
class A
{
	public:
	
		int a,b;
		
		void put_data()
		{
			cout<<"Enetr No1 Value: ";
			cin>>a;
			
			cout<<"Enetr No2 Value: ";
			cin>>b;
			
		}	
};
class B : public A
{
	public:
		
		void get_data()
		{
			cout<<"Add: "<<a+b<<endl;
			cout<<"Sub: "<<a-b<<endl;
			cout<<"Mul: "<<a*b<<endl;
			cout<<"Div: "<<a/b<<endl;
			cout<<"Mod: "<<a%b;
		}
};
int main()
{
	B b1;
	b1.put_data();
	b1.get_data();
	return 0;
}
