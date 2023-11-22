// destructor 
#include<iostream>
using namespace std;
class A
{
	public:
		
		A()
		{
			cout<<"Constructor"<<endl;
		}
		
		~A()
		{
			cout<<"Destructor";
		}
};
int main()
{
	A();
	return 0;
}
