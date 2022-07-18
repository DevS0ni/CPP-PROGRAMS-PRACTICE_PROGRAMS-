// [3.] PRINT STUDENT INFORMATION [STUDENT-ID,NAME,ADDRESS,CONTACT NUMBER,MARKS]

#include<iostream>  // Declaration of the standard input output stream header file in the C++ program.
using namespace std;  // Declaration of the standard namespace in the C++ program.
int main()  // Invoking the Main function in the C++ program.

{
	
	int student_id,contact_num;   // Declaration of the integer variables in the program.
	char name[50],address[100];   // Declaration of the string variables in the program.
	float marks;  		      // Declaration of the float variable in the program.
	
	cout<<"Enter Student ID :- ";  // Prompting the user to input his/ her Student ID.
	cin>>student_id;  	       // Inputing the value of the Student - ID, entered by the user into the assigned variable.
	
	cout<<"Enter Name :- ";	       //Prompting the user to type the name.
	cin>>name;		       // Inputing the name typed, to the variable.
	
	cout<<"Enter Address:- ";      // Prompting the user to enter the address.
	cin>>address;		       // Inputing the address typed, to the variable.
	
	cout<<"Contact Info:- ";       // Prompting the user to enter his/ her Contact Info. 
	cin>>contact_num;	       // Inputing the value entered by the user to the variable assigned.
	
	cout<<"Enter Marks :- ";       // Prompting the user to enter his/ her marks/ grade.
	cin>>marks;		       // Inputing the value entered by the user to the variable assigned.
	
	cout<<"\n\n";
	
	cout<<"STUDENT-ID :- "<<student_id<<endl;  // Printing the Student ID number.
	cout<<"NAME :- "<<name<<endl; 		   // Printing the Name of the Student.
	cout<<"ADDRESS :- "<<address<<endl;	   // Printing the Address of the Student.
	cout<<"CONTACT NUMBER :- "<<contact_num<<endl;  // Printing the Contact Number of the Student.
	cout<<"MARKS :- "<<marks<<endl;	 // Printing the Marks of the Student.
	
	return 0;  // Returning the integer value 0, after the end of execution of the Main function, of the program.
	
}
