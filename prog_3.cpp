// [3.] PRINT STUDENT INFORMATION [STUDENT-ID,NAME,ADDRESS,CONTACT NUMBER,MARKS]

#include<iostream>
using namespace std;
int main()

{
	
	int student_id,contact_num;
	char name[50],address[100];
	float marks;
	
	cout<<"Enter Student ID :- ";
	cin>>student_id;
	
	cout<<"Enter Name :- ";
	cin>>name;
	
	cout<<"Enter Address:- ";
	cin>>address;
	
	cout<<"Contact Info:- ";
	cin>>contact_num;
	
	cout<<"Enter Marks :- ";
	cin>>marks;	
	
	cout<<"\n\n";
	
	cout<<"STUDENT-ID :- "<<student_id<<endl;
	cout<<"NAME :- "<<name<<endl;
	cout<<"ADDRESS :- "<<address<<endl;
	cout<<"CONTACT NUMBER :- "<<contact_num<<endl;
	cout<<"MARKS :- "<<marks<<endl;	
	
	return 0;
	
}
