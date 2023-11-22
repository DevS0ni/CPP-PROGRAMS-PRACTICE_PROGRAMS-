#include<iostream.h>
#include<conio.h>

class simple
{
	public:

	inline int sqr(int a);
 };

  int simple::sqr(int a)
  {
	return(a*a);
	}

	void main()
	{
		simple s;
		clrscr();

		int ans=s.sqr(5);
		cout<<ans;
		getch();
	 }