// this + const
#include<iostream>
using namespace std;
class Person
{
	public:
		
		int no; //no=101
		char letter;
	
		Person(int no,char letter) // const argu 
		{
			this->no=no;  // -> this pointer 
			//this->no=101;
			this->letter=letter;
		}
		
		void print()
		{
			cout<<"No: "<<no<<endl<<"Letter: "<<letter;	
		}	
};
int main()
{
	Person p1(101,'A');
	p1.print();
	return 0;
}
