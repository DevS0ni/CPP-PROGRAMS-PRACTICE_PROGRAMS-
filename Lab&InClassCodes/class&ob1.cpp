#include<iostream>
using namespace std;
class Student
{
	public:
	int sno;
	char snm[20];
	float per;	
	
	void getdata()
	{
		cout<<"Enter student no:- ";
		cin>>sno;
		cout<<"Enter student name:- ";
		cin>>snm;
		cout<<"Enter student Percentage:- ";
		cin>>per;
	}
	
	void displaydata()
	{
		cout<<"Student No:- "<<sno<<endl;
		cout<<"Student Name:- "<<snm<<endl;
		cout<<"Student Percentage:- "<<per<<endl;
	}
};
int main()
{
	Student s;			// classname objectname;
	s.getdata();    	// objectname.functionname();
	s.displaydata();  
	return 0;
}
