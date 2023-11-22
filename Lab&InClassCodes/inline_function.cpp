// inline function
// inline function can not create obejct
#include<iostream>
using namespace std;
inline float area(float l,float w)
{
	return l*w;
}
int main()
{
	cout<<"Area: "<<area(5.2,4.3);
	return 0;
}
