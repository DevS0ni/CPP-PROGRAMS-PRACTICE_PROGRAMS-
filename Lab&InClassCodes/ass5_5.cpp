#include<iostream>
using namespace std;
class Book
{

	private:
	int bno,num;
	char btitle[20];
	float price,total;
	
	float total_cost(int n)
	{
		total=n*price;
		return total;	
	}	
	
	public:
		void input()
		{
			cout<<"Enter book no:- ";
			cin>>bno;
			cout<<"Enter book Title:- ";
			cin>>btitle;
			cout<<"Enter book price:- ";
			cin>>price;
		}
		
		void purchase()
		{
			cout<<"Enter no of Books:- ";
			cin>>num;
			total_cost(num);
			cout<<"Total cost of book :- "<<total;
			
		}
};
int main()
{
	Book b;
	b.input();
	b.purchase();
	
	return 0;
}
