/*Overloading Binary Operator Using Member Function*/

#include<iostream.h>
#include<conio.h>

class integer
{
  int val;
 public:
   integer();
   integer(int one);
   integer operator +(integer objb); //binary opt
   void disp();
};

integer::integer()
{
	val=0;
}

integer::integer(int one)
{  val=one;
}

integer integer::operator +(integer objb)
{
 integer objsum;
  objsum.val=val+objb.val;;
   return(objsum);
}

void integer::disp()
{  cout<<"Value="<<val<<endl;
}

void main()
{
  clrscr();
  integer obj1(11);
  integer obj2(22);
  integer objsum;
  objsum= obj1+obj2;
  obj1.disp();
  obj2.disp();
  objsum.disp();
  getch();
}

/*OUTPUT
Value = 11
Value = 22
Value = 33*/
