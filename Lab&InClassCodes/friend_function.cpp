// friend function - function
#include<iostream>
using namespace std;
class A
{
	private:
		int no;
		char name[20];
	
	public:
		
		void put_data()
		{
			cout<<"Enetr No: ";
			cin>>no;
			
			cout<<"Enetr Name: ";
			cin>>name;
		}
		
	friend void get_data(A a);
};
void get_data(A a)
{
	cout<<"No: "<<a.no<<endl;
	cout<<"Name: "<<a.name;
}
int main()
{
	A a1;
	a1.put_data();
	get_data(a1);
	return 0;
}
