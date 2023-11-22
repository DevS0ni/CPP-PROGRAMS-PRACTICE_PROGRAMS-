// two dimension array
#include<iostream>
using namespace std;
int main()
{
	int arr[5][5],r,c,i,j;
	
	cout<<"Enter no of rows:- ";
	cin>>r;
	cout<<"Enter no of columns:- ";
	cin>>c;
	
	cout<<"Enter array Elements";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>arr[i][j];
		}	
	}
	cout<<"\n\n 2D Array :- \n\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<"\n";
	}
	return 0;	
}
