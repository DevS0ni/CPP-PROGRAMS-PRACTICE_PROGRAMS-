// [4.] TO PRINT EMPLOYEE INFORMATION [ATLEAST 5 INFORMATION SHOULD BE TAKEN. PRINT IN PROPER FORMAT].

#include<iostream>
using namespace std;
int main()
{
	int employee_id,contact_num,employee_salary;
	char employee_name[100],address[100];
	
	cout<<"Enter Employee-ID : ";
	cin>>employee_id;
	
	cout<<"Enter Employee Name : ";
	cin>>employee_name;
	
	cout<<"Enter Employee-Contact Number : +91 ";
	cin>>contact_num;
	
	cout<<"Enter Employee-Address : ";
	cin>>address;
	
	cout<<"Enter Employee-Salary : ";
	cin>>employee_salary;

	cout<<"\n\nEmployee Information :- ";
	
	cout<<"\nEnter Employee-ID : "<<employee_id;
	
	cout<<"\nEnter Employee Name : "<<employee_name;
	
	cout<<"\nEnter Employee-Contact Number : +91 "<<contact_num;
	
	cout<<"\nEnter Employee-Address : "<<address;
	
	cout<<"\nEnter Employee-Salary : "<<employee_salary;

	return 0;
}
