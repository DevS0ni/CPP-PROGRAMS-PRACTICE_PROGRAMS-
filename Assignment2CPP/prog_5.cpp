/* [5.] If the ages of Ram, Sulabh and Ajay are input by the user, 
   	    write a program to determine the youngest of the three.  
*/

#include<iostream>
using namespace std;
int main()
{
	int age_ram,age_sulabh,age_ajay;
	
	cout<<"Enter the age of ram = ";
	cin>>age_ram;
	
	cout<<"Enter the age of sulabh = ";
	cin>>age_sulabh;
	
	cout<<"Enter the age of ajay = ";
	cin>>age_ajay;
	
	if(age_ram>age_sulabh && age_sulabh>age_ajay)
	{
		cout<<"Ajay is the youngest of the three";
	}
	else if(age_ram>age_sulabh && age_ajay>age_sulabh)
	{
		cout<<"Sulabh is the youngest of the three";
	}
	else
	{
		cout<<"Ram is the youngest of the three";
	}
	return 0;
}
