// ass5-1
#include<iostream>
using namespace std;
class student
{
	private:
		int adno;
		char snm[20];
		float eng,math,sci,total;
		
		float ctotal()
		{
			total=eng+sci+math;
			return total;
		}
	
	public:
		void takedata()
		{
			cout<<"Enter Admission no:- ";
			cin>>adno;
			cout<<"Enter Student name:- ";
			cin>>snm;
			cout<<"Enter English subject marks:- ";
			cin>>eng;
			cout<<"Enter Science subjet marks:- ";
			cin>>sci;
			cout<<"Enter Maths subject marks:- ";
			cin>>math;
			
			ctotal();	// function call
			
		}
		
		void showdata()
		{
			cout<<"Admission No:- "<<adno<<endl;
			cout<<"Student Name:- "<<snm<<endl;
			cout<<"English, Maths , Scienc subject marks :- "<<eng
			<<"\t"<<math<<"\t"<<sci<<endl;
			cout<<"Total:- "<<total<<endl;
		}
};
int main()
{
	student s;
	s.takedata();
	s.showdata();
	return 0;
}
