/* [9.] TO CALCULATE THE MONTHLY TELEPHONE BILLS AS PER THE FOLLOWING RULE :-
        MIN. RS.200 FOR UPTO 100 CALLS.
        PLUS RS. 0.60 PER CALL FOR NEXT 50 CALLS.
        PLUS RS. 0.50 PER CALL FOR NEXT 50 CALLS.
        PLUS RS. 0.40 PER CALL FOR ANY CALL BEYOND 200 CALLS.     */
        
#include<iostream>
using namespace std;

int main()
{
	int calls;
	float bill;
	cout<<"Enter Number Of Calls : ";
	cin>>calls;

	if(calls<=100)
	bill=200;
	
	else if (calls>100 && calls<=150)
  	{
     	calls=calls-100;
     	bill=200+(0.60*calls);
	}

	else if (calls>150 && calls<=200)
	{
		calls=calls-150;
		bill=200+(0.60*50)+(0.50*calls);
 	}
	
	else
	{
		calls=calls-200;
		bill=200+(0.60*50)+(0.50*50)+(0.40*calls);
	}

	cout<<" Your Bill is RS."<<bill;

	return 0;
}
