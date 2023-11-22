//   PROGRAM NAME: Program using inline function
///==================================================================

#include<iostream.h>	//Header files
#include<process.h>
#include<conio.h>
int a,b;	//Globle variable
inline double cylinder(double r,double h)  //Inline Function
{
	return(3.14*r*r*h);	//Retun value to invoke function
}
inline double cube(double r)
{

	return(r*r*r);
}
inline double rectangle(double l,double b,double h)
{

	return(l*b*h);
}


int main()	//Main function
{
	double b,d,r,h,l;
	int ch;
	char c;
	clrscr();
	cout<<"\n\t********  Proram for math opration *******";
	cout<<"\n_____________________________________________";
	cout<<"\n\n** For whom u want to calculate volume **\n";
	cout<<"\n--------------------------------------------------------------------------";
	cout<<"\n\n1.Cylinder\n2.Cube\n3.Rectangle\n4.Exit\n";
	cout<<"\n=============================================\n";

	do
	 {
	 cout<<"\nEnter your choice : ";
	 cin>>ch;
	 switch(ch)
		{
		case 1:
			






cout<<"\nEnter the radious :";
			cin>>r;				//Scan value from user
			cout<<"\nEnter the hight :";
			cin>>h;
			cout<<"\nvolume of Cylinder is : "<<cylinder(r,h);break;
		case 2:
			cout<<"\nEnter the radious :";
			cin>>r;
								//Pass value to Function
			cout<<"\nvolume of  Cube is : "<<cube(r);break;	
		case 3:
			cout<<"\nEnter the lenth :";
			cin>>l;
			cout<<"\nEnter the Brdith :";
			cin>>b;
			cout<<"\nEnter the hight :";
			cin>>h;
		cout<<"\nvolume of Rectangle is : "<<rectangle(l,b,h);break;
		case 4:exit(0);
		default:cout<<"\nselect only 1 to 3 option";break;
		}
	cout<<"\n\ndo you want to continue (Y/N) ? :";
	cin>>c;
	}while(c=='y'||c=='Y');	
return(0);
}
