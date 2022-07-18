// C++ Program to display two 2 - Dimensional Arrays and adding the corresponding elements in both of them and storing them to a different array and display the required summation. 

#include<iostream>  // Declaration of the standard input/ output stream for the C++ Program.
#include<conio.h>  // Declaration of the console input/ output header file for the C++ program.
void main()  // Main or Start-up function for the program.
{
	int mat1[10][10],mat2[10][10],sum[10][10];  // Declaration of all the integer two - dimensional arrays for the program.
	int i,j,r,c;  // Declaration of the variables.

	clrscr();  // Pre-defined function in conio.h' (It clears the output screen)

	cout<<"Enter row && Column::";  // Prompting the user to enter the row and column for the arrays.
	cin>>r>>c;  // Inputing the rows and columns for the two-dimensional array.

	cout<<"====For First Matrix===="<<endl<<endl;  // Inputing the elements or members for the first matrix.

	for(i=0;i<r;i++)  // Initiating the loop to take the input from the user, into the first two-dimensional array.
	{
		for(j=0;j<c;j++)
		{
			cout<<"Enter element::";  // Taking elements as an input from the user.
			cin>>mat1[i][j];
		}
	}
	cout<<"====For Second Matrix===="<<endl<<endl;  // Taking the input from the user, into the second matrix or two-dimensional array.

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"Enter element::";  // Taking elements as an input from the user.
			cin>>mat2[i][j];
		}
	}

	cout<<"First Matrix.."<<endl;  // Displaying the first matrix, with the elements taken by the system from the user.

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<mat1[i][j]<<"  ";  // Displays the required matrix.
		}
		cout<<endl;
	}
	cout<<"Second Matrix.."<<endl;  // Displaying the second matrix, with the elements taken by the system from the user.

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<mat2[i][j]<<"  ";  // Displays the required matrix.
		}
		cout<<endl;
	}

	cout<<"Sum Of Matrix.."<<endl;  // Summation of the corresponding elements from  the two matrix (2 - dimensional array)



	for(i=0;i<r;i++)
	{
	 for(j=0;j<c;j++)
		{
			cout<<mat1[i][j]+mat2[i][j]<<"  ";  // Displays the summation of the two corresponding elements from the two matixes.
		       //	cout<<sum[i][j]<<" ";
		}
		cout<<endl;
	}
	getch();  // (Pre - defined function of 'conio.h') It holds up the output console until the user press or type any key to exit the console screen.
}
