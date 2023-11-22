#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class mpat
{
	private :
		int pat_id;
		char pat_nm[20],p_type;
	public :
		mpat()
		{
			pat_id=0;
		}
		~mpat()
		{
			pat_id=0;
		}
		void input()
		{
			cout<<"Enter patient id:";
			cin>>pat_id;
			flushall();
			cout<<"Enter patient name:";
			cin>>pat_nm;
			flushall();
			cout<<"Enter patient type(I-Indoor, O-Outdoor):";
			cin>>p_type;
			flushall();
		}
		void disp()
		{
			cout<<"Patient id   :"<<pat_id<<endl;
			cout<<"Patient name :"<<pat_nm<<endl;
			if(p_type=='I' ||p_type=='i')
				cout<<"Patient type :Indoor Patient"<<endl;
			else
			if(p_type=='O' || p_type=='o')
				cout<<"Patient type :Outdoor Patient"<<endl;
			else
				cout<<"Patient type :Invalid Entry"<<endl;
		}

};

class ind : public mpat
{
	private :
		int roomno,cf,bill;
	public	:
		ind()
		{
			roomno=cf=bill=0;
		}
		~ind()
		{
			roomno=cf=bill=0;
		}
		void input1()
		{
			input();
		      cout<<"Enter ward number:";
			cin>>roomno;
			flushall();
			cout<<"Enter case file number:";
			cin>>cf;
			flushall();
			cout<<"Enter total bill:";
			cin>>bill;
			flushall();
		}
		void disp1()
		{
			disp();
			cout<<"Room number:"<<roomno<<endl;
			cout<<"Ward number:"<<cf<<endl;
			cout<<"Total bill :"<<bill<<endl;
		}

};

class otp : public mpat
{
	private :
		int cn,bill;
	public	:
		otp()
		{
			cn=bill=0;
		}
		~otp()
		{
			cn=bill=0;
		}
		void input1()
		{
			input();
			cout<<"Enter case file number:";
			cin>>cn;
			flushall();
			cout<<"Enter total bill:";
			cin>>bill;
			flushall();
		}
		void disp1()
		{
			disp();
			cout<<"Ward number:"<<cn<<endl;
			cout<<"Total bill :"<<bill<<endl;
		}

};

void main()
{

	ind obj;
	otp obj1;

	int choice;
	do
	{
		clrscr();
		cout<<"Menu"<<endl;
		cout<<"1. Indoor patient"<<endl;
	      cout<<"2. Outdoor patient"<<endl;
		cout<<"3. Exit"<<endl;

		cout<<"Enter your choice:";
		cin>>choice;

		if(choice==1)
		{
			obj.input1();
			obj.disp1();
		}
		else
		if(choice==2)
		{
			obj1.input1();
			obj1.disp1();
		}
		getch();
	}while(choice!=3);
}