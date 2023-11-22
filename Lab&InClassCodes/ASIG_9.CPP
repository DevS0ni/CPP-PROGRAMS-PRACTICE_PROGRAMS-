#include<iostream.h>
#include<conio.h>
void main()
{
   int call,ncall,ncall1;
   float bill;
   clrscr();
   cout<<"\n enter the call:";
   cin>>call;
   if(call<=100)
   {
      bill=200;
   }
   else if(call>=101 &&  call<=150)
  {
    ncall=call-100;
    bill=200+(.60*ncall);
  }
  else if(call>=151 && call<=200)
  {
    ncall=call-100;
    ncall1=ncall-50;
    bill=200+(.50*ncall1)+((.60*ncall)-(.60*10));
  }
  else
  {
    ncall=call-200;
    bill=(.40*ncall);
  }
   cout<<"\n  call:"<<call;
   cout<<"\n  bill:"<<bill;
   getch();
}
