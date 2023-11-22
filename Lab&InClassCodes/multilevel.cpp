/*
	- MultiLevel Inhritance
		
		class A
		{
			class A is Base class
		};
		class B : public A
		{
			class B is Derived class
			class B is Base class
		};
		class C : public B
		{
			class C is Derived class
		};
		
		- one and more base class and one more derived class
		- base class and derived class are same / 4=4
*/
#include<iostream>
#include<stdio.h>
using namespace std;
class Person
{
	int age;
	char name[20],gen[10];
	
	public:
		
		void get_data1()
		{
			cout<<"Enetr Name: ";
			fflush(stdin);  /* clears input stream
							 Flush File Buffer - standard input */
			gets(name);
			//cin>>name;
			
			cout<<"Enetr Age: ";
			cin>>age;
			
			cout<<"Enetr Gender: ";
			cin>>gen;
		}
		
		void display1()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
			cout<<"Gender: "<<gen<<endl;
		}
};
class Emp : public Person
{
	char company[50];
	float salary;
	
	public:
	
		void get_data2()
		{
			cout<<"Enetr Company Name: "	;
			fflush(stdin);
			gets(company);
			//cin>>company;
			
			cout<<"Enetr Salalry: ";
			cin>>salary;
		}	
		
		void display2()
		{
			cout<<"Company Name: "<<company<<endl;
			cout<<"Salary: "<<salary;
		}
};
class Programmer : public Emp
{
	int no;
	
	public:
	
		void get_data3()
		{
			cout<<"Enetr Number of Programming Language Known: ";
			cin>>no;
		}	
		
		void display3()
		{
			cout<<"Number of Language Known: "<<no<<endl;
		}
};
int main()
{
	Programmer p1;
	p1.get_data1();
	p1.get_data2();
	p1.get_data3();
	cout<<endl;
	p1.display1();
	p1.display2();
	p1.display3();
	return 0;
}
