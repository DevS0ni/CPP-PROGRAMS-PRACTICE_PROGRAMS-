#include<iostream.h>
#include<conio.h>
class loc
{
	int longitude, latitude;
	public:
	loc()
	{}
	loc(int lg, int lt)
	{
		longitude = lg;
		latitude = lt;
	}
	void show()
	{
		cout << longitude << " ";
		cout << latitude << "\n";
	}
	loc operator=(loc op2);
	friend loc operator++(loc &op);
	friend loc operator--(loc &op);
};

// Overload assignment for loc.
loc loc::operator=(loc op2)
{
  longitude = op2.longitude;
  latitude = op2.latitude;

  return *this; // i.e., return object that generated call
}

// Now a friend; use a reference parameter.
loc operator++(loc &op)
{
  op.longitude++;
  op.latitude++;

  return op;
}

// Make op-- a friend; use reference.
loc operator--(loc &op)
{
  op.longitude--;
  op.latitude--;

  return op;
}

int main()
{
  loc ob1(10, 20), ob2;

  clrscr();
  ob1.show();
  ++ob1;
  ob1.show();

  ob2 =  ++ob1;
  ob2.show();

  --ob2;
  ob2.show();

  return 0;
  getch();
}