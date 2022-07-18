// [5.] TO PRINT PRODUCT INFORMATION [ATLEAST 5 INFORMATION SHOULD BE TAKEN. PRINT IN PROPER FORMAT].

#include<iostream>
using namespace std;
int main()
{
	int product_id,product_year_of_expiry;
	float product_cost;
	char product_name[100],product_manufacturer[100];
	
	cout<<"Enter Product-ID : ";
	cin>>product_id;
	
	cout<<"Enter Product Name : ";
	cin>>product_name;
	
	cout<<"Enter Product Cost : ";
	cin>>product_cost;
	
	cout<<"Enter Product Manufacturer : ";
	cin>>product_manufacturer;
	
	cout<<"Enter Product Year Of Expiry : ";
	cin>>product_year_of_expiry;

	cout<<"\n\nProduct Information :- ";
	
	cout<<"\nProduct-ID : "<<product_id;
	
	cout<<"\nProduct Name : "<<product_name;
	
	cout<<"\nProduct Cost : "<<product_cost;
	
	cout<<"\nProduct Manufacturer : "<<product_manufacturer;
	
	cout<<"\nProduct Year Of Expiry : "<<product_year_of_expiry;

	return 0;
}
