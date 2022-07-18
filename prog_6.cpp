// [6.] TO PRINT STUDENT INFORMATION IN THAT STUDENT NUMBER, STUDENT NAME, MARKS OF 4 SUBJECTS AND DISPLAY TOTAL AND AVERAGE WITH THE USE OF 'cout' AND 'cin' STATEMENT.

#include<iostream>
using namespace std;
int main()
{
	int student_number,sub1,sub2,sub3,sub4;
	char student_name[100];
	float total_marks,avg_marks;
	
	cout<<"Enter Student Name : ";
	cin>>student_name;
	
	cout<<"Enter Student Number : ";
	cin>>student_number;
	
	cout<<"Enter Marks of Subject 1 : ";
	cin>>sub1;
	
	cout<<"Enter Marks of Subject 2 : ";
	cin>>sub2;
	
	cout<<"Enter Marks of Subject 3 : ";
	cin>>sub3;
	
	cout<<"Enter Marks of Subject 4 : ";
	cin>>sub4;
	
	total_marks=sub1+sub2+sub3+sub4;
	
	avg_marks=total_marks/4;

	cout<<"\n\nStudent Result :- ";
	
	cout<<"\nTotal Marks : "<<total_marks;
	
	cout<<"\nAverage Marks : "<<avg_marks;
	
	return 0;	
}
