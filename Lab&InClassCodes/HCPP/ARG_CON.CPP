// To pass argument in constructor

#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>

class test
{
	private :
			int num;
			char time;
			char nm[20];
	public  :
			test(int n,char t,char nm1[])
			{
				num=n;
				time=t;
				strcpy(nm,nm1);
			}
			~test()
			{
				num=0;
				time=' ';
				strcpy(nm," ");
			}
			void disp()
			{
				cout<<"\t\tNumber:"<<num<<endl;
				cout<<"\t\tName  :"<<nm<<endl;
				if(time=='M' || time=='m')
					cout<<"\t\tTime:Morning"<<endl;
				else
				if(time=='A' || time=='a')
					cout<<"\t\tTime:Afternoon"<<endl;
				else
				if(time=='E' || time=='e')
					cout<<"\t\tTime:Evening"<<endl;
				else
					cout<<"\t\tInvalid entry";
			}

};


void main()
{
	test obj(1,'M',"Tom");
	clrscr();
	obj.disp();
	getch();
}