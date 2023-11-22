#include<iostream>
#include<conio.h>
class base
{
	protected:
			int x;
	public:
			void plus()
			{
				x++;
				}
			void show()
			{
			cout<<"x:"<<x;
			}
};
class derv:public base
{
			public:
				derv()
				{
				x=0;
				}
				void minus()
				{
					x--;
					}
   };


void main()
{
	derv obj;
	clrscr();
	obj.plus();
	obj.plus();
	obj.plus();
	obj.minus();
	obj.show();
	getch();
	return 0;
}


