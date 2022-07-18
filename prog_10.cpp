/* [10.] THE MARKS OBTAINED BY A STUDENT IN FIVE DIFFERENT SUBJECTS ARE INPUT BY THE USER.
		 THE STUDENT GETS THE DIVISION AS PER THE FOLLOWING RULES :-
		 PERCENTAGE ABOVE OR EQUAL TO 60 - FIRST DIVISION.
		 PERCENTAGE BETWEEN 50 AND 60 - SECOND DIVISION.
		 PERCENTAGE BETWEEN 60 AND 40 - THIRD DIVISION.
		 PERCENTAGE LESS THAN 40 - FAIL.      
		 WRITE A PROGRAM TO CALCULATE DIVISION OBTAINED BY THE STUDENT.       */
		 
#include<iostream>
using namespace std;
int main()
{
	float sub1,sub2,sub3,sub4,sub5,total_marks,percent;
	
	cout<<"Enter the marks of subject 1 = ";
	cin>>sub1;
	
	cout<<"Enter the marks of subject 2 = ";
	cin>>sub2;
	
	cout<<"Enter the marks of subject 3 = ";
	cin>>sub3;
	
	cout<<"Enter the marks of subject 4 = ";
	cin>>sub4;
	
	cout<<"Enter the marks of subject 5 = ";
	cin>>sub5;	
	
	total_marks=sub1+sub2+sub3+sub4+sub5;
	percent=total_marks/5;
	
	cout<<percent<<" %"<<endl;
	
	if(percent>=60)
	{
		cout<<"SECURED FIRST DISTINCTION";
	}
	
	else if(percent>=50 && percent<60)
	{
		cout<<"SECURED SECOND DISTINCTION";
	}
	
	else if(percent>=40 && percent<50)
	{
		cout<<"SECURED THIRD DISTINCTION";
	}
	
	else
	{
		cout<<"FAIL";
	}
	
	return 0;	
}		 
