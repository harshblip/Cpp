#include<iostream.h>
#include<conio.h>
double fib(int x,int y, int z);
double trib(int k, int j, int w, int t);
void main()

{
clrscr();
int ch,a,b,n,h,p,m,l;
cout<<"1>. generate fibonacci series."<<endl;
cout<<"2>. generate tribonacci series."<<endl;
cout<<"enter your choice: ";
cin
>>ch;
if(ch==1)
{
  fib(a,b,n);
}
if(ch==2)
{
  trib(h,p,m,l);
}
else
{
  cout<<"Wrong choice.";
}
getch();
}
double fib(int x,int y,int z)
{
  int s=0;
  cout<<"how many terms to be generated: ";
  cin>>z;
  x=0;
  y=1;
  cout<<"fibonacci series:- "<<endl;
  for(int i=0;i<z;i++)
  {
    s=x;
    cout<<" "<<s;
    s=x+y;
    x=y;
    y=s;
  }
  return s;
  }
double trib(int k,int j, int w, int t)
{
  int s2=0;
  cout<<"how many terms to be generated: ";
  cin>>t;
  k=0;
  j=1;
  w=2;
  cout<<"tribonacci series:- "<<endl;
  for(int g=0;g<t;g++)
  {
    s2=k;
    cout<<" "<<s2;
    s2=k+j+w;
    k=j;
    j=w;
    w=s2;
   }
   return s2;
   }