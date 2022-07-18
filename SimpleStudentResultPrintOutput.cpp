// [6.] TO PRINT STUDENT INFORMATION IN THAT STUDENT NUMBER, STUDENT NAME, MARKS OF 4 SUBJECTS AND DISPLAY TOTAL AND AVERAGE WITH THE USE OF 'cout' AND 'cin' STATEMENT.

#include<iostream>  // Declaration of the standard input/ output stream header file.
using namespace std;  // Declaration of the standard namespace.
int main()  // Main or Startup function for the program.
{
	int student_number,sub1,sub2,sub3,sub4;  // Declaration of all the integer variables for the program.
	char student_name[100];  // Declaration of string variable for the program.
	float total_marks,avg_marks;  // Declaration of the float variable.
	
	cout<<"Enter Student Name : ";  // Prompting the user to type the StudentName.
	cin>>student_name;  // Taking the input of StudentName.
	
	cout<<"Enter Student Number : ";  // Prompting the user to type the StudentNumber.
	cin>>student_number;  // Taking the input of StudentNumber.
	
	cout<<"Enter Marks of Subject 1 : ";  // Prompting the user to type the marks of Subject1.
	cin>>sub1;  // Taking the input of marks for Subject1.
	
	cout<<"Enter Marks of Subject 2 : ";  // Prompting the user to type the marks of Subject2.
	cin>>sub2;  // Taking the input of marks for Subject2.
	
	cout<<"Enter Marks of Subject 3 : ";  // Prompting the user to type the marks of Subject3.
	cin>>sub3;  // Taking the input of marks for Subject3.
	 
	cout<<"Enter Marks of Subject 4 : ";  // Prompting the user to type the marks of Subject4.
	cin>>sub4;  // Taking the input of marks for Subject4.
	
	total_marks=sub1+sub2+sub3+sub4;  // Logic to calculate, total marks for the program.
	
	avg_marks=total_marks/4;  // Logic to calculate average marks, with the help of total marks, for the program.

	cout<<"\n\nStudent Result :- ";  // Displaying the StudentResult. 
	
	cout<<"\nTotal Marks : "<<total_marks;  // Displaying the TotalMarks for the program.
	
	cout<<"\nAverage Marks : "<<avg_marks;  // Displaying the AverageMarks for the program.
	
	return 0; // Returning the integer value 0, at the end of the program, after the execution of the Main function.
}
