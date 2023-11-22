#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class time
{
private:
	int dd,mm,yy;
	public:
	date()
	{
	cout<<"\n\n\t\tEnter the data dd  : ";
	cin>>dd;
	cout<<"\n\n\t\tEnter the month mm : ";
	cin>>mm;
	cout<<"\n\n\t\tEnter the yrer yy  : ";
	cin>>yy;
		date (int d, int m, int y)
		{
		dd=d;
		mm=m;
		yy=y;
		}
	void show()
	{
	cout <<"\n\n\t\t date is"<<dd"/"<<mm"/"<<yy;
	}
};
void main()
{
	clrscr();
	date d;
	d.show();
	dateid(16,10,89);
	id.show();
	getch();
}