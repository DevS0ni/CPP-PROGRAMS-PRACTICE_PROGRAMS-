
// 1 -D Array:::

#include<iostream.h>
#include<conio.h>

	class arr
	{
		int a[5];
		int i;

		public:

		void getdata()
		{
			for( i=0;i<5;i++)
			{
				cout<<"\n\t Insert Elelement ::";
				cin>>a[i];
			}
		}


		void show()
		{
			int sum=0;
			int eve=0;
			int zr=0;
			int min=0;
			int max=0;

			for(i=0;i<5;i++)
			{
				if(a[i]%2==0)
				{
					sum=sum+a[i];
					eve++;

				}
			}
			 for(i=0;i<5;i++)
			{
				if(a[i]==0)
				{
					zr++;
				}
			}

			for(i=0;i<5;i++)
			{
				if(a[i]>max)
				{
					max=a[i];
				}
			}

			for(i=0;i<5;i++)
			{
				if(a[i]<min)
				{
					min=a[i];
				}
			}
			cout<<"\n\t Sum is "<<sum;
			cout<<"\n\t Total Eve No is "<<eve;
			cout<<"\n\t Total Zr No is "<<zr;
			cout<<"\n\t Maximum is "<<max;
			cout<<"\n\t Minimum is "<<min;

		}
};

void main()
{
	arr a;
		
	clrscr();
	
	a.getdata();
	a.show();
}			


