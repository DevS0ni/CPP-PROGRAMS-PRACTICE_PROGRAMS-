#include<iostream.h>
#include<conio.h>
void main()
{
	int mat1[10][10],mat2[10][10],sum[10][10];
	int i,j,r,c;

	clrscr();

	cout<<"Enter row && Column::";
	cin>>r>>c;

	cout<<"====For First Matrix===="<<endl<<endl;

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"Enter element::";
			cin>>mat1[i][j];
		}
	}
	cout<<"====For Second Matrix===="<<endl<<endl;

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"Enter element::";
			cin>>mat2[i][j];
		}
	}

	cout<<"First Matrix.."<<endl;

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<mat1[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<"Second Matrix.."<<endl;

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<mat2[i][j]<<"  ";
		}
		cout<<endl;
	}

	cout<<"Sum Of Matrix.."<<endl;



	for(i=0;i<r;i++)
	{
	 for(j=0;j<c;j++)
		{
			cout<<mat1[i][j]+mat2[i][j]<<"  ";
		       //	cout<<sum[i][j]<<" ";
		}
		cout<<endl;
	}
	getch();
}
