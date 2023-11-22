#include<iostream>
using namespace std;
class Report
{

	private:
	int adno,i,sum;
	char snm[20];
	float marks[5]; // [25,63,1,25,10]
	float avg;
	
	float getavg()
	{
		sum=0;
		for(i=0;i<5;i++)
		{
			sum=sum+marks[i];// sum=25+0=25 sum=25+63
		}
		avg=sum/5;
		return avg;
		
	}	
	
	public:
		void readinfo()
		{
			cout<<"Enter admission no:- ";
			cin>>adno;
			cout<<"Enter student name:- ";
			cin>>snm;
			cout<<"Enter 5 subject marks:- ";
			for(i=0;i<5;i++)
			{
				cin>>marks[i];
			}
			
			getavg();
			
		}
		
		void displayinfo()
		{
			cout<<"Admission no:- "<<adno<<endl;
			cout<<"Student name:- "<<snm<<endl;
			cout<<"5 Subject marks :- "<<endl;
			for(i=0;i<5;i++)
			{
				cout<<marks[i]<<"\t";
			}
			cout<<"\n Avarage :- "<<avg<<endl;
		}
};
int main()
{
	Report r;
	r.readinfo();
	r.displayinfo();
	return 0;
}
