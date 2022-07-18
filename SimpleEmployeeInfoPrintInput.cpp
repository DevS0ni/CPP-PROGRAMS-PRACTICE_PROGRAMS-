// [4.] TO PRINT EMPLOYEE INFORMATION [ATLEAST 5 INFORMATION SHOULD BE TAKEN. PRINT IN PROPER FORMAT].

#include<iostream>  // Declaration of the standard input output stream header file.
using namespace std;  // Declaration of the standard namespace in the program.
int main()  // Main or Startup function in the program.
{
	int employee_id,contact_num,employee_salary;  // Declaration of the integer variables.
	char employee_name[100],address[100];  // Declaration of the string (character arrays) variables.
	
	cout<<"Enter Employee-ID : ";  // Prompting the user to enter the EmployeeID.
	cin>>employee_id;  // Inputing the value of the EmployeeID.
	
	cout<<"Enter Employee Name : ";  // Prompting the user to enter the EmployeeName.
	cin>>employee_name;  // Inputing the value of the EmployeeName.
	
	cout<<"Enter Employee-Contact Number : +91 "; // Prompting the user to enter the EmployeeContactInfo.
	cin>>contact_num;  // Inputing the value of the ContactNumber.
	
	cout<<"Enter Employee-Address : ";  // Prompting the user to enter the EmployeeAddress.
	cin>>address;  // Inputing the address of the Employee.
	
	cout<<"Enter Employee-Salary : ";  // Prompting the user to enter the EmployeeSalary.
	cin>>employee_salary;  // Inputing the Salary of the Employee entered by the Employee.

	cout<<"\n\nEmployee Information :- ";  // Displaying all the Employee Information.
	
	cout<<"\nEnter Employee-ID : "<<employee_id;  // Displaying the EmployeeID entered.
	
	cout<<"\nEnter Employee Name : "<<employee_name;  // Displaying the EmployeeName entered.
	
	cout<<"\nEnter Employee-Contact Number : +91 "<<contact_num;  // Displaying the EmployeeContactNumber entered.
	
	cout<<"\nEnter Employee-Address : "<<address;  // Displaying the EmployeeAddress entered.
	
	cout<<"\nEnter Employee-Salary : "<<employee_salary;  // Displaying the EmployeeSalary entered.

	return 0;  // Returning the integer value 0, after the execution of the Main function in the program.
}
