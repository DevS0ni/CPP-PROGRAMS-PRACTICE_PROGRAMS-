 #include<iostream.h>
 #include<conio.h>

 class Add
 {
				int x,y,ans;

				public:
				void adddata();
				void display();
};

void Add::adddata()
	{
				cout<<"Enter a value of x:";
				cin>>x;
				cout<<"\nenter a value of y:";
				cin>>y;
				ans=x+y;
				cout<<ans;
	 }
void  Add::display()
{
		cout<<"\n\nX:"<<x;
		cout<<"\nY:"<<y;
		cout<<"\nAdd is:"<<ans;
 }

 void main()
 {
			Add A;
			clrscr();
			A.adddata();
			A.display();
			getch();
  }