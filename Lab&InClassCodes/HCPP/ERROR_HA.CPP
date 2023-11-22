#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int main()
{
	int a,b,n;
	clrscr();
	cout<<"\n\n\t\tEnter thwe value of a & b";
	cin>>a>>b;
	n=a-b;
	try;
	{
	if(n!=0)
		cout<<"\n\n\tResulta/n : "<<a/n;
	else
		throw(n);
	}

	catch(int i)
	{
	cout<<"\n\tException caught : n"<<" "<<n<<endl;
	}
	return 0;

	getch();
}


