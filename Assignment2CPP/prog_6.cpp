/* [6.] To check whether a triangle is valid or not,
        when the three angles of the triangle are entered by the user.
    	A triangle is valid if sum of all the three angles of triangle is equal to 180 degrees. */
    	
#include<iostream>
using namespace std;
int main()
{
	float a1,a2,a3;
	
	cout<<"Enter angle 1 = ";
	cin>>a1;
	
	cout<<"Enter angle 2 = ";
	cin>>a2;
		
	cout<<"Enter angle 3 = ";
	cin>>a3;
	
	if(a1+a2+a3==180)
	{
		cout<<"Triangle is valid !!";
	}
	
	else
	{
		cout<<"Triangle is not valid !!";
	}
	
	return 0;
}
