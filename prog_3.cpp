// Write a program to calculate the total expenses. 
//Quantity and price per item are input by the user and discount of 10% is offered if the expense is more than 5000.  

#include<iostream>
using namespace std;
int main()
{
	int quant;
	float price,amt,dis,total_exp;
	
	cout<<"Enter the quantity of the items you want to purchase = ";
	cin>>quant;

	cout<<"Enter the price per item (in rupees) = ";
	cin>>price;
	
	amt=quant*price;
		
	if(amt>=5000)
	{
		dis=0.1*amt;
		cout<<"The total expense = "<<dis;
	}
	else
	{
		amt=quant*price;
		cout<<"The total expense = "<<amt;
	}
		
	return 0;
}
