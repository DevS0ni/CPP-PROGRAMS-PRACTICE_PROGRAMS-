#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream f1;
	
	char name[20];
	
	f1.open("abc.txt");
	
	if(f1==NULL)
	{
		cout<<"File Does Not Exit.....";
	}
	
	//fscanf(f1,"%d",&no);
	//cin>>no;
	f1>>name;
	
	cout<<name;
	
	f1.close();
	
	return 0;
}
