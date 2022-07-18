// [7.] TO PRINT CUBE OF A GIVEN NUMBER. [i.e INPUT=2, OUTPUT=8 (2*2*2)].

#include<iostream>
using namespace std;
int main()
{
	float num,cube;
	
	cout<<"Enter a number : ";
	cin>>num;
	
	cube=num*num*num;
	
	cout<<"The cube of entered number = "<<cube;
	
	return 0;
}
