#include<iostream.h>
#include<conio.h>
class student
{
	private :

	int admno;
	char sname[20];
	float math,eng,sci,total;

	float ctotal()
	{
		total=math+eng+sci;
		return total;
	}

	public:
	void Take_Info()
	{
		cout<<"Enter Admision Number::";
		cin>>admno;

		cout<<"Enter Student Name::";
		cin>>sname;

		cout<<"Enter Maths mark::";
		cin>>math;

		cout<<"Enter Science mark::";
		cin>>sci;

		cout<<"Enter English mark::";
		cin>>eng;

		ctotal();
	}

	void Show_Info()
	{
		cout<<"Admno::"<<admno<<endl;
		cout<<"Student Name::"<<sname<<endl;
		cout<<"Maths::"<<math<<endl;
		cout<<"Science::"<<sci<<endl;
		cout<<"English::"<<eng<<endl;
		cout<<"Total::"<<total<<endl;
	}

};
void main()
{
	student s;
	clrscr();
	s.Take_Info();
	s.Show_Info();
	getch();
}