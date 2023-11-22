#include<iostream.h>
#include<conio.h>

int count=0;
class simple
{
	public:
		simple()   //constructor
		{
			cout<<"\n object create"<<count;
			count++;
		 }

		~simple()  //destructor
		{
			cout<<"\n object destoy"<<count;
			count--;
			}
};
   void main()
   {
		clrscr();
		simple s;
		simple s1;
		simple s2;
		s;
		s1;
		s2;
		getch();
	 }
