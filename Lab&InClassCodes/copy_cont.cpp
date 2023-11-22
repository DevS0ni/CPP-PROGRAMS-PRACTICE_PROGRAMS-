// copy constructor
#include<iostream>
using namespace std;
class Demo
{
	int no,age;
	
	public:
		
		Demo(int a,int b)
		{
			no=a;
			age=b;
		}
		
		Demo(const Demo &d)
		{
			no=d.no;
			age=d.age;
		}
		
		void print()  // function simple
		{
			cout<<"No: "<<no<<endl<<"Age: "<<age<<endl<<endl;
		}
};
int main()
{
	Demo d1(101,10);
	Demo d2(102,12);
	Demo d3=d2;
	Demo d4=d1;
	
	d1.print();
	d2.print();
	d3.print();
	d4.print();
	
	return 0;
}
