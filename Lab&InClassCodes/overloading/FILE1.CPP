#include <iostream.h>
#include<conio.h>
class Base
{
	public:
	  char* name;
	  void display()
	  {
	    cout << name << endl;
	  }
};
class Derived: public Base
{
	public:
	  char* name;
	  void display()
	  {
	    cout << name << ", " << Base::name << endl;
	  }
};
int main()
 {
  Derived d;
  clrscr();
  d.name = "\n\nDerived Class";
  d.Base::name = "\n\nBase Class";

  // call Derived::display()
  d.display();

  // call Base::display()
  d.Base::display();
  getch();
3}