// [5.] TO PRINT PRODUCT INFORMATION [ATLEAST 5 INFORMATION SHOULD BE TAKEN. PRINT IN PROPER FORMAT].

#include<iostream>  // Declaration of the input output stream header file.
using namespace std;  // Declaration of the standard namespace for the C++ program.
int main()
{
	int product_id,product_year_of_expiry;  // Declaration of all the integer variables used in the program.
	float product_cost;  // Declaration of all the float variables used in the program.
	char product_name[100],product_manufacturer[100];  // Declaration of all the string variables used in the program.
	
	cout<<"Enter Product-ID : ";  // Prompting the user to enter the ProductID.
	cin>>product_id;  // Inputing the value of ProductID.
	
	cout<<"Enter Product Name : ";  // Prompting the user to enter the ProductName.
	cin>>product_name;  // Inputing the value of ProductName.
	
	cout<<"Enter Product Cost : ";  // Prompting the user to enter the ProductCost.
	cin>>product_cost;  // Inputing the value of ProductCost.
	
	cout<<"Enter Product Manufacturer : ";  // Prompting the user to enter the ProductManufacturer.
	cin>>product_manufacturer;  // Inputing the value of ProductManufacturer.
	
	cout<<"Enter Product Year Of Expiry : ";  // Prompting the user to enter the ProductYearofExpiry.
	cin>>product_year_of_expiry;  // Inputing the value of ProductYearofExpiry.

	cout<<"\n\nProduct Information :- ";  // Displaying all the Product Information.
	
	cout<<"\nProduct-ID : "<<product_id;  // Displaying the ProductID.
	
	cout<<"\nProduct Name : "<<product_name;  // Displaying the ProductName.
	
	cout<<"\nProduct Cost : "<<product_cost;  // Displaying the ProductCost.
	
	cout<<"\nProduct Manufacturer : "<<product_manufacturer;  // Displaying the ProductManufacturer.
	
	cout<<"\nProduct Year Of Expiry : "<<product_year_of_expiry;  // Displaying the ProductYearofExpiry.

	return 0;  // Returning the value of the integer value 0, at the end of the execution of the Main function.
}
