/* [8.] IN A COMPANY AN EMPLOYEE IS PAID AS UNDER :-
	    (1.) IF HIS BASIC SALARY IS LESS THAN RS.1500,
	    THEN HRA=10% OF BASIC SALARY,
	    	 DA=90% OF BASIC SALARY.
	    (2.) IF HIS SALARY IS EITHER EQUAL TO OR ABOVE RS.1500,
	    THEN HRA=RS.500 AND
	    DA=98% OF BASIC SALARY.
	    IF THE EMPLOYEE'S SALARY IS ENTERED BY THE USER....
	    
		WRITE A PROGRAM TO FIND HIS GROSS SALARY.          */
		
#include<iostream>
using namespace std;
int main()
{
	float basic_salary,hra,da,gross_salary;
	
	cout<<"Enter the Basic Salary = ";
	cin>>basic_salary;
	
	if(basic_salary<1500)
	{
		hra=basic_salary*0.1;
		da=basic_salary*0.90;
		gross_salary=basic_salary+hra+da;
	}
	
	else
	{
		hra=500;
		da=basic_salary*0.98;
		gross_salary=basic_salary+hra+da;
	}
	
	cout<<"Gross Salary = RS. "<<gross_salary;
	
	return 0;
}
