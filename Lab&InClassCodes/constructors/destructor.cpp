#include<iostream>
using namespace std;
static int count;
class A{
	public:
		public:
			A(){
				count+=1;
				cout<<"\n"<<count<<"object created"<<endl;	
				}
			~A(){
				cout<<"\n"<<count<<"object destroying"<<endl;
				count-=1;
				}
};
int main(){
	cout<<"\nMain Block";
	A a1;
	{
		cout<<"\nBlock 1";
		A a2,a3;
		cout<<"\nexit from block 1";
	}
	cout<<"\nExit from main block";
	return 0;
}

