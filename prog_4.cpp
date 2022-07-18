/* [3.] Write a program to determine whether the seller has made profit or incurred loss.
       Also determine how much profit he made or loss he incurred. 
 	   Cost price and selling price of an item is input by the user. */
 	   
#include<iostream>
using namespace std;
int main()
{
	float cost_price,selling_price,profit,loss,amt;
	
	cout<<"Enter the cost price of the item = ";
	cin>>cost_price;
	cout<<"Enter the selling price of the item = ";
	cin>>selling_price;
	
	if(cost_price<selling_price)
	{
		amt=selling_price-cost_price;
		cout<<"Profit of"<< amt <<"has been made";
	}
	else if(cost_price>selling_price)
	{
		amt=cost_price-selling_price;
		cout<<"Loss of"<< amt <<"has been incurred";

	}
	else
	{
		cout<<"No profit or loss has been made";
	}

	return 0;
}
