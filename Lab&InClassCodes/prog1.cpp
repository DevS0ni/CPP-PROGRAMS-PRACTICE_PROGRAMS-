#include<iostream>
using namespace std;
int main()
{
	int size;
	int i,j;
	char ch='*';
	cout<<"Enetr No:-";
	//cin>>size;
	
	cout<<endl;
    for (int i = 0; i < 8; i++) { 
        cout<<" ";
        for (int o = 0; o < 8; o++) { 
            if (i == 0 && (o <= 1)) 
                cout<<" ";
            else if (i == 1 
                     && (o == 0 || o == 8 - i 
                         || (o > 1))) 
                cout<<" "; 
            else if (i == 2 
                     && (o == 1 || o == 8 - i 
                         || (o > 1))) 
                cout<<" "; 
            else if ((i == 3 || i == 4 
                      || i == 5) 
                     && (o > 0)) 
               cout<<" ";
            else if (i == 6 
                     && (o == 0 || o == 8 + 5 - i 
                         || (o > 1))) 
                cout<<" ";
            else if (i == 7 
                     && (o <= 1)) 
                cout<<" ";
            else { 
                cout<<ch; 
            } 
        } 
        cout<<endl;
    } 

	
	return 0;
}
