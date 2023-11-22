#include<iostream>
using namespace std;
class Flight
{
	private:
		int fno;
		char des[20];
		float distance,fuel;
		
		float calfuel()
		{
			if(distance<=1000)
			{
				fuel=500;
			}
			else if(distance>1000 && distance<=2000)
			{
				fuel=1100;
			}
			else
			{
				fuel=2200;
			}
			
			return fuel;
			
		}
		
		public:
			void readinfo()
			{
				cout<<"Enter flight no:- ";
				cin>>fno;
				cout<<"Enter desitination:- ";
				cin>>des;
				cout<<"Enter Distance:- ";
				cin>>distance;
				
				calfuel();
			}
			
			void showinfo()
			{
				cout<<"Flight no:- "<<fno<<endl;
				cout<<"Desitination:- "<<des<<endl;
				cout<<"Distance:- "<<distance<<endl;
				cout<<"Fuel:- "<<fuel<<endl;
			}
};
int main()
{
	Flight f;
	f.readinfo();
	f.showinfo();
	return 0;
}
