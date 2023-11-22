// abstract - pure virtual function
// can create obejct
#include<iostream>
using namespace std;
class A
{
	public:
	
		int no;
		char name[20];
		
		void print()
		{
			cout<<"No: "<<no<<endl;
			cout<<"Name: "<<name;	
		}	
	
	virtual void put_data()=0;  // abstract function 
};
class B : public A
{
	public:
		
		void put_data()
		{
			cout<<"Enetr No: ";
			cin>>no;
			
			cout<<"Enetr Name: ";
			cin>>name;
		}
};
int main()
{
	B b;
	b.put_data();
	b.print();
	
	return 0;
}
