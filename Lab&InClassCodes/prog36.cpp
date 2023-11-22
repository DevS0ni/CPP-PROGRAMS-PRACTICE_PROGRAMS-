// W A P write file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream f1;
	
	f1.open("abc.txt");
	
	//fprintf(f1,"hello");
	// cout<<"Hello";
	f1<<"Hello";
	
	f1.close();
	
	return 0;
}
